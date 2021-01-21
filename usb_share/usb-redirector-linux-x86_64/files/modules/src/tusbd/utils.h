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

#ifndef IlIIIllIl
#define IlIIIllIl
#include "urb_chain.h"
#include "sg.h"

#define IIIIIIlI		(0x1a88+2099-0x22bb)
#define IIIIIlI		(0x4dc+7064-0x2073)
#define llIlIII		(0x1853+2812-0x234d)
#define lllIIllIl	(0xbc1+1198-0x106c)
#define lIIllll		(0xd26+4656-0x1f52)

#define lIllIll		(0x437+2764-0xf03) 
#define IllIIlI	(0x1f12+504-0x2109) 
#if KERNEL_GT_EQ((0x1f12+329-0x2059),(0x16b+1062-0x58b),(0x7aa+5683-0x1dbe))
#define llIllII			(0x11e4+4380-0x22fe) 
#endif
struct IIlII{size_t lllllI;struct kref lIIlll;atomic_t state;lllIII lllIl;int 
lIIIII;
lIIIIlIIl IIIlIIl;IIIlll endpoint;
struct list_head lIlIIl;struct llIII*IlIlI;union{struct{struct urb*lIlll;
void*IllIl;
}Illlll;struct{struct lllIlI*IIIlllI;
struct llIIlIl*lIIIlI;
}llllII;
#if KERNEL_GT_EQ((0x1071+5040-0x241f),(0x1a7f+1895-0x21e0),(0xd16+2602-0x1721))
struct{struct urb*lIlll;
struct IIlIlIl sg;}IIIIIIl;
#endif
};char llIlIlI:(0x37a+4576-0x1559);
char lIllIIl:(0x130c+2625-0x1d4c);



};struct IlIlIlII{struct list_head lIlIII;
lllIII lllIl;int llIlllIlI;int IlIIIlIII;};
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t IlIIIIlll;extern atomic_t IlIlllIlI;extern atomic_t lllIllIl;
extern atomic_t lllIlIlIl;
#ifdef ATOMIC64_INIT
extern atomic64_t lIlIIIlI;
#endif
static inline struct urb*lIlllIl(int IlIllIlIl,gfp_t IlIIl){atomic_inc(&
IlIIIIlll);return usb_alloc_urb(IlIllIlIl,IlIIl);}static inline void lIllIIlI(
struct urb*urb){atomic_inc(&IlIlllIlI);usb_free_urb(urb);}static inline void*
lIlIlll(size_t lllllI,int flags){atomic_inc(&lllIllIl);
#ifdef ATOMIC64_INIT
atomic64_add(lllllI,&lIlIIIlI);
#endif
return kmalloc(lllllI,flags);}static inline void*IIIlIll(size_t lllllI,int flags
){atomic_inc(&lllIllIl);
#ifdef ATOMIC64_INIT
atomic64_add(lllllI,&lIlIIIlI);
#endif
return kzalloc(lllllI,flags);}static inline void IlIIIl(const void*IIllIlIlI){
atomic_inc(&lllIlIlIl);return kfree(IIllIlIlI);}
#else 
#define	lIlllIl	usb_alloc_urb
#define	lIllIIlI	usb_free_urb
#define	lIlIlll		kmalloc
#define	IIIlIll		kzalloc
#define	IlIIIl			kfree
#endif 
#ifdef _USBD_ENABLE_STUB_
struct IIlII*IlIIllIll(struct llIII*IlIlI,const void __user*IIIIl,size_t llllllI
);int IlllIIlII(struct IIlII*lIlII,void __user*IIIIl,size_t llllllI);struct 
IIlII*lllllllII(struct IIlII*lIlII,gfp_t IlIIl);void IIllIIl(struct IIlII*lIlII)
;void IllIlIll(struct kref*IIIIllI);
#endif
void lIIlIIllI(struct usb_device*IlIII,u8*llIlIlIl,u8*IIIIIlll,u8*lIllllII);
const char*lIlIIIII(unsigned long llllIIl);const char*IIIIlIlII(unsigned long 
llllIIl);void lIlIIlIIl(struct urb*lIlll,lllIII lllIl);void lllIlIl(IllII IIlIl)
;
#ifdef _USBD_ENABLE_VHCI_
int IlllllIII(struct list_head*lIllIlI,lllIII lllIl,void*IllIl,size_t IIlIll);
int llllIIlIl(IllII IIlIl,struct list_head*lIllIlI,int*status);
#endif
int llllIlIl(lllII status);int IllllIlll(void*llIIIlIlI,struct vm_area_struct*
IIllllI);lllIII llIlIIIlI(void);size_t IllIlIlI(struct usb_iso_packet_descriptor
*lIlllII,int llIIl,void*lllIllI,void*IIllII,int IllIIlII);size_t lIllIllI(struct
 usb_iso_packet_descriptor*lIlllII,int llIIl,int IllIIlII);void lllllllll(
dma_addr_t lllIllI,void*IIllII,unsigned long IIlIIl);void IIIllllIl(void*lllIllI
,dma_addr_t IIllII,unsigned long IIlIIl);char*llIIIllI(struct kobject*kobj,gfp_t
 IIIIllIII);void lIIlIIIIl(char*llllIll);int IIIIlIIlI(struct device*dev);int 
llIlllII(struct device*dev);int IlIlIIlII(struct device*dev);
#if KERNEL_GT_EQ((0x4e9+6264-0x1d5f),(0x421+2836-0xf2f),(0x20b+4605-0x13f2))
void lIIIIIII(struct device*dev,int IIlIllIl);int lIllIlII(struct device*dev);
#endif
#if KERNEL_GT_EQ((0x61+603-0x2ba),(0x22c+669-0x4c3),(0x4e1+2986-0x106d))
#define lIllll(IllIIllIl) dev_name((IllIIllIl))
#else
#define lIllll(IllIIllIl) (IllIIllIl)->bus_id
#endif
#if KERNEL_GT_EQ((0x936+2974-0x14d0),(0xb65+6475-0x24a4),(0xf3+980-0x4c7))
#define IIIIIlIl(IIllIIll) ((IIllIIll)->bus->controller->driver ? \
			(IIllIIll)->bus->controller->driver->name : (IIllIIll)->bus->sysdev->driver->\
name)
#else
#define IIIIIlIl(IIllIIll) ((IIllIIll)->bus->controller->driver->name)
#endif
#if KERNEL_LT_EQ((0x1f96+1392-0x2504),(0xacc+1202-0xf78),(0x161c+3899-0x2548))
#include <asm/semaphore.h>
struct mutex{struct semaphore lIlllllI;};static inline void mutex_init(struct 
mutex*mutex){sema_init(&mutex->lIlllllI,(0x100+2252-0x9cb));}static inline void 
mutex_lock(struct mutex*mutex){down(&mutex->lIlllllI);}static inline void 
mutex_unlock(struct mutex*mutex){up(&mutex->lIlllllI);}
#endif
#endif 

