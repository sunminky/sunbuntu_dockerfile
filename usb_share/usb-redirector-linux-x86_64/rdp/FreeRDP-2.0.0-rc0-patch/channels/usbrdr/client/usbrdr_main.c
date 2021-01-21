/**
 * FreeRDP: A Remote Desktop Protocol client.
 * USB Redirector (www.incentivespro.com) Virtual Channel Support
 *
 * Copyright 2017-2019 SimplyCore LLC.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifndef _WIN32
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#endif
#include <winpr/synch.h>
#include "usbrdr_main.h"

static void
usbrdr_send(usbrdrPlugin* usbrdr, const void *data, size_t len)
{
	UINT status;
	wStream* s;

	s = Stream_New(NULL, len);
	Stream_Write(s, data, len);

	status = usbrdr->channelEntryPointsEx.pVirtualChannelWriteEx(usbrdr->InitHandle, usbrdr->OpenHandle,
		Stream_Buffer(s), (UINT32) Stream_GetPosition(s), s);

	if (status != CHANNEL_RC_OK)
	{
		Stream_Free(s, TRUE);
		WLog_ERR(TAG,  "VirtualChannelWriteEx failed with %s (0x%08X)",
				 WTSErrorToString(status), status);
	}
}


/* find connection context by connection id */
static USBRDR_CONNECTION_CONTEXT *
usbrdr_connection_find(usbrdrPlugin* usbrdr, LONG64 id_connection)
{
	USBRDR_CONNECTION_CONTEXT *ptr;

	WaitForSingleObject(usbrdr->hListMutex, INFINITE);

	ptr = usbrdr->connection_list;

	while (ptr)
	{
		if (ptr->socket == id_connection) break;
		ptr = ptr->next;
	}

	ReleaseMutex(usbrdr->hListMutex);

	return ptr;
}

/* remove connection context by connection id */
static void 
usbrdr_connection_remove(usbrdrPlugin* usbrdr, USBRDR_CONNECTION_CONTEXT *ctx)
{
	USBRDR_CONNECTION_CONTEXT *ptr, *prevptr;

	WaitForSingleObject(usbrdr->hListMutex, INFINITE);

	prevptr = NULL;
	ptr = usbrdr->connection_list;

	while (ptr)
	{
		if (ptr == ctx) break;
		prevptr = ptr;
		ptr = ptr->next;
	}

	if (ptr)
	{
		if(prevptr) prevptr->next = ptr->next; else usbrdr->connection_list = ptr->next;
	}

	ReleaseMutex(usbrdr->hListMutex);
}

/* add connection context to the list */
static void 
usbrdr_connection_add(usbrdrPlugin* usbrdr, USBRDR_CONNECTION_CONTEXT *ptr)
{
	WaitForSingleObject(usbrdr->hListMutex, INFINITE);
	ptr->next = usbrdr->connection_list;
	usbrdr->connection_list = ptr;
	ReleaseMutex(usbrdr->hListMutex);
}

/* close all socket connections, terminate all threads */
static void 
usbrdr_process_rdp_cleanup(usbrdrPlugin* usbrdr)
{
	while (usbrdr->connection_list)
	{
		USBRDR_CONNECTION_CONTEXT *context = usbrdr->connection_list;

		usbrdr->connection_list = usbrdr->connection_list->next;

		WLog_DBG(TAG,"cleaning up connection %08X...\n", context->socket);

		context->bDisconnecting = TRUE;
		context->bStop = TRUE;
		shutdown(context->socket, SHUT_RD);
		WaitForSingleObject(context->hThread, INFINITE);
		CloseHandle(context->hThread);
		free(context);

		WLog_DBG(TAG,"connection %08X cleaned up\n", context->socket);
	}
}

