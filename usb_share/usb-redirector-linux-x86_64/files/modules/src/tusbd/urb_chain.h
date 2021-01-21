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

#ifndef IlllIIllI
#define IlllIIllI
struct lllIlI;typedef void(*urb_chain_complete_t)(struct lllIlI*);struct lllIlI{
spinlock_t lock;struct usb_device*IlIlII;int pipe;int lllIlll;int lIIIIIlI;int 
status;size_t lllIlllll;atomic_t IlIlIllI;void*context;urb_chain_complete_t 
complete;size_t llIIl;
struct urb*llllIl[(0x258+8825-0x24d1)];};struct IIIIl{void*transfer_buffer;
size_t transfer_buffer_length;
size_t actual_length;
unsigned int number_of_packets;
};struct llIIlIl{size_t llIIl;
struct IIIIl IlllIl[(0x714+4136-0x173c)];};struct lllIlI*llIIIIIll(int pipe,int 
interval,int lIIIIIlI,int lllIlll,struct usb_device*IlIlII,struct llIIlIl*lIIIlI
,void*context,urb_chain_complete_t complete,gfp_t IlIIl);void IIIIIlIII(struct 
lllIlI*llllI);int IlIIIllll(struct lllIlI*llllI);int IIIlIIlII(struct lllIlI*
llllI);int lIllIllll(struct lllIlI*llllI);int IIlIlllll(struct lllIlI*llllI);int
 lIlIIlIlI(struct lllIlI*llllI);int lIlIIIIll(struct lllIlI*llllI,struct urb*
lIlll);struct llIIlIl*IIIIIIlIl(size_t length,int lllIIllI);struct llIIlIl*
llIIIIlII(size_t length,lllllIll*lIIlllII,lllII lIIlIIIlI);size_t IIIIlIllI(
struct llIIlIl*llllI,const void*IIIIl,size_t length);size_t lIIIlIIlI(struct 
llIIlIl*llllI,void*IIIIl,size_t length);void llllllIll(struct llIIlIl*llllI);
size_t lllIlIIIlI(struct llIIlIl*llllI,lllllIll*lIIlllII,lllII lIIlIIIlI);size_t
 lllIlllIll(struct llIIlIl*llllI,lllllIll*lIIlllII,lllII lIIlIIIlI);
#endif 

