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

#ifdef _USBD_ENABLE_STUB_
#include "usbd.h"
#include "loader.h"
#if KERNEL_LT_EQ((0x2e0+9040-0x262e),(0xb67+85-0xbb6),(0x37a+1648-0x9c4))
#include <linux/smp_lock.h>
#endif
#if KERNEL_GT_EQ((0x82f+2560-0x122d),(0xef0+5845-0x25bf),(0x16cc+1208-0x1b65))
#if KERNEL_LT_EQ((0xcb8+4296-0x1d7e),(0xb1a+2540-0x1500),(0x29a+2761-0xd43))



#include "vhci_hcd.h"
#endif
#endif
static struct list_head lIIlIIl;static spinlock_t lIIIIl;extern struct IIIIII*
IIIlllIl;extern struct list_head IlIIllIl;extern struct mutex lllIIIlI;
#if KERNEL_LT_EQ((0xf93+4310-0x2067),(0x1063+4386-0x217f),(0x1281+1107-0x16c1))
extern struct notifier_block IllllIII;
#else 
extern struct notifier_block IllIIIIl;
#endif
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t IIlIlIIll;extern atomic_t IlIIIIII;extern atomic_t IIIllllII;
#endif 


static struct usb_device_id lIIIIllII[]={{.driver_info=(0xc0c+1937-0x139c)},{}};
MODULE_DEVICE_TABLE(usb,lIIIIllII);static int IIlIIIIII(struct usb_interface*
IllllI,const struct usb_device_id*id);static void lIIIllIll(struct usb_interface
*IllllI);
#if KERNEL_GT_EQ((0x1cba+604-0x1f14),(0x11d2+4024-0x2184),(0x1aef+931-0x1e7b))
static int IlIIIllI(struct usb_interface*IIIIll);static int llIlIlII(struct 
usb_interface*IIIIll);
#elif KERNEL_GT_EQ((0x18a5+3604-0x26b7),(0x14d6+2417-0x1e41),(0x2ff+2494-0xcab))
static void IlIIIllI(struct usb_interface*IIIIll);static void llIlIlII(struct 
usb_interface*IIIIll);
#endif
void lllIIlII(struct llIII*IlIlI,int llIlIlI,int llIIIIlI);void llIlIIIl(struct 
llIII*IlIlI);int lIllIIlIl(struct llIII*IlIlI,lllIII lllIl);void IlIlllIl(struct
 llIII*IlIlI,lllIII lllIl);struct IIlII*llIIllII(struct llIII*IlIlI,lllIII lllIl
);struct usb_driver llIIllI={.name=lIIIIIll,.id_table=lIIIIllII,.probe=IIlIIIIII
,.disconnect=lIIIllIll,
#if KERNEL_GT_EQ((0x1c34+2553-0x262b),(0xf1f+5063-0x22e0),(0x1066+1131-0x14bf))
.pre_reset=IlIIIllI,.post_reset=llIlIlII,
#endif
};