static void *
socket_handler_thread(void *data)
{
	USBRDR_CONNECTION_CONTEXT *context = (USBRDR_CONNECTION_CONTEXT*)data;
	usbrdrPlugin* usbrdr = context->usbrdr;
	void *buf;

	buf = malloc(USBRDR_RECV_BUFFER_SIZE);
	if(buf == NULL)
	{
		WLog_WARN(TAG, "THREAD %08X no memory for recv buffer\n", context->socket);
		return NULL;
	}

	while (!context->bStop)
	{
		int nrecv;
		USBRDR_RDP_HEADER header;

		nrecv = recv(context->socket, buf, USBRDR_RECV_BUFFER_SIZE,0);

		if (nrecv <= 0) 
		{
			WLog_DBG(TAG,"THREAD %08X recv error\n", context->socket);
			break;
		}

		header.id_connection = context->socket;
		header.packet_size = nrecv;

		WaitForSingleObject(usbrdr->hSendMutex, INFINITE);
		usbrdr_send(usbrdr, &header, sizeof(header));
		usbrdr_send(usbrdr, buf, nrecv);
		ReleaseMutex(usbrdr->hSendMutex);
	}

	free(buf);

	if (!context->bDisconnecting)
	{
		USBRDR_RDP_HEADER header;

		WLog_DBG(TAG,"THREAD %08X sending disconnect for\n", context->socket);

		header.id_connection = context->socket;
		header.packet_size = -1;

		WaitForSingleObject(usbrdr->hSendMutex, INFINITE);
		usbrdr_send(usbrdr, &header, sizeof(header));
		ReleaseMutex(usbrdr->hSendMutex);
	}

	shutdown(context->socket, SHUT_WR);
	closesocket(context->socket);

	WLog_DBG(TAG,"THREAD %08X terminating\n", context->socket);
	return NULL;
}

static void 
usbrdr_process_rdp_connect(usbrdrPlugin* usbrdr)
{
	int			s = -1;
	USBRDR_CONNECTION_CONTEXT *context = NULL;

	do /* while(0) */
	{
		USBRDR_RDP_HEADER reply_header;
		struct sockaddr_un sun;
		UINT32 sign, n;

		reply_header.id_connection = 0;
		reply_header.packet_size = -1;

		context = malloc(sizeof(*context));

		if (context == NULL)
		{
			WLog_WARN(TAG, "no memory for connection context\n");
			break;
		}

		s = socket(AF_UNIX, SOCK_STREAM, 0);

		if (s < 0) 
		{
			WLog_WARN(TAG, "cannot create socket\n");
			break;
		}
		
		memset(&sun, 0, sizeof(sun));
		sun.sun_family = AF_UNIX;
		sun.sun_path[0] = '\0';
		strcpy(sun.sun_path+1, USBRDR_PIPE_NAME);

		if (connect(s, (struct sockaddr *)&sun, sizeof(sun)) != 0) 
		{
			WLog_WARN(TAG, "cannot connect to daemon");
			break;
		}

		sign = USBRDR_RDP_SIGNATURE;

		if (send(s, &sign, sizeof(sign), 0) <= 0)
		{
			WLog_WARN(TAG, "cannot handshake with daemon");
			break;
		}

		n = strlen(usbrdr->server_name);

		if (send(s, &n, sizeof(n), 0) <= 0)
		{
			WLog_WARN(TAG, "cannot handshake with daemon");
			break;
		}

		if (n)
		{
			if (send(s, usbrdr->server_name, n, 0) <= 0)
			{
				WLog_WARN(TAG, "cannot handshake with daemon");
				break;
			}
		}

		WaitForSingleObject(usbrdr->hSendMutex, INFINITE);

		context->socket = s;
		context->bStop = FALSE;
		context->bDisconnecting = FALSE;
		context->usbrdr = usbrdr;
		context->hThread = CreateThread(NULL, 0,
			(LPTHREAD_START_ROUTINE) socket_handler_thread, context, CREATE_SUSPENDED, NULL);
	
		if (context->hThread == NULL)
		{
			ReleaseMutex(usbrdr->hSendMutex);
			WLog_WARN(TAG, "cannot create thread\n");
			break;
		}

		ResumeThread(context->hThread);

		reply_header.id_connection = s;
		reply_header.packet_size = 0;

		usbrdr_send(usbrdr, &reply_header, sizeof(reply_header));

		usbrdr_connection_add(usbrdr, context);

		ReleaseMutex(usbrdr->hSendMutex);

		s = -1;
		context = NULL;

		WLog_DBG(TAG,"new connection successful, connectionid is %08X\n", (LONG32)reply_header.id_connection);
	} while(0);

	/* cleanup on error */
	if (s > 0) 
	{
		shutdown(s, SHUT_RDWR);
		closesocket(s);
	}
	if (context) free(context);
}

