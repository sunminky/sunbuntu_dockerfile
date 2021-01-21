/*
 *
 *  Copyright (C) 2007-2020 SimplyCore, LLC
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *
 */

#ifndef IIllIIIll
#define IIllIIIll
#ifdef _USBD_ENABLE_STUB_
struct llIII{struct list_head lIlIII;struct IIIIII*lllll;struct kref lIIlll;u16 
vid;u16 IlIIlIl;u16 llIlllI;char bus_id[BUS_ID_SIZE];struct usb_device*IIlll;
char*lIIIlIll;int llIllll;int IIIlIlIl;int lIIlIIlI;int llIIlIII;int lllIlll;int
 IIlIllll;int IIllIlII;
int Illlllll[(0x3f6+3446-0x115c)];int IIllIIIl[(0x1a4+1972-0x948)];int lIlllIIIl
[(0x1633+1214-0x1ae1)];int llIlIlIlI[(0x1173+4401-0x2294)];wait_queue_head_t 
IIIIlI;spinlock_t lIlllI;struct list_head IIlllII;spinlock_t lllIIll;struct 
list_head IIIIIIIl;struct list_head IIllllII;
int lIIlIIIl;int lllIlIlI;int lllIlllI;
int Illllll;int lIlIlIlI;int IIlllIlI;int lIlIIlIl;int IIlIII;
spinlock_t lIIIll;struct IIIllI*IIllIII;};int lllIIIllI(void);void lllllIIII(
void);struct llIII*IIIlllllI(struct usb_device*IlIII);void IIIllIII(struct llIII
*IlIlI);const char*IllIlllll(void*context);const char*lIIlIlllI(void*context);
int lIIIlIIl(struct usb_device*IlIII);int llIIIIII(struct usb_device*IlIII);int 
lllllIIl(struct usb_device*IlIII);int lIIIlIlII(struct usb_interface*IllllI,int 
lllIIIIIl);void lIIlllIlI(struct usb_interface*IllllI);struct llIII*IlllIlIl(
struct usb_device*IlIII);void lllIIIIll(struct llIII*IlIlI);void llllIlIIl(
struct llIII*IlIlI);int lIIIlllIl(struct llIII*IlIlI);void llllIIlII(struct 
llIII*IlIlI);void lllllIllI(struct llIII*IlIlI,int llIllIl);void IllIllllI(
struct llIII*IlIlI,int llIllIl);int IIllIlIIl(struct llIII*IlIlI,int pipe);int 
lIIIIlIl(struct llIII*IlIlI,int pipe);void lIlllIllI(struct llIII*IlIlI,int pipe
);int IIlIlIIl(struct llIII*IlIlI,int pipe);void IIIllIll(struct llIII*IlIlI,int
 pipe,int lIIIllI);int IllIlIIl(struct usb_device*IIlll,IIIlll endpoint);void 
IIlIIIlII(struct llIII*IlIlI,struct usb_interface*IIIIll,struct IIlII*lIIIlIl,
int lIllIIl);void lIIIIIlII(struct llIII*IlIlI,int endpoint,struct IIlII*lIIIlIl
);void IIlIIIII(struct llIII*IlIlI,struct IIlII*lIIIlIl,int IIIIIIIll,int 
lIllIIl);void IllIIllII(struct llIII*IlIlI,lllIII lllIl,struct IIlII*lIIIlIl);
void lIlIIlIll(struct kref*IIIIllI);static inline struct llIII*IlIIlIII(struct 
llIII*IlIlI){kref_get(&IlIlI->lIIlll);return IlIlI;}static inline void IlIllIl(
struct llIII*IlIlI){kref_put(&IlIlI->lIIlll,lIlIIlIll);}


#pragma pack(push,1)


struct lllllIlI{lllII lIIIlIIIl;lllII IlIlllIIll;lllII IIlllIlII;IIIlll 
IllIIIllI;IIIlll IIIIllIlll;IIIlll llIllIlIl;IIIlll IIlllIlIlI[
(0xc05+3146-0x183f)];}__attribute__((packed));

struct llIIIIlIl{lllII lIlIlIIIII;lllII lIlIlIIIlI;lllII lIIIIlIlIl;IIIlll 
llIIIlIlII;}__attribute__((packed));
#pragma pack(pop)
#define lIlIIIIIl (0x2631+43-0x245c)
struct IIIllI{struct llIII*IlIlI;int ep_in;int ep_out;lllIII lIIIlllll;lllIII 
llIlllIII;lllIII IllIIIlI;struct IIlII*IllIIl;struct IIlII*IlIllI;lllII lIIlIlII
;int IlIllIlI;int status;struct kref lIIlll;struct urb*lIlll;void*IllIl;
int IIlllllI;
int llIlIlI;int lIllIIl;};enum llIllIIlI{llllIIII=(0x1984+2055-0x218b),IIlIllllI
,lIllllll,lllIlIllI,IIIllIlI,IlIlIIl};int lIlIIIIl(struct llIII*IlIlI);int 
IlIIIIlIl(struct IIlII*lIlII,gfp_t IlIIl);
#endif 
#endif 