static int IIlIIIIII(struct usb_interface*IllllI,const struct usb_device_id*id){
int IIIll=-ENODEV;int IlIlIlIlI=(0x53f+3235-0x11e2);struct usb_device*IlIII=
interface_to_usbdev(IllllI);const char*llllIll=llIIIllI(&IlIII->dev.kobj,
GFP_KERNEL);llIll(
"\x76\x69\x64\x3d\x30\x78\x25\x30\x34\x58\x20\x70\x69\x64\x3d\x30\x78\x25\x30\x34\x58\x20\x72\x65\x76\x3d\x30\x78\x25\x30\x34\x58\x20\x62\x75\x73\x5f\x69\x64\x3d" "\"" "\x25\x73" "\"" "\x20\x68\x75\x62\x3d" "\"" "\x25\x73" "\"" "\x20\x70\x61\x74\x68\x3d" "\"" "\x25\x73" "\"" "\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3d\x25\x75\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x75" "\n"
,le16_to_cpu(IlIII->descriptor.idVendor),le16_to_cpu(IlIII->descriptor.idProduct
),le16_to_cpu(IlIII->descriptor.bcdDevice),lIllll(&IlIII->dev),IIIIIlIl(IlIII),
llllIll,IllllI->cur_altsetting->desc.bInterfaceNumber,IlIII->actconfig->desc.
bNumInterfaces);if(llllIll)kfree(llllIll);if(lllllIIl(IlIII)){IlIlIlIlI=
(0x1b9a+2399-0x24f8);}else if(IllllIIl(IlIII)){IIIll=lIIIlIIl(IlIII);if(IIIll<
(0x546+7012-0x20aa)){IlIIlI(
"\x63\x61\x6e\x20\x6e\x6f\x74\x20\x61\x74\x74\x61\x63\x68\x20\x75\x73\x62\x20\x64\x65\x76\x69\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,lIllll(&IlIII->dev),IIIll);}else{IlIlIlIlI=(0x27d+3815-0x1163);}}if(IlIlIlIlI){
IIIll=lIIIlIlII(IllllI,(0x1481+345-0x15da));if(IIIll<(0x9aa+5418-0x1ed4)){IlIIlI
(
"\x63\x61\x6e\x20\x6e\x6f\x74\x20\x61\x74\x74\x61\x63\x68\x20\x75\x73\x62\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,lIllll(&IllllI->dev),IIIll);}}return IIIll;}
static void lIIIllIll(struct usb_interface*IllllI){llIll("\x2b\x2b" "\n");if(
usb_get_intfdata(IllllI)!=(void*)-(0x1dc0+766-0x20bd)){lIIlllIlI(IllllI);}llIll(
"\x2d\x2d" "\n");}
#if KERNEL_GT_EQ((0xf+906-0x397),(0xe97+522-0x109b),(0x1078+5530-0x25fb))
static int IlIIIllI(struct usb_interface*IIIIll){return(0x981+2865-0x14b2);}
static int llIlIlII(struct usb_interface*IIIIll){return(0x7e4+3993-0x177d);}
#elif KERNEL_GT_EQ((0x34+6170-0x184c),(0x1c12+1846-0x2342),(0x5d9+543-0x7e6))
static void IlIIIllI(struct usb_interface*IIIIll){return;}static void llIlIlII(
struct usb_interface*IIIIll){return;}
#endif


int lllllIIl(struct usb_device*IlIII){int lIllIlllI=(0xe50+2419-0x17c3);struct 
llIII*IlIlI;spin_lock(&lIIIIl);list_for_each_entry(IlIlI,&lIIlIIl,lIlIII){if(
IlIlI->IIlll==IlIII){lIllIlllI=(0x89a+1511-0xe80);break;}}spin_unlock(&lIIIIl);
return lIllIlllI;}
int lIIIlIIl(struct usb_device*IlIII){llIll("\x2b\x2b\x20\x25\x73" "\n",lIllll(&
IlIII->dev));if(IIIlllllI(IlIII)==NULL){llIll(
"\x63\x61\x6e\x20\x6e\x6f\x74\x20\x63\x72\x65\x61\x74\x65\x20\x73\x74\x75\x62" "\n"
);return-ENOMEM;}llIll("\x2d\x2d" "\n");return(0x4b1+1302-0x9c7);}
int llIIIIII(struct usb_device*IlIII){struct llIII*IlIlI;llIll(
"\x2b\x2b\x20\x25\x73" "\n",lIllll(&IlIII->dev));IlIlI=IlllIlIl(IlIII);if(IlIlI)
{IIlIIIII(IlIlI,NULL,(0xad6+5201-0x1f27),(0xe60+5911-0x2576));IIIllIII(IlIlI);
IlIllIl(IlIlI);}else{llIll(
"\x64\x65\x76\x69\x63\x65\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n");}llIll(
"\x2d\x2d" "\n");return(0x859+4809-0x1b22);}int lIIIlIlII(struct usb_interface*
IllllI,int IlIIlllll){int IIIll=-ENODEV;struct usb_device*IlIII=
interface_to_usbdev(IllllI);struct llIII*IlIlI;llIll("\x2b\x2b" "\n");IlIlI=
IlllIlIl(IlIII);if(IlIlI){


IlIlI->IIIlIlIl+=IlIIlllll;IlIlI->IIlIllll=IlIII->actconfig?IlIII->actconfig->
desc.bNumInterfaces:(0x1031+5237-0x24a6);if(++IlIlI->IIllIlII==IlIlI->IIlIllll){
lllIIIIll(IlIlI);}llIll(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64" "\n"
,IlIlI->IIllIlII,IlIlI->IIlIllll);usb_set_intfdata(IllllI,IlIlI);
IIIll=(0x815+7012-0x2379);}llIll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
void lIIlllIlI(struct usb_interface*IllllI){struct llIII*IlIlI;llIll(
"\x2b\x2b" "\n");
IlIlI=usb_get_intfdata(IllllI);usb_set_intfdata(IllllI,NULL);IlIlI->IIllIlII--;
llllIlIIl(IlIlI);
IIlIIIlII(IlIlI,IllllI,NULL,(0x1744+2479-0x20f2));llIll(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64" "\n"
,IlIlI->IIllIlII,IlIlI->IIlIllll);IlIllIl(IlIlI);
llIll("\x2d\x2d" "\n");}

int lllIIIllI(void){int llllllIlI=(0x576+432-0x726);int IIllIIlll=
(0xb71+6504-0x24d9);int IIIll=(0x11c7+3641-0x2000);do{INIT_LIST_HEAD(&lIIlIIl);
spin_lock_init(&lIIIIl);INIT_LIST_HEAD(&IlIIllIl);mutex_init(&lllIIIlI);IIIlllIl
=lIlllIIlI();if(IIIlllIl==NULL){IIIll=-ENOMEM;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x61\x6c\x6c\x6f\x63\x5f\x6d\x69\x6e\x6f\x72\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}


IIIll=usb_register(&llIIllI);if(IIIll!=(0x19e3+2593-0x2404)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x75\x73\x62\x5f\x72\x65\x67\x69\x73\x74\x65\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}llllllIlI=(0x621+3263-0x12df);
#if KERNEL_LT_EQ((0x190+4020-0x1142),(0xac1+5443-0x1ffe),(0xeaa+5586-0x2469))
usb_register_notify(&IllllIII);
#else 
IIIll=bus_register_notifier(llIIllI.drvwrap.driver.bus,&IllIIIIl);if(IIIll!=
(0x5d8+5432-0x1b10)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x62\x75\x73\x5f\x72\x65\x67\x69\x73\x74\x65\x72\x5f\x6e\x6f\x74\x69\x66\x69\x65\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}
#endif
IIllIIlll=(0x10fd+2014-0x18da);}while((0x184b+1551-0x1e5a));if(IIIll!=
(0x10e0+4269-0x218d)){if(IIllIIlll)
#if KERNEL_LT_EQ((0x23c1+317-0x24fc),(0x25d+2692-0xcdb),(0x19f2+1712-0x208f))
usb_unregister_notify(&IllllIII);
#else 
bus_unregister_notifier(llIIllI.drvwrap.driver.bus,&IllIIIIl);
#endif
if(llllllIlI)usb_deregister(&llIIllI);if(IIIlllIl){lllIIIII(IIIlllIl);IIIlllIl=
NULL;}}return IIIll;}void lllllIIII(void){struct list_head IlIIlII;IIllIlll();
#if KERNEL_LT_EQ((0x1d3d+470-0x1f11),(0x319+8270-0x2361),(0xc3f+5974-0x2382))
usb_unregister_notify(&IllllIII);
#else 
bus_unregister_notifier(llIIllI.drvwrap.driver.bus,&IllIIIIl);
#endif
usb_deregister(&llIIllI);if(IIIlllIl){lllIIIII(IIIlllIl);IIIlllIl=NULL;}
INIT_LIST_HEAD(&IlIIlII);spin_lock(&lIIIIl);list_splice_init(&lIIlIIl,&IlIIlII);
spin_unlock(&lIIIIl);while(!list_empty(&IlIIlII)){struct llIII*IlIlI=list_entry(
IlIIlII.next,struct llIII,lIlIII);IIIllIII(IlIlI);}}struct llIII*IIIlllllI(
struct usb_device*IlIII){char*llllIll;struct llIII*IlIlI;llllIll=llIIIllI(&IlIII
->dev.kobj,GFP_KERNEL);if(llllIll==NULL){return NULL;}IlIlI=IIIlIll(sizeof(*
IlIlI),GFP_KERNEL);if(IlIlI){INIT_LIST_HEAD(&IlIlI->lIlIII);init_waitqueue_head(
&IlIlI->IIIIlI);INIT_LIST_HEAD(&IlIlI->IIIIIIIl);spin_lock_init(&IlIlI->lllIIll)
;INIT_LIST_HEAD(&IlIlI->IIlllII);spin_lock_init(&IlIlI->lIlllI);INIT_LIST_HEAD(&
IlIlI->IIllllII);kref_init(&IlIlI->lIIlll);IlIlI->vid=le16_to_cpu(IlIII->
descriptor.idVendor);IlIlI->IlIIlIl=le16_to_cpu(IlIII->descriptor.idProduct);
IlIlI->llIlllI=le16_to_cpu(IlIII->descriptor.bcdDevice);strncpy(IlIlI->bus_id,
lIllll(&IlIII->dev),BUS_ID_SIZE-(0x192b+992-0x1d0a));IlIlI->llIIlIII=
(0xeb1+641-0x1132);IlIlI->IIIlIlIl=(0x116f+4537-0x2328);IlIlI->lIIlIIlI=
llIIlIlIl;IlIlI->IIlll=usb_get_dev(IlIII);IlIlI->IIlIllll=(0x1d3+1001-0x5bc);
IlIlI->IIllIlII=(0xd31+770-0x1033);IlIlI->llIllll=(0x1d2d+1838-0x245b);IlIlI->
lIIIlIll=llllIll;IlIlI->Illllll=(0x1ed5+112-0x1f45);IlIlI->lIlIlIlI=-
(0x7f4+7035-0x236e);IlIlI->IIlllIlI=-(0x647+7059-0x21d9);IlIlI->lIlIIlIl=-
(0x290+1006-0x67d);IlIlI->IIlIII=IIIllIlI;IlIlI->IIllIII=NULL;spin_lock_init(&
IlIlI->lIIIll);IlIlI->lllIlll=(strcmp(IIIIIlIl(IlIII),
"\x65\x68\x63\x69\x5f\x68\x63\x64")==(0x568+1841-0xc99));







if(strcmp(IIIIIlIl(IlIII),"\x64\x77\x63\x5f\x6f\x74\x67")==(0x2d3+1276-0x7cf)){


IlIlI->lIIlIIIl=lIllIll;IlIlI->lllIlIlI=lIllIll;IlIlI->lllIlllI=lIllIll;}else{
#if KERNEL_LT_EQ((0x6da+1327-0xc07),(0x13e3+1664-0x1a5d),(0x45+2557-0xa24))


IlIlI->lIIlIIIl=IllIIlI;IlIlI->lllIlIlI=lIllIll;IlIlI->lllIlllI=IllIIlI;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x70\x74\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);
#elif KERNEL_EQ((0x10ea+947-0x149b),(0xfdf+1452-0x1585),(0x8c4+3614-0x16c3))



if(bus_to_hcd(IlIII->bus)->driver->flags&HCD_USB3){IlIlI->lIIlIIIl=llIllII;IlllI
(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x73\x67\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}else{IlIlI->lIIlIIIl=IllIIlI;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x70\x74\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}IlIlI->lllIlIlI=lIllIll;IlIlI->lllIlllI=IllIIlI;
#elif KERNEL_EQ((0x47f+4375-0x1594),(0x1625+1792-0x1d1f),(0x2c0+7486-0x1fde))



if(bus_to_hcd(IlIII->bus)->driver->flags&HCD_USB3){IlIlI->lIIlIIIl=llIllII;IlIlI
->lllIlIlI=llIllII;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x73\x67\x20\x69\x6e\x74\x3d\x73\x67\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}else{IlIlI->lIIlIIIl=IllIIlI;IlIlI->lllIlIlI=lIllIll;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x70\x74\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}IlIlI->lllIlllI=IllIIlI;
#elif KERNEL_GT_EQ((0x1959+2183-0x21de),(0x1c8c+650-0x1f10),(0xfe8+674-0x1269))





if(IlIII->bus->sg_tablesize>(0x300+996-0x6e4)){IlIlI->lIIlIIIl=llIllII;IlIlI->
lllIlIlI=llIllII;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x73\x67\x20\x69\x6e\x74\x3d\x73\x67\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}else{IlIlI->lIIlIIIl=IllIIlI;IlIlI->lllIlIlI=lIllIll;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x70\x74\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}IlIlI->lllIlllI=IllIIlI;
#endif
}
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IIlIlIIll);
#endif
if(lIlllllIl(IlIlI)<(0x1807+3064-0x23ff)){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IlIIIIII);
#endif
IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x61\x6c\x6c\x6f\x63\x20\x6d\x69\x6e\x6f\x72\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIllIl(IlIlI);return NULL;}spin_lock(&lIIIIl);list_add(&IlIlI->lIlIII,&
lIIlIIl);spin_unlock(&lIIIIl);if(IIlllIlll(IlIlI)<(0x1a57+1674-0x20e1)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x72\x65\x67\x69\x73\x74\x65\x72\x20\x6d\x69\x6e\x6f\x72\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIllIII(IlIlI);return NULL;}return IlIlI;}lIIlIIIIl(llllIll);return NULL;}
void IIIllIII(struct llIII*IlIlI){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IlIIIIII);
#endif
spin_lock(&lIIIIl);list_del_init(&IlIlI->lIlIII);spin_unlock(&lIIIIl);IllllllIl(
IlIlI);IlIllIl(IlIlI);}
void lIlIIlIll(struct kref*IIIIllI){struct llIII*IlIlI=container_of(IIIIllI,
struct llIII,lIIlll);IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x65\x73\x74\x72\x6f\x79\x2b\x2b" "\n"
);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IIIllllII);
#endif
spin_lock(&lIIIIl);list_del_init(&IlIlI->lIlIII);spin_unlock(&lIIIIl);IlIIIllII(
IlIlI);while(!list_empty(&IlIlI->IIIIIIIl)){struct IIlII*lIlII=list_entry(IlIlI
->IIIIIIIl.next,struct IIlII,lIlIIl);list_del(&lIlII->lIlIIl);IIllIIl(lIlII);}
while(!list_empty(&IlIlI->IIlllII)){struct IIlII*lIlII=list_entry(IlIlI->IIlllII
.next,struct IIlII,lIlIIl);list_del(&lIlII->lIlIIl);IIllIIl(lIlII);}if(IlIlI->
IIlll){usb_put_dev(IlIlI->IIlll);IlIlI->IIlll=NULL;}if(IlIlI->lIIIlIll){
lIIlIIIIl(IlIlI->lIIIlIll);IlIlI->lIIIlIll=NULL;}IlIIIl(IlIlI);IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x65\x73\x74\x72\x6f\x79\x2d\x2d" "\n"
);}struct llIII*IlllIlIl(struct usb_device*IlIII){struct llIII*IlIlI;spin_lock(&
lIIIIl);list_for_each_entry(IlIlI,&lIIlIIl,lIlIII){if(IlIlI->IIlll==IlIII){
IlIIlIII(IlIlI);spin_unlock(&lIIIIl);return IlIlI;}}spin_unlock(&lIIIIl);return 
NULL;}void lllIIIIll(struct llIII*IlIlI){if(!IlIlI->llIllll){IlIlI->llIllll=
(0x105+113-0x175);lIlIIIIl(IlIlI);lIIIIIlll(IlIlI->lllll);llIll(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x6f\x6e\x6c\x69\x6e\x65\x3d\x25\x64" "\n"
,IlIlI->IIllIlII,IlIlI->IIlIllll,IlIlI->llIllll);}}void llllIlIIl(struct llIII*
IlIlI){if(IlIlI->llIllll){IlIlI->llIllll=(0xd96+1076-0x11ca);lIlIlIIIl(IlIlI->
lllll);llIll(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x6f\x6e\x6c\x69\x6e\x65\x3d\x25\x64" "\n"
,IlIlI->IIllIlII,IlIlI->IIlIllll,IlIlI->llIllll);}}void llllIIlII(struct llIII*
IlIlI){if(IlIlI->llIllll){lIIIIIlll(IlIlI->lllll);}else{lIlIlIIIl(IlIlI->lllll);
}}int lIIIlllIl(struct llIII*IlIlI){llIll(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x6f\x6e\x6c\x69\x6e\x65\x3d\x25\x64" "\n"
,IlIlI->IIllIlII,IlIlI->IIlIllll,IlIlI->llIllll);return(IlIlI->llIllll==
(0x733+4183-0x178a));}const char*IllIlllll(void*context){struct llIII*IlIlI=
context;return IlIlI->lIIIlIll;}const char*lIIlIlllI(void*context){
#if KERNEL_GT_EQ((0x1647+3479-0x23dc),(0x66f+4734-0x18e7),(0x442+7314-0x20be))
struct llIII*IlIlI=context;return lIllIlII(&IlIlI->IIlll->dev)?
"\x74\x72\x75\x65":"\x66\x61\x6c\x73\x65";
#else
return"\x66\x61\x6c\x73\x65";
#endif
}


void IllIllllI(struct llIII*IlIlI,int llIllIl){int i,llIllIIl;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x72\x65\x73\x65\x74\x2b\x2b" "\n");
IlIlI->IIIlIlIl=(0x22dc+948-0x2690);if(IlIlI->IIlll->actconfig){



for(i=(0x8b0+3181-0x151d);i<IlIlI->IIlll->actconfig->desc.bNumInterfaces;i++){
struct usb_interface*IllllI=IlIlI->IIlll->actconfig->interface[i];if(IllllI&&
IllllI->num_altsetting>(0x96d+5871-0x205b)){struct usb_host_interface*lIIIIII=
usb_altnum_to_altsetting(IllllI,(0x116c+2172-0x19e8));if(lIIIIII){llIllIIl=
usb_set_interface(IlIlI->IIlll,lIIIIII->desc.bInterfaceNumber,lIIIIII->desc.
bAlternateSetting);}}}}if(llIllIl==lIIlIlIll){
if((IlIlI->llIIlIII&lIIIlllII)==(0x467+2464-0xe07)){IlIIlI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x72\x65\x73\x65\x74\x3a\x20\x74\x72\x79\x69\x6e\x67\x20\x74\x6f\x20\x72\x65\x73\x65\x74\x20\x64\x65\x76\x69\x63\x65\x20\x76\x69\x64\x20\x25\x30\x34\x78\x20\x70\x69\x64\x20\x25\x30\x34\x78" "\n"
,IlIlI->vid,IlIlI->IlIIlIl);llIllIIl=usb_reset_device(IlIlI->IIlll);IlIIlI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x72\x65\x73\x65\x74\x3a\x20\x75\x73\x62\x5f\x72\x65\x73\x65\x74\x5f\x64\x65\x76\x69\x63\x65\x20\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x25\x64" "\n"
,llIllIIl);}}memset(IlIlI->Illlllll,(0x1a9+1306-0x6c3),sizeof(IlIlI->Illlllll));
memset(IlIlI->IIllIIIl,(0x1cc+132-0x250),sizeof(IlIlI->IIllIIIl));IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x72\x65\x73\x65\x74\x2d\x2d" "\n");}
void lllllIllI(struct llIII*IlIlI,int llIllIl){if(usb_lock_device_for_reset(
IlIlI->IIlll,NULL)>=(0xc9d+253-0xd9a)){IllIllllI(IlIlI,llIllIl);
usb_unlock_device(IlIlI->IIlll);}else{memset(IlIlI->Illlllll,(0x636+7319-0x22cd)
,sizeof(IlIlI->Illlllll));memset(IlIlI->IIllIIIl,(0x1720+276-0x1834),sizeof(
IlIlI->IIllIIIl));}}int IIllIlIIl(struct llIII*IlIlI,int pipe){if(!usb_pipeisoc(
pipe))return(0x486+8243-0x24b9);if(usb_pipein(pipe))return(++IlIlI->lIlllIIIl[
usb_pipeendpoint(pipe)]);else return(++IlIlI->llIlIlIlI[usb_pipeendpoint(pipe)])
;}int lIIIIlIl(struct llIII*IlIlI,int pipe){if(!usb_pipeisoc(pipe))return
(0x24c+5772-0x18d8);if(usb_pipein(pipe))return(--IlIlI->lIlllIIIl[
usb_pipeendpoint(pipe)]);else return(--IlIlI->llIlIlIlI[usb_pipeendpoint(pipe)])
;}void lIlllIllI(struct llIII*IlIlI,int pipe){if(!usb_pipeisoc(pipe))return;if(
usb_pipein(pipe))IlIlI->lIlllIIIl[usb_pipeendpoint(pipe)]=(0x20b4+1290-0x25be);
else IlIlI->llIlIlIlI[usb_pipeendpoint(pipe)]=(0xe16+2213-0x16bb);}int IIlIlIIl(
struct llIII*IlIlI,int pipe){if(!usb_pipeisoc(pipe))return(0x8ff+5426-0x1e31);if
(usb_pipein(pipe))return IlIlI->Illlllll[usb_pipeendpoint(pipe)];else return 
IlIlI->IIllIIIl[usb_pipeendpoint(pipe)];}void IIIllIll(struct llIII*IlIlI,int 
pipe,int lIIIllI){if(!usb_pipeisoc(pipe))return;if(usb_pipein(pipe))IlIlI->
Illlllll[usb_pipeendpoint(pipe)]=lIIIllI;else IlIlI->IIllIIIl[usb_pipeendpoint(
pipe)]=lIIIllI;}static void IlIlIIIIl(struct IIlII*lIlII){if(lIlII->lIIIII==
lIllIll){if(lIlII->Illlll.lIlll){llIll(
"\x3a\x20\x75\x6e\x6c\x69\x6e\x6b\x69\x6e\x67\x20\x75\x72\x62\x20\x30\x78\x25\x70\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->Illlll.lIlll,lIlII->lllIl);


usb_unlink_urb(lIlII->Illlll.lIlll);}}else if(lIlII->lIIIII==IllIIlI){llIll(
"\x3a\x20\x75\x6e\x6c\x69\x6e\x6b\x69\x6e\x67\x20\x75\x63\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->lllIl);IIlIlllll(lIlII->llllII.IIIlllI);}
#if KERNEL_GT_EQ((0xa46+6197-0x2279),(0x1c91+624-0x1efb),(0x211d+457-0x22c7))
else if(lIlII->lIIIII==llIllII){if(lIlII->IIIIIIl.lIlll){llIll(
"\x3a\x20\x75\x6e\x6c\x69\x6e\x6b\x69\x6e\x67\x20\x73\x67\x20\x30\x78\x25\x70\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->IIIIIIl.lIlll,lIlII->lllIl);


usb_unlink_urb(lIlII->IIIIIIl.lIlll);}}
#endif
else{
IlIIlI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x6e\x6c\x69\x6e\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x65\x72\x72\x6f\x72\x21" "\n"
);}}static void IllIlllIl(struct IIlII*lIlII){if(lIlII->lIIIII==lIllIll){if(
lIlII->Illlll.lIlll){llIll(
"\x3a\x20\x6b\x69\x6c\x69\x6e\x67\x20\x75\x72\x62\x20\x30\x78\x25\x70\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->Illlll.lIlll,lIlII->lllIl);
#if KERNEL_GT_EQ((0xaad+3020-0x1677),(0x12ef+2834-0x1dfb),(0xd73+857-0x10b0))


usb_poison_urb(lIlII->Illlll.lIlll);
#else
usb_kill_urb(lIlII->Illlll.lIlll);
#endif
}}else if(lIlII->lIIIII==IllIIlI){llIll(
"\x3a\x20\x6b\x69\x6c\x6c\x69\x6e\x67\x20\x75\x63\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->lllIl);lIlIIlIlI(lIlII->llllII.IIIlllI);}
#if KERNEL_GT_EQ((0x17da+484-0x19bc),(0x8bf+7546-0x2633),(0xefd+1385-0x1447))
else if(lIlII->lIIIII==llIllII){if(lIlII->IIIIIIl.lIlll){llIll(
"\x3a\x20\x6b\x69\x6c\x6c\x69\x6e\x67\x20\x73\x67\x20\x30\x78\x25\x70\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->IIIIIIl.lIlll,lIlII->lllIl);
#if KERNEL_GT_EQ((0xe0a+4094-0x1e06),(0x1cb3+1668-0x2331),(0x456+651-0x6c5))


usb_poison_urb(lIlII->IIIIIIl.lIlll);
#else
usb_kill_urb(lIlII->IIIIIIl.lIlll);
#endif
}}
#endif
else{
IlIIlI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6b\x69\x6c\x6c\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x65\x72\x72\x6f\x72\x21" "\n"
);}}
void IIlIIIlII(struct llIII*IlIlI,struct usb_interface*IIIIll,struct IIlII*
lIIIlIl,int lIllIIl){int i;unsigned long flags;struct IIlII*llIIlI,*lIIIlII;
llIll("\x2b\x2b" "\n");
if(IlIlI->Illllll&&IlIlI->lIlIlIlI==IIIIll->cur_altsetting->desc.
bInterfaceNumber)
{lllIIlII(IlIlI,(0xa6b+2253-0x1338),lIllIIl);}for(i=(0x10d7+4974-0x2445);i<
IIIIll->cur_altsetting->desc.bNumEndpoints;i++){do{lIIIlII=NULL;
spin_lock_irqsave(&IlIlI->lIlllI,flags);list_for_each_entry(llIIlI,&IlIlI->
IIlllII,lIlIIl){int lIIIIll;
if(llIIlI==lIIIlIl)continue;
if(llIIlI->endpoint!=IIIIll->cur_altsetting->endpoint[i].desc.bEndpointAddress)
continue;lIIIIll=atomic_xchg(&llIIlI->state,lIIllll);
if(lIIIIll==lIIllll||lIIIIll==lllIIllIl)continue;llIIlI->lIllIIl=lIllIIl;
if(llIIlI->IIIlIIl.llIlIIlI){


llIIlI=llIIllII(IlIlI,llIIlI->lllIl);}if(lIIIIll==llIlIII){



kref_get(&llIIlI->lIIlll);

lIIIlII=llIIlI;break;}}spin_unlock_irqrestore(&IlIlI->lIlllI,flags);if(lIIIlII){
IllIlllIl(lIIIlII);kref_put(&lIIIlII->lIIlll,IllIlIll);}}while(lIIIlII);}llIll(
"\x2d\x2d" "\n");}void lIIIIIlII(struct llIII*IlIlI,int endpoint,struct IIlII*
lIIIlIl){unsigned long flags;struct IIlII*llIIlI,*IIlIllI;llIll("\x2b\x2b" "\n")
;if(IlIlI->Illllll)
{if(endpoint==IlIlI->IIlllIlI||endpoint==IlIlI->lIlIIlIl){llIlIIIl(IlIlI);}}




do{IIlIllI=NULL;spin_lock_irqsave(&IlIlI->lIlllI,flags);list_for_each_entry(
llIIlI,&IlIlI->IIlllII,lIlIIl){int lIIIIll;
if(llIIlI==lIIIlIl)continue;
if(llIIlI->endpoint!=endpoint)continue;lIIIIll=atomic_xchg(&llIIlI->state,
lIIllll);
if(lIIIIll==lIIllll||lIIIIll==lllIIllIl)continue;
if(llIIlI->IIIlIIl.llIlIIlI){


llIIlI=llIIllII(IlIlI,llIIlI->lllIl);}if(lIIIIll==llIlIII){



kref_get(&llIIlI->lIIlll);

IIlIllI=llIIlI;break;}}spin_unlock_irqrestore(&IlIlI->lIlllI,flags);if(IIlIllI){
IlIlIIIIl(IIlIllI);kref_put(&IIlIllI->lIIlll,IllIlIll);}}while(IIlIllI);llIll(
"\x2d\x2d" "\n");}void IllIIllII(struct llIII*IlIlI,lllIII lllIl,struct IIlII*
lIIIlIl){int IIIlIIll;unsigned long flags;struct IIlII*llIIlI,*IIlIllI;llIll(
"\x2b\x2b" "\n");if(IlIlI->Illllll){if(lIllIIlIl(IlIlI,lllIl))return;}
spin_lock_irqsave(&IlIlI->lIlllI,flags);



IIIlIIll=(0x8f8+3651-0x173b);IIlIllI=NULL;list_for_each_entry(llIIlI,&IlIlI->
IIlllII,lIlIIl){
if(llIIlI==lIIIlIl)continue;if(llIIlI->lllIl==lllIl){if(atomic_xchg(&llIIlI->
state,lIIllll)==llIlIII){



kref_get(&llIIlI->lIIlll);

IIlIllI=llIIlI;}IIIlIIll=(0x1762+527-0x1970);break;}}if(!IIIlIIll){IlIlllIl(
IlIlI,lllIl);}spin_unlock_irqrestore(&IlIlI->lIlllI,flags);if(IIlIllI){IlIlIIIIl
(IIlIllI);kref_put(&IIlIllI->lIIlll,IllIlIll);}else{llIll(
"\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n");}llIll("\x2d\x2d" "\n");}void 
IIlIIIII(struct llIII*IlIlI,struct IIlII*lIIIlIl,int IIIIIIIll,int llIIIIlI){
struct IIlII*lIIIlII,*llIIlI;unsigned long flags;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6b\x69\x6c\x6c\x5f\x61\x6c\x6c\x5f\x72\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x2b\x2b" "\n"
);

lllIIlII(IlIlI,IIIIIIIll,llIIIIlI);

spin_lock_irqsave(&IlIlI->lIlllI,flags);while(!list_empty(&IlIlI->IIllllII)){
struct IlIlIlII*IIlIlI=list_entry(IlIlI->IIllllII.next,struct IlIlIlII,lIlIII);
list_del(&IIlIlI->lIlIII);IlIIIl(IIlIlI);}

do{


lIIIlII=NULL;list_for_each_entry(llIIlI,&IlIlI->IIlllII,lIlIIl){if(IIIIIIIll){
llIIlI->llIlIlI=(0xee7+1929-0x166f);}if(llIIIIlI){
llIIlI->lIllIIl=(0x1a7+2299-0xaa1);}
if(llIIlI!=lIIIlIl&&atomic_xchg(&llIIlI->state,lIIllll)==llIlIII){



kref_get(&llIIlI->lIIlll);

lIIIlII=llIIlI;break;}}spin_unlock_irqrestore(&IlIlI->lIlllI,flags);if(lIIIlII){
IllIlllIl(lIIIlII);kref_put(&lIIIlII->lIIlll,IllIlIll);}spin_lock_irqsave(&IlIlI
->lIlllI,flags);}while(lIIIlII);spin_unlock_irqrestore(&IlIlI->lIlllI,flags);
IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6b\x69\x6c\x6c\x5f\x61\x6c\x6c\x5f\x72\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x2d\x2d" "\n"
);}
int IllIlIIl(struct usb_device*IIlll,IIIlll endpoint){int IlIIllI;struct 
usb_host_endpoint*ep;ep=(endpoint&(0x1e94+1082-0x224e))?IIlll->ep_in[endpoint&
(0x5b1+8163-0x2585)]:IIlll->ep_out[endpoint&(0x2113+16-0x2114)];if(!ep){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x67\x65\x74\x5f\x65\x6e\x64\x70\x6f\x69\x6e\x74\x5f\x6d\x61\x78\x70\x61\x63\x6b\x65\x74\x3a\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x69\x73\x20\x4e\x55\x4c\x4c" "\n"
);return-ENODEV;}IlIIllI=le16_to_cpu(ep->desc.wMaxPacketSize);if((ep->desc.
bmAttributes&USB_ENDPOINT_XFERTYPE_MASK)!=USB_ENDPOINT_XFER_ISOC){IlIIllI=
IlIIllI&(0x18cd+3045-0x1cb3);}else if(IIlll->speed==USB_SPEED_FULL)
{IlIIllI=IlIIllI&(0xe42+5817-0x1cfc);}else if(IIlll->speed==USB_SPEED_HIGH)
{IlIIllI=(IlIIllI&(0x1aa4+1577-0x18ce))*((0x12dd+3814-0x21c2)+((IlIIllI>>
(0x875+7519-0x25c9))&(0x246+6424-0x1b5b)));}
#if KERNEL_GT_EQ((0x1574+3310-0x2260),(0xcc4+1608-0x1306),(0x1fd3+1357-0x2501)) \
&& KERNEL_LT_EQ((0x408+7696-0x2216),(0x1d15+943-0x20be),(0x212+809-0x519))
else if(IIlll->speed==USB_SPEED_SUPER)
{IlIIllI=(IlIIllI&(0xfaa+4699-0x1a06))*(ep->ss_ep_comp?(((0x922+7409-0x2612)+ep
->ss_ep_comp->desc.bMaxBurst)*((0x7a0+1909-0xf14)+(ep->ss_ep_comp->desc.
bmAttributes&(0xbff+5357-0x20e9)))):(0xccb+3318-0x19c0));}
#endif 
#if KERNEL_GT_EQ((0xba4+6759-0x2609),(0x5e5+4579-0x17c2),(0x3c4+8761-0x25da))
else if(IIlll->speed==USB_SPEED_SUPER)
{IlIIllI=(IlIIllI&(0x1242+1107-0xe96))*((0x158d+2891-0x20d7)+ep->ss_ep_comp.
bMaxBurst)*((0x15f+3499-0xf09)+(ep->ss_ep_comp.bmAttributes&(0x1333+446-0x14ee))
);}
#endif 
#if KERNEL_GT_EQ((0xc63+3970-0x1be1),(0xbe1+486-0xdc1),(0x123+2558-0xb21))
else if(IIlll->speed==USB_SPEED_SUPER_PLUS)
{
IlIIllI=(IlIIllI&(0x2143+3486-0x26e2))*((0x2a6+3330-0xfa7)+ep->ss_ep_comp.
bMaxBurst)*((0x1d51+158-0x1dee)+(ep->ss_ep_comp.bmAttributes&(0x14b4+447-0x1670)
));}
#endif 
else{return-EPROTO;}IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x67\x65\x74\x5f\x65\x6e\x64\x70\x6f\x69\x6e\x74\x5f\x6d\x61\x78\x70\x61\x63\x6b\x65\x74\x3a\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x30\x78\x25\x30\x32\x78\x20\x6d\x61\x78\x70\x61\x63\x6b\x65\x74\x3d\x25\x64" "\n"
,endpoint,IlIIllI);return IlIIllI;}
#endif 