static void 
usbrdr_process_rdp_disconnect(usbrdrPlugin* usbrdr)
{
	USBRDR_CONNECTION_CONTEXT *connection_context = usbrdr_connection_find(usbrdr, usbrdr->rdp_header.id_connection);	

	if (!connection_context) return;

	WLog_DBG(TAG,"disconnecting %08X...\n", (LONG32)usbrdr->rdp_header.id_connection);

	connection_context->bDisconnecting = TRUE;
	connection_context->bStop = TRUE;
	shutdown(connection_context->socket, SHUT_RD);
	WaitForSingleObject(connection_context->hThread, INFINITE);
	CloseHandle(connection_context->hThread);

	usbrdr_connection_remove(usbrdr, connection_context);

	free(connection_context);
	WLog_DBG(TAG,"connection %08X is now disconnected\n", (LONG32)usbrdr->rdp_header.id_connection);
}

static int 
usbrdr_process_rdp_data_header(usbrdrPlugin* usbrdr)
{
	usbrdr->connection_context = usbrdr_connection_find(usbrdr, usbrdr->rdp_header.id_connection);	
	return 1;
}

static int 
usbrdr_process_rdp_data_chunk(usbrdrPlugin* usbrdr, void *data, size_t length)
{
	size_t tosend = (usbrdr->rdp_header.packet_size > length) ? length : usbrdr->rdp_header.packet_size;

	usbrdr->rdp_header.packet_size -= tosend;

	if (usbrdr->connection_context)
	{
		if( send(usbrdr->connection_context->socket, data, tosend, 0) <= 0 )
		{
			usbrdr->connection_context->bStop = TRUE;
			shutdown(usbrdr->connection_context->socket, SHUT_RD);
			WaitForSingleObject(usbrdr->connection_context->hThread, INFINITE);
			CloseHandle(usbrdr->connection_context->hThread);
			usbrdr_connection_remove(usbrdr, usbrdr->connection_context);
			free(usbrdr->connection_context);
			usbrdr->connection_context = NULL;
		}
	}
	return (usbrdr->rdp_header.packet_size > 0);
}

static UINT usbrdr_virtual_channel_event_data_received(usbrdrPlugin* usbrdr,
		void* pData, UINT32 dataLength, UINT32 totalLength, UINT32 dataFlags)
{
	if ((dataFlags & CHANNEL_FLAG_SUSPEND) || (dataFlags & CHANNEL_FLAG_RESUME))
	{
		return CHANNEL_RC_OK;
	}

	switch(usbrdr->rdp_state)
	{
		case 0: // state: waiting for header

			if( dataLength == sizeof(USBRDR_RDP_HEADER) )
			{
				memcpy(&usbrdr->rdp_header, pData, sizeof(USBRDR_RDP_HEADER));

				if( usbrdr->rdp_header.id_connection == 0 && usbrdr->rdp_header.packet_size == 0 )
				{
					WLog_DBG(TAG,"connect request\n");
					usbrdr_process_rdp_connect(usbrdr);

				} else if( usbrdr->rdp_header.id_connection != 0 && usbrdr->rdp_header.packet_size == -1 )
				{
					WLog_DBG(TAG,"disconnect request for %08X\n", 
						(LONG32)usbrdr->rdp_header.id_connection);
					usbrdr_process_rdp_disconnect(usbrdr);

				} else if( usbrdr->rdp_header.id_connection == 0 && usbrdr->rdp_header.packet_size == -1 )
				{
					WLog_DBG(TAG,"cleanup request\n");
					usbrdr_process_rdp_cleanup(usbrdr);

				} else
				{
					WLog_DBG(TAG,"data header\n");
					if (usbrdr_process_rdp_data_header(usbrdr))
						usbrdr->rdp_state = 1; // change state to: wait for data
				} 
			} else
			{
				WLog_WARN(TAG, "error, wrong header size\n");
			}
			break;

		case 1: // state: waiting for data
			WLog_DBG(TAG,"data chunk %d bytes\n", usbrdr->rdp_header.packet_size);
			if (!usbrdr_process_rdp_data_chunk(usbrdr, pData, dataLength))
				usbrdr->rdp_state = 0; /* change state to: wait for header */
			break;

		case -1: // state: initialization failed in usbrdr_process_connect
			break;

		default: // omg! something is wrong!
			WLog_WARN(TAG, "invalid rdp connection state");
			break;			
	}

	return CHANNEL_RC_OK;
}

