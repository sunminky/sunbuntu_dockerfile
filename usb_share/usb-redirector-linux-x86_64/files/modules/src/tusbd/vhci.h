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

#ifndef IlIIIIIll
#define IlIIIIIll
#ifdef _USBD_ENABLE_VHCI_
#include "vhci_hcd.h"


#if KERNEL_LT((0x4ea+6582-0x1e9e),(0xb96+864-0xef0),(0x8a0+4208-0x18fc))
#  define lIIllII	(0x20f+5116-0x15fc)
#else
#  if USB_MAXCHILDREN < (0x902+4237-0x1980)
#    define lIIllII USB_MAXCHILDREN
#  else
#    define lIIllII (0xcb6+271-0xdb6)
#  endif
#endif

#define IlIIllII ((lIIllII / (0x3dc+6768-0x1e44)) + (0x9a5+2610-0x13d6))
struct IlIlIl{struct list_head lIlIII;struct IIIIII*lllll;struct kref lIIlll;int
 lIIlI;int llIIIll;int speed;int IlIIlIlI;u16 vid;u16 IlIIlIl;u16 llIlllI;struct
 usb_hcd*parent;wait_queue_head_t IIIIlI;spinlock_t IlIIll;struct list_head 
IIlllII;struct list_head IIIIlII;struct list_head IIlIIlIl;void*IlllllII;
size_t llIIIlll;void*lllIlIIl;
size_t IllllIll;};struct IlIIIll{struct list_head lIlIII;struct urb*lIlll;};

struct llIIIl{struct list_head lIlIIl;struct IlIlIl*lIllI;lllIII lllIl;struct 
list_head IIIllIl;struct IlIIIll urb;IllII IIlIl;};struct IIllIl{spinlock_t lock
;struct IlIlIl*IIIlIII[lIIllII];int IlllIIll[lIIllII];int lIlIllI[lIIllII];
unsigned short IIIllII[lIIllII];unsigned short IllllIl[lIIllII];unsigned long 
IlllIll[lIIllII];struct usb_hcd*llIlI;struct usb_hcd*lIIIllll;unsigned llIlIIIIl
:(0x1a4d+2432-0x23cc);};enum IIlIIlllll{IllIIIII=(0xaf0+5716-0x2144),
IlIIIIlI,
IIIlIlI,
IlllIIl,
IlIllll,
IlIllII,
IIlIlIlll,
IIIIIIII,
};enum lIllIlllIl{IlIlIIIl,
IIIlllll,
lIllllIl,
llIIlIIl,
llIIlllI,
lIllIIll,
llIIIlII,
lIIlIlll,
IllIlIII,
lIlIlIIII,
lIIllIIIl,
IIIlllIII,
llIllllI,
lIlllIIl,
IlIlllII,
IllIllIll,
IIIlIIIlI,
IIIIllII,
IllllIlIl,
lIlIllIlI,
};int IlIlIlIll(void);void lIIllIlI(void);struct IlIlIl*lIIlIIIII(u16 vid,u16 
IlIIlIl,u16 llIlllI,int speed);void IlIIlIll(struct IlIlIl*lIllI);void llllIllIl
(void);int llllIllll(struct IlIlIl*lIllI);void llIIlIIlI(struct IlIlIl*lIllI);
struct IlIlIl*lIlllIlIl(int IIlllIIll);struct IlIlIl*IlllIIlIl(struct usb_hcd*
llIlI,int llIIIll);struct IlIlIl*IIIIIIIII(struct usb_hcd*llIlI,int lIIlI);void 
IlIlIlIl(struct IlIlIl*lIllI);struct llIIIl*llIlllll(struct IlIlIl*lIllI,gfp_t 
IlIIl);void IlIIIlll(struct llIIIl*lIIll);int IlIIllIII(struct llIIIl*lIIll);
void llllIllII(struct IlIlIl*lIllI,int status);void IIIIlIlI(struct llIIIl*lIIll
,int status);int IlIllllll(struct IlIlIl*lIllI,struct llIIIl*IllIIIlIl,void*
IllIl,size_t IIlIll);int llIlllllI(struct IlIlIl*lIllI,struct llIIIl*lIIll,IllII
 IIlIl,int*status);int IlIlIlIIl(struct IlIlIl*lIllI,struct llIIIl**IIlIlllI,
struct urb*lIlll);int lIIlIlIl(struct llIIIl*lIIll);void IllIlllII(struct IlIlIl
*lIllI,lllII*busnum,lllII*devnum);void lIlIlIlII(struct kref*IIIIllI);static 
inline struct IlIlIl*IIIlIlll(struct IlIlIl*lIllI){kref_get(&lIllI->lIIlll);
return lIllI;}static inline void IIlllIll(struct IlIlIl*lIllI){kref_put(&lIllI->
lIIlll,lIlIlIlII);}
#endif 
#endif 