static VOID VCAPITYPE usbrdr_virtual_channel_open_event_ex(LPVOID lpUserParam, DWORD openHandle, 
		UINT event, LPVOID pData, UINT32 dataLength, UINT32 totalLength, UINT32 dataFlags)
{
	usbrdrPlugin* usbrdr = (usbrdrPlugin*) lpUserParam; 
	UINT error = CHANNEL_RC_OK;

	if (!usbrdr || (usbrdr->OpenHandle != openHandle))
	{
		WLog_ERR(TAG, "usbrdr_virtual_channel_open_event_ex: error no match");
		return;
	}

	switch (event)
	{
		case CHANNEL_EVENT_DATA_RECEIVED:
			error = usbrdr_virtual_channel_event_data_received(usbrdr, pData, dataLength, totalLength, dataFlags);
			break;

		case CHANNEL_EVENT_WRITE_COMPLETE:
			Stream_Free((wStream*)pData, TRUE);
			break;

		case CHANNEL_EVENT_USER:
			break;
	}

	if (error && usbrdr->rdpcontext)
		setChannelError(usbrdr->rdpcontext, error, "usbrdr_virtual_channel_open_event_ex reported an error");

}

static UINT usbrdr_virtual_channel_event_connected(usbrdrPlugin* usbrdr, const char *hostname, size_t length)
{
	UINT32 status;

	WLog_DBG(TAG,"usbrdr_process_connect");

	status = usbrdr->channelEntryPointsEx.pVirtualChannelOpenEx(usbrdr->InitHandle,
		&usbrdr->OpenHandle, usbrdr->channelDef.name, usbrdr_virtual_channel_open_event_ex);

	if (status != CHANNEL_RC_OK)
	{
		WLog_ERR(TAG, "VirtualChannelOpenEx failed with %s (0x%08X)",
				 WTSErrorToString(status), status);
		return status;
	}

	if (length == 0)
	{
		hostname = "RDP";
		length = 3;
	}

	memset(usbrdr->server_name, 0, sizeof(usbrdr->server_name));
	strncpy(usbrdr->server_name, hostname, MIN(length, sizeof(usbrdr->server_name)-1));

	usbrdr->rdp_state = 0;
	usbrdr->connection_list = NULL;
	usbrdr->connection_context = NULL;
	memset(&usbrdr->rdp_header, 0, sizeof(usbrdr->rdp_header));

	usbrdr->hSendMutex = CreateMutex(NULL, FALSE, NULL);
    
	if (usbrdr->hSendMutex == NULL)
	{
		WLog_WARN(TAG, "can not initialize channel ìutex\n");
		goto error;
	}

	usbrdr->hListMutex = CreateMutex(NULL, FALSE, NULL);

	if (usbrdr->hListMutex == NULL)
	{
		WLog_WARN(TAG, "can not initialize connection list mutex\n");
		goto error;
	}

	return CHANNEL_RC_OK;

error:
	usbrdr->rdp_state = -1;

	return CHANNEL_RC_OK;
}

static UINT usbrdr_virtual_channel_event_disconnected(usbrdrPlugin* usbrdr)
{
	UINT rc;

	rc = usbrdr->channelEntryPointsEx.pVirtualChannelCloseEx(usbrdr->InitHandle, usbrdr->OpenHandle);

	if (rc != CHANNEL_RC_OK)
	{
		WLog_ERR(TAG, "VirtualChannelCloseEx failed with %s (0x%08x)",
				 WTSErrorToString(rc), rc);
		return rc;
	}

	usbrdr->OpenHandle = 0;

	usbrdr_process_rdp_cleanup(usbrdr);

	if (usbrdr->hListMutex)
	{
		CloseHandle(usbrdr->hListMutex);
		usbrdr->hListMutex = NULL;
	}

	if (usbrdr->hSendMutex)
	{
		CloseHandle(usbrdr->hSendMutex);
		usbrdr->hSendMutex = NULL;
	}

	return CHANNEL_RC_OK;
}

static UINT usbrdr_virtual_channel_event_terminated(usbrdrPlugin* usbrdr)
{
	usbrdr->InitHandle = 0;

	usbrdr_process_rdp_cleanup(usbrdr);

	if (usbrdr->hListMutex)
	{
		CloseHandle(usbrdr->hListMutex);
		usbrdr->hListMutex = NULL;
	}

	if (usbrdr->hSendMutex)
	{
		CloseHandle(usbrdr->hSendMutex);
		usbrdr->hSendMutex = NULL;
	}

	free(usbrdr);

	return CHANNEL_RC_OK;
}


static VOID VCAPITYPE usbrdr_virtual_channel_init_event_ex(LPVOID lpUserParam, LPVOID pInitHandle, UINT event, LPVOID pData, UINT dataLength)
{
	usbrdrPlugin* usbrdr = (usbrdrPlugin*) lpUserParam; 
	UINT error = CHANNEL_RC_OK;

	if (!usbrdr) // || (usbrdr->InitHandle != pInitHandle)
	{
		WLog_ERR(TAG,  "usbrdr_virtual_channel_init_event_ex: error no match");
		return;
	}

	switch (event)
	{
		case CHANNEL_EVENT_CONNECTED:
			// rdp connection established, pData points to hostname string
			if ((error = usbrdr_virtual_channel_event_connected(usbrdr, (const char*)pData, dataLength)))
				WLog_ERR(TAG, "usbrdr_virtual_channel_event_connected failed with error %lu!", error);
			break;

		case CHANNEL_EVENT_DISCONNECTED:
			// rdp connection closed, pData is NULL
			if ((error = usbrdr_virtual_channel_event_disconnected(usbrdr)))
				WLog_ERR(TAG, "usbrdr_virtual_channel_event_disconnected failed with error %lu!", error);
			break;

		case CHANNEL_EVENT_TERMINATED:
			// rdp client shutting down, pData is NULL
			if ((error = usbrdr_virtual_channel_event_terminated(usbrdr)))
				WLog_ERR(TAG, "usbrdr_virtual_channel_event_terminated failed with error %lu!", error);
			break;
	}

	if (error && usbrdr->rdpcontext)
		setChannelError(usbrdr->rdpcontext, error, "usbrdr_virtual_channel_init_event_ex reported an error");
}

#ifdef BUILTIN_CHANNELS
#define VirtualChannelEntryEx		usbrdr_VirtualChannelEntryEx
#else
#define VirtualChannelEntryEx		FREERDP_API VirtualChannelEntryEx
#endif

BOOL VCAPITYPE VirtualChannelEntryEx(PCHANNEL_ENTRY_POINTS pEntryPoints, PVOID pInitHandle)
{
	UINT rc;
	CHANNEL_ENTRY_POINTS_FREERDP_EX* pEntryPointsEx;

#if USBRDR_RDP_VCHANNEL_ENABLE
	usbrdrPlugin* usbrdr_rdp;
#endif

#if USBRDR_TS_VCHANNEL_ENABLE
	usbrdrPlugin* usbrdr_ts;
#endif

#if USBRDR_RDP_VCHANNEL_ENABLE

	usbrdr_rdp = (usbrdrPlugin*) malloc(sizeof(usbrdrPlugin));

	if (usbrdr_rdp)
	{
		ZeroMemory(usbrdr_rdp, sizeof(*usbrdr_rdp));

		usbrdr_rdp->channelDef.options =
			CHANNEL_OPTION_INITIALIZED |
			CHANNEL_OPTION_ENCRYPT_RDP;

		strcpy(usbrdr_rdp->channelDef.name, USBRDR_VCHANNEL_NAME_RDP);

		pEntryPointsEx = (CHANNEL_ENTRY_POINTS_FREERDP_EX*)pEntryPoints;

		if ((pEntryPointsEx->cbSize >= sizeof(CHANNEL_ENTRY_POINTS_FREERDP_EX)) &&
			(pEntryPointsEx->MagicNumber == FREERDP_CHANNEL_MAGIC_NUMBER))
		{
			usbrdr_rdp->rdpcontext = pEntryPointsEx->context;
			CopyMemory(&usbrdr_rdp->channelEntryPointsEx, pEntryPoints, sizeof(CHANNEL_ENTRY_POINTS_FREERDP_EX));
		} else
		{
			CopyMemory(&usbrdr_rdp->channelEntryPointsEx, pEntryPoints, sizeof(CHANNEL_ENTRY_POINTS));
		}

		usbrdr_rdp->InitHandle = pInitHandle; 

		rc = usbrdr_rdp->channelEntryPointsEx.pVirtualChannelInitEx(
			usbrdr_rdp, NULL, usbrdr_rdp->InitHandle,
			&usbrdr_rdp->channelDef, 1,
			VIRTUAL_CHANNEL_VERSION_WIN2000,
			usbrdr_virtual_channel_init_event_ex);

		if (rc != CHANNEL_RC_OK)
		{
			WLog_ERR(TAG, "VirtualChannelInitEx(RDP) failed with %s (0x%08x)",
				WTSErrorToString(rc), rc);
			free(usbrdr_rdp);
			usbrdr_rdp = NULL;
		}
	} else
	{
		WLog_ERR(TAG, "not enough memory for virtual channel");
	}

#endif

#if USBRDR_TS_VCHANNEL_ENABLE

	usbrdr_ts = (usbrdrPlugin*) malloc(sizeof(usbrdrPlugin));

	if (usbrdr_ts)
	{
		ZeroMemory(usbrdr_ts, sizeof(*usbrdr_ts));

		usbrdr_ts->channelDef.options =
			CHANNEL_OPTION_INITIALIZED |
			CHANNEL_OPTION_ENCRYPT_RDP;

		strcpy(usbrdr_ts->channelDef.name, USBRDR_VCHANNEL_NAME_TS);

		pEntryPointsEx = (CHANNEL_ENTRY_POINTS_FREERDP_EX*)pEntryPoints;

		if ((pEntryPointsEx->cbSize >= sizeof(CHANNEL_ENTRY_POINTS_FREERDP_EX)) &&
			(pEntryPointsEx->MagicNumber == FREERDP_CHANNEL_MAGIC_NUMBER))
		{
			usbrdr_ts->rdpcontext = pEntryPointsEx->context;
			CopyMemory(&usbrdr_ts->channelEntryPointsEx, pEntryPoints, sizeof(CHANNEL_ENTRY_POINTS_FREERDP_EX));
		} else
		{
			CopyMemory(&usbrdr_ts->channelEntryPointsEx, pEntryPoints, sizeof(CHANNEL_ENTRY_POINTS));
		}

		usbrdr_ts->InitHandle = pInitHandle; 

		rc = usbrdr_ts->channelEntryPointsEx.pVirtualChannelInitEx(
			usbrdr_ts, NULL, usbrdr_ts->InitHandle,
			&usbrdr_ts->channelDef, 1,
			VIRTUAL_CHANNEL_VERSION_WIN2000,
			usbrdr_virtual_channel_init_event_ex);

		if (rc != CHANNEL_RC_OK)
		{
			WLog_ERR(TAG, "VirtualChannelInit(TS) failed with %s (0x%08x)",
				WTSErrorToString(rc), rc);
			free(usbrdr_ts);
			usbrdr_ts = NULL;
		}
	} else
	{
		WLog_ERR(TAG, "not enough memory for virtual channel");
	}

#endif

	return TRUE;
}
