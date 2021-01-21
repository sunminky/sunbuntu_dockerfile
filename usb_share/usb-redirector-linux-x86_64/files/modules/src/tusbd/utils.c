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

#include "usbd.h"
#include <linux/highmem.h>
#include <asm/page.h>
int IIlllllIl(const IllII IIlIl,size_t*lllllI,size_t*IIIlII,IIIlll*flags,IIIlll*
endpoint){switch(IIlIl->IIIlI.lIIlIII){case lIlIllIl:*lllllI=sizeof(IIlIl->
lIlIll);*flags=lIllII;*IIIlII=IIlIl->lIlIll.IIllI;*endpoint=(0xb80+2609-0x1531);
break;case lIIIIIIl:*lllllI=sizeof(IIlIl->lIlIll);*flags=(0xfec+5269-0x2481);*
IIIlII=IIlIl->lIlIll.IIllI;*endpoint=(0x135b+1007-0x174a);break;case IllIllII:*
lllllI=sizeof(IIlIl->IlIlIll)-sizeof(IIlIl->IlIlIll.lIIIIIl[(0x1a5+3949-0x1112)]
)+IIlIl->IlIlIll.IIlIlIlI*sizeof(IIlIl->IlIlIll.lIIIIIl[(0x1879+928-0x1c19)]);*
flags=(0x149b+755-0x178e);*IIIlII=(0xd55+3549-0x1b32);*endpoint=
(0x2ab+5968-0x19fb);break;case llIlllIl:*lllllI=sizeof(IIlIl->lIIlIlI);*flags=
(0x682+8258-0x26c4);*IIIlII=(0x183+8128-0x2143);*endpoint=(0x760+5969-0x1eb1);
break;case IlllIIIl:*lllllI=sizeof(IIlIl->llIlII);*flags=IIlIl->llIlII.Flags;*
IIIlII=IIlIl->llIlII.IIllI;*endpoint=IIlIl->llIlII.Endpoint|((*flags&lIllII)?
(0x11f5+3904-0x20b5):(0x9b+517-0x2a0));break;case IIlIlIll:*lllllI=sizeof(IIlIl
->IlIll);*IIIlII=IIlIl->IlIll.IIllI;*flags=IIlIl->IlIll.Flags;*endpoint=IIlIl->
IlIll.Endpoint|((*flags&lIllII)?(0x3b0+6940-0x1e4c):(0x1b4f+1579-0x217a));break;
case IllllllI:*lllllI=llllllll(IIlIl);*flags=IIlIl->lIIIl.Flags;*IIIlII=IIlIl->
lIIIl.IIllI;*endpoint=IIlIl->lIIIl.Endpoint|((*flags&lIllII)?(0x9bc+7528-0x26a4)
:(0xe5a+5285-0x22ff));break;case llIIIIIl:*lllllI=sizeof(IIlIl->lIllIl);*flags=
IIlIl->lIllIl.Flags;*IIIlII=IIlIl->lIllIl.IIllI;*endpoint=IIlIl->lIllIl.Endpoint
|((*flags&lIllII)?(0x462+1862-0xb28):(0xd91+4262-0x1e37));break;case llIIllll:*
lllllI=sizeof(IIlIl->IIlIIll);*flags=IIlIl->IIlIIll.Flags;*IIIlII=
(0xd0d+4100-0x1d11);*endpoint=IIlIl->IIlIIll.Endpoint|((*flags&lIllII)?
(0x2028+781-0x22b5):(0xecb+6046-0x2669));break;case IIlIllII:*lllllI=sizeof(
IIlIl->llIlIllI);*flags=(0x25+4825-0x12fe);*IIIlII=(0x5d1+6197-0x1e06);*endpoint
=(0xf3c+2083-0x1660);break;case IlIllIIlI:return-EINVAL;case llIIlIlI:*lllllI=
sizeof(IIlIl->llIlIIll);*flags=(0x10b+7180-0x1d17);*IIIlII=(0x14a9+1757-0x1b86);
*endpoint=(0x372+3600-0x1083);break;case lIllIIIl:*lllllI=sizeof(IIlIl->
IllIllIIl);*flags=(0xaa5+4646-0x1ccb);*IIIlII=(0xf2f+1465-0x14e8);*endpoint=
(0x662+4411-0x169e);break;case lIlIlIll:*lllllI=sizeof(IIlIl->IIIlIllII);*flags=
(0x125a+2395-0x1bb5);*IIIlII=(0xa+4463-0x1179);*endpoint=(0x181a+2773-0x21f0);
break;case llllIIlI:*lllllI=sizeof(IIlIl->lIlIIllI);*flags=IIlIl->lIlIIllI.Flags
;*IIIlII=(0x141c+4129-0x243d);*endpoint=IIlIl->lIlIIllI.Endpoint|((*flags&lIllII
)?(0x1368+1669-0x196d):(0x1+9608-0x2589));break;default:return-EINVAL;}return
(0xcf6+4477-0x1e73);}
struct usb_host_config*IIIIIIllI(struct usb_device*IlIII){if(IlIII->actconfig)
return IlIII->actconfig;if(IlIII->descriptor.bNumConfigurations&&IlIII->config)
return&IlIII->config[(0x1208+2969-0x1da1)];return NULL;}
struct usb_host_interface*lIIIlIllI(struct usb_host_config*config){if(config->
desc.bNumInterfaces>(0x7d2+3460-0x1556)){if(config->interface[(0x56+569-0x28f)])
{if(config->interface[(0x8ec+137-0x975)]->cur_altsetting)return config->
interface[(0x1332+3298-0x2014)]->cur_altsetting;if(config->interface[
(0x932+4964-0x1c96)]->num_altsetting&&config->interface[(0x16c2+3524-0x2486)]->
altsetting)return&config->interface[(0xcd4+5591-0x22ab)]->altsetting[
(0x188a+1816-0x1fa2)];}if(config->intf_cache[(0xf0d+2903-0x1a64)]&&config->
intf_cache[(0x895+4538-0x1a4f)]->num_altsetting)return&config->intf_cache[
(0xf9a+1843-0x16cd)]->altsetting[(0x1650+368-0x17c0)];}return NULL;}
void lIIlIIllI(struct usb_device*IlIII,u8*llIlIlIl,u8*IIIIIlll,u8*lIllllII){
struct usb_host_config*config;struct usb_host_interface*IllllI;config=IIIIIIllI(
IlIII);if(config==NULL){if(llIlIlIl)*llIlIlIl=(0x562+753-0x853);if(IIIIIlll)*
IIIIIlll=(0x722+5549-0x1ccf);if(lIllllII)*lIllllII=(0x36c+3972-0x12f0);return;}
IllllI=lIIIlIllI(config);

















if((config->desc.bNumInterfaces>(0x2566+297-0x268e))&&((IlIII->descriptor.
bDeviceClass==(0x657+1705-0xd00))||
((IlIII->descriptor.bDeviceClass==(0x1724+2416-0x1fa5))&&
(IlIII->descriptor.bDeviceSubClass==(0x681+4062-0x165d))&&(IlIII->descriptor.
bDeviceProtocol==(0xac4+5906-0x21d5))))){

if(llIlIlIl)*llIlIlIl=(0x403+4438-0x1559);if(IIIIIlll)*IIIIIlll=
(0xc31+4050-0x1c03);if(lIllllII)*lIllllII=(0x1b07+1762-0x21e9);}else if(config->
desc.bNumInterfaces>(0x1b50+1782-0x2246)&&IllllI){
if(llIlIlIl)*llIlIlIl=IllllI->desc.bInterfaceClass;if(IIIIIlll)*IIIIIlll=IllllI
->desc.bInterfaceSubClass;if(lIllllII)*lIllllII=IllllI->desc.bInterfaceProtocol;
}else
{
if(llIlIlIl)*llIlIlIl=IlIII->descriptor.bDeviceClass;if(IIIIIlll)*IIIIIlll=IlIII
->descriptor.bDeviceSubClass;if(lIllllII)*lIllllII=IlIII->descriptor.
bDeviceProtocol;}}
#ifdef _USBD_ENABLE_STUB_
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t lIlIllll;extern atomic_t lIlllIIll;extern atomic_t IIllllIII;
#endif 

int IlllIIlII(struct IIlII*lIlII,void __user*IIIIl,size_t llllllI){int IIIll=
(0xd08+3853-0x1c15);IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x2b\x2b" "\n"
);do{IllII IIlIl=(IllII)(lIlII+(0xa3d+3616-0x185c));IIIlll flags,endpoint;size_t
 lllIIlI,IIIlII,IIllll;if(IIlllllIl(IIlIl,&lllIIlI,&IIIlII,&flags,&endpoint)<
(0x740+5253-0x1bc5)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x64\x61\x74\x61" "\n"
);IIIll=-EFAULT;break;}IIllll=min((size_t)IIlIl->IIIlI.lIlIl,llllllI);
#if KERNEL_GT_EQ((0x16c1+2002-0x1e8e),(0x365+654-0x5f3),(0x1e70+438-0x2026))
if(!access_ok(IIIIl,IIllll))
#else
if(!access_ok(VERIFY_WRITE,IIIIl,IIllll))
#endif
{IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6d\x65\x6d\x6f\x72\x79\x20\x61\x63\x63\x65\x73\x73\x20\x63\x68\x65\x63\x6b\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-EINVAL;break;}IIllll=min(lllIIlI,llllllI);if(__copy_to_user(IIIIl,IIlIl
,IIllll)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x74\x6f\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x28\x31\x29" "\n"
);IIIll=-EFAULT;break;}if(IIllll<lllIIlI){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x74\x20\x65\x6e\x6f\x75\x67\x68\x20\x62\x75\x66\x66\x65\x72\x28\x31\x29" "\n"
);IIIll=-EMSGSIZE;break;}llllllI-=IIllll;IIIIl+=IIllll;if(llllllI<IIIlII){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x74\x20\x65\x6e\x6f\x75\x67\x68\x20\x62\x75\x66\x66\x65\x72\x28\x32\x29" "\n"
);IIIll=-EMSGSIZE;break;}if((flags&lIllII)&&IIIlII){if(lIlII->lIIIII==lIllIll){


if(__copy_to_user(IIIIl,lIlII->Illlll.IllIl,IIIlII)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x74\x6f\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x28\x32\x29" "\n"
);IIIll=-EFAULT;break;}}else if(lIlII->lIIIII==IllIIlI){


if(lIIIlIIlI(lIlII->llllII.lIIIlI,IIIIl,IIIlII)<IIIlII){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x74\x6f\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x28\x33\x29" "\n"
);IIIll=-EFAULT;break;}}
#if KERNEL_GT_EQ((0x14+138-0x9c),(0xe40+207-0xf09),(0x1ba5+221-0x1c63))
else if(lIlII->lIIIII==llIllII){


if(IlIlIIIlI(&lIlII->IIIIIIl.sg,IIIIl,IIIlII)<IIIlII){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x74\x6f\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x28\x34\x29" "\n"
);IIIll=-EFAULT;break;}}
#endif
else{IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x65\x72\x72\x6f\x72\x21" "\n"
);IIIll=-EFAULT;break;}}}while((0x394+3035-0xf6f));IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}struct IIlII*IlIIllIll(struct llIII*IlIlI,const void 
__user*IIIIl,size_t llllllI){IllII IlIllIII;IIlIllIll lIIllIl;struct IIlII*lIlII
=NULL;size_t lllIIlI,IIIlII,llllIIIl;IIIlll flags,endpoint;int IIIll=-
(0x13b+6489-0x1a93);int lIIIII;do{if(copy_from_user(&lIIllIl,IIIIl,min(sizeof(
lIIllIl),llllllI))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x32\x29" "\n"
);break;}
#if KERNEL_GT_EQ((0x1b0+6278-0x1a31),(0x56+73-0x9f),(0x1379+723-0x164c))
if(!access_ok(IIIIl,lIIllIl.IIIlI.lIlIl))
#else
if(!access_ok(VERIFY_READ,IIIIl,lIIllIl.IIIlI.lIlIl))
#endif
{IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6d\x65\x6d\x6f\x72\x79\x20\x61\x63\x63\x65\x73\x73\x20\x63\x68\x65\x63\x6b\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-EFAULT;break;}if(IIlllllIl(&lIIllIl,&lllIIlI,&IIIlII,&flags,&endpoint)<
(0x8c0+2424-0x1238)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x64\x61\x74\x61" "\n"
);IIIll=-EINVAL;break;}


if((IIIlII==(0x47f+6114-0x1c61))||((sizeof(struct IIlII)+lllIIlI+IIIlII+
(0x3ed+6288-0x1c3d))<=lIlllll)){
lIIIII=lIllIll;}else if(lIIllIl.IIIlI.lIIlIII==IIlIlIll){
lIIIII=IlIlI->lIIlIIIl;}else if(lIIllIl.IIIlI.lIIlIII==llIIIIIl){
lIIIII=IlIlI->lllIlIlI;}else if(lIIllIl.IIIlI.lIIlIII==IllllllI){
lIIIII=IlIlI->lllIlllI;}else{
lIIIII=lIllIll;}

if(lIIIII==lIllIll){llllIIIl=sizeof(struct IIlII)+lllIIlI+IIIlII+
(0x12c1+1663-0x1900);}else{llllIIIl=sizeof(struct IIlII)+lllIIlI;}lIlII=lIlIlll(
llllIIIl,GFP_KERNEL);if(!lIlII){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x72\x65\x71\x75\x65\x73\x74\x2c\x20\x75\x6e\x72\x62\x73\x69\x7a\x65\x3d\x25\x6c\x75\x20\x2b\x20\x25\x6c\x75" "\n"
,(unsigned long)lllIIlI,(unsigned long)sizeof(struct IIlII));break;}
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&lIlIllll);
#endif


memset(lIlII,(0x1949+831-0x1c88),sizeof(*lIlII));INIT_LIST_HEAD(&lIlII->lIlIIl);
lIlII->lllllI=llllIIIl;atomic_set(&lIlII->state,IIIIIIlI);lIlII->IlIlI=IlIIlIII(
IlIlI);lIlII->lIIIII=lIIIII;lIlII->llIlIlI=(0x12+4530-0x11c4);lIlII->endpoint=
endpoint;lIlII->lllIl=lIIllIl.IIIlI.lIIlIl;lIlII->IIIlIIl.llllIllI=lIIllIl.IIIlI
.IllIIll;kref_init(&lIlII->lIIlll);IlIllIII=(IllII)(lIlII+(0xcb+7635-0x1e9d));


if(__copy_from_user(IlIllIII,IIIIl,lllIIlI)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x33\x29" "\n"
);break;}IIIIl+=lllIIlI;llllllI-=lllIIlI;

if(lIIIII==lIllIll){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x73\x6f\x6c\x69\x64\x20\x75\x6e\x72\x62" "\n"
);
lIlII->Illlll.IllIl=(void*)(((unsigned long)IlIllIII+lllIIlI+(0x604+1124-0xa28))
&(~(unsigned long)((0xc4d+2048-0x140d)-(0x1a64+1499-0x203e))));
if(IIIlII&&!(flags&lIllII)){if(IIIlII>llllllI){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x28\x34\x29" "\n"
);IIIll=-(0x1633+864-0x1992);break;}if(__copy_from_user(lIlII->Illlll.IllIl,
IIIIl,IIIlII)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x34\x29" "\n"
);IIIll=-(0xc97+559-0xec5);break;}IIIIl+=IIIlII;llllllI-=IIIlII;}}else if(lIIIII
==IllIIlI){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64" "\n"
);
if(IlIllIII->IIIlI.lIIlIII==IllllllI){lIlII->llllII.lIIIlI=llIIIIlII(IIIlII,
IlIllIII->lIIIl.llIIlII,IlIllIII->lIIIl.lIllIII);if(!lIlII->llllII.lIIIlI){IlllI
(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-(0xa5+2217-0x94d);break;}}else{int IlIlllll=IllIlIIl(IlIlI->IIlll,
endpoint);if(IlIlllll<(0x2+4201-0x106b)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74" "\n"
);IIIll=IlIlllll;break;}lIlII->llllII.lIIIlI=IIIIIIlIl(IIIlII,IlIlllll);if(!
lIlII->llllII.lIIIlI){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-(0x658+29-0x674);break;}}
if(IIIlII&&!(flags&lIllII)){if(IIIlII>llllllI){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x28\x35\x29" "\n"
);IIIll=-(0x2082+145-0x2112);break;}if(IIIIlIllI(lIlII->llllII.lIIIlI,IIIIl,
IIIlII)<IIIlII){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x35\x29" "\n"
);IIIll=-(0x4ad+8631-0x2663);break;}IIIIl+=IIIlII;llllllI-=IIIlII;}}
#if KERNEL_GT_EQ((0x401+6118-0x1be5),(0xe24+6357-0x26f3),(0xbe0+6033-0x2352))
else if(lIIIII==llIllII){


int IlIlllll=IllIlIIl(IlIlI->IIlll,endpoint);IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x73\x67" "\n"
);if(IlIlllll<(0xb5d+3163-0x17b8)){IIIll=IlIlllll;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74" "\n"
);break;}IIIll=IlIIlIIIl(&lIlII->IIIIIIl.sg,IIIlII,IlIlllll);if(IIIll<
(0xe56+3742-0x1cf4)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x73\x62\x64\x5f\x73\x67\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);break;}if(IIIlII&&(flags&lIllII)==(0x552+2234-0xe0c)){if(IIIlII>llllllI){IlllI
(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x28\x36\x29" "\n"
);IIIll=-(0xb57+5562-0x2110);break;}if(lIIIIIIIl(&lIlII->IIIIIIl.sg,IIIIl,IIIlII
)<IIIlII){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x36\x29" "\n"
);IIIll=-(0x7f2+3155-0x1444);break;}IIIIl+=IIIlII;llllllI-=IIIlII;}}
#endif 
else{IIIll=-EINVAL;break;}IIIll=(0x2db+8055-0x2252);}while((0x1867+3506-0x2619))
;
if(IIIll<(0xacc+1474-0x108e)){if(lIlII){IIllIIl(lIlII);lIlII=NULL;}return NULL;}
return lIlII;}


struct IIlII*lllllllII(struct IIlII*lIlII,gfp_t IlIIl){struct IIlII*IIlIlll;if(
lIlII->lIIIII!=lIllIll)
return NULL;IIlIlll=lIlIlll(lIlII->lllllI,IlIIl);if(IIlIlll){memset(IIlIlll,
(0x14a4+1033-0x18ad),sizeof(*IIlIlll));
memcpy(IIlIlll+(0xec3+1910-0x1638),lIlII+(0x1042+5718-0x2697),lIlII->lllllI-
sizeof(*lIlII));
INIT_LIST_HEAD(&IIlIlll->lIlIIl);IIlIlll->lllllI=lIlII->lllllI;IIlIlll->lllIl=
lIlII->lllIl;IIlIlll->IIIlIIl=lIlII->IIIlIIl;atomic_set(&IIlIlll->state,IIIIIIlI
);IIlIlll->IlIlI=IlIIlIII(lIlII->IlIlI);IIlIlll->endpoint=lIlII->endpoint;
IIlIlll->Illlll.IllIl=(void*)IIlIlll+((unsigned long)lIlII->Illlll.IllIl-(
unsigned long)lIlII);IIlIlll->lIIIII=lIlII->lIIIII;kref_init(&IIlIlll->lIIlll);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&lIlIllll);
#endif
}return IIlIlll;}void IllIlIll(struct kref*IIIIllI){struct IIlII*lIlII=
container_of(IIIIllI,struct IIlII,lIIlll);IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x65\x73\x74\x72\x6f\x79\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->lllIl);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IIllllIII);
#endif
if(lIlII->lIIIII==lIllIll){if(lIlII->Illlll.lIlll){if(lIlII->Illlll.lIlll->
setup_packet)IlIIIl(lIlII->Illlll.lIlll->setup_packet);lIllIIlI(lIlII->Illlll.
lIlll);}


}else if(lIlII->lIIIII==IllIIlI){if(lIlII->llllII.IIIlllI){IIIIIlIII(lIlII->
llllII.IIIlllI);}if(lIlII->llllII.lIIIlI){llllllIll(lIlII->llllII.lIIIlI);}}
#if KERNEL_GT_EQ((0xc09+3047-0x17ee),(0xb76+5123-0x1f73),(0x424+6211-0x1c48))
else if(lIlII->lIIIII==llIllII){if(lIlII->IIIIIIl.lIlll){if(lIlII->IIIIIIl.lIlll
->setup_packet)IlIIIl(lIlII->IIIIIIl.lIlll->setup_packet);lIllIIlI(lIlII->
IIIIIIl.lIlll);}llIIlIIIl(&lIlII->IIIIIIl.sg);}
#endif
if(lIlII->IlIlI){IlIllIl(lIlII->IlIlI);}IlIIIl(lIlII);}void IIllIIl(struct IIlII
*lIlII){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&lIlllIIll);
#endif
kref_put(&lIlII->lIIlll,IllIlIll);}
#endif 
lllIII llIlIIIlI(void){static lllIII lIIlIl=(0x4d4+6367-0x1db3);return(++lIIlIl)
;}int IllllIlll(void*llIIIlIlI,struct vm_area_struct*IIllllI){int IIIll=
(0x1795+3923-0x26e8);unsigned long start=IIllllI->vm_start;unsigned long IIlIIl=
IIllllI->vm_end-IIllllI->vm_start;unsigned long IIllllIll;IlllI(
"\x75\x73\x62\x64\x5f\x6d\x61\x70\x5f\x76\x6d\x65\x6d\x3a\x20\x2b\x2b" "\n");
while(IIlIIl>(0x10e3+41-0x110c)){IIllllIll=vmalloc_to_pfn(llIIIlIlI);IIIll=
remap_pfn_range(IIllllI,start,IIllllIll,PAGE_SIZE,PAGE_SHARED);if(IIIll<
(0x117b+3647-0x1fba)){IlllI(
"\x75\x73\x62\x64\x5f\x6d\x61\x70\x5f\x76\x6d\x65\x6d\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x70\x20\x74\x68\x65\x20\x70\x61\x67\x65" "\n"
);break;}start+=PAGE_SIZE;llIIIlIlI+=PAGE_SIZE;IIlIIl-=PAGE_SIZE;}IlllI(
"\x75\x73\x62\x64\x5f\x6d\x61\x70\x5f\x76\x6d\x65\x6d\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}void lllllllll(dma_addr_t lllIllI,void*IIllII,unsigned 
long IIlIIl){void*lllIIl;struct page*IlllIllI;unsigned long flags;unsigned long 
IIIllll;unsigned long lIlIIIl,IIIIlll;local_irq_save(flags);while(IIlIIl){

lIlIIIl=lllIllI&(PAGE_SIZE-(0x16a5+1781-0x1d99));IIIIlll=PAGE_SIZE-lIlIIIl;
IIIllll=(IIIIlll<IIlIIl)?IIIIlll:IIlIIl;
IlllIllI=pfn_to_page(lllIllI>>PAGE_SHIFT);
#if KERNEL_GT_EQ((0x1e03+1670-0x2487),(0x1243+5150-0x265b),(0x57f+2003-0xd2d))
lllIIl=kmap_atomic(IlllIllI);
#else
lllIIl=kmap_atomic(IlllIllI,KM_IRQ0);
#endif
memcpy(lllIIl+lIlIIIl,IIllII,IIIllll);
#if KERNEL_GT_EQ((0x2116+201-0x21dd),(0x65d+2663-0x10be),(0x6fc+1765-0xdbc))
kunmap_atomic(lllIIl);
#else
kunmap_atomic(lllIIl,KM_IRQ0);
#endif

lllIllI+=IIIllll;IIllII+=IIIllll;IIlIIl-=IIIllll;}local_irq_restore(flags);}void
 IIIllllIl(void*lllIllI,dma_addr_t IIllII,unsigned long IIlIIl){struct page*
IlllIllI;unsigned char*lllIIl;unsigned long flags;unsigned long IIIllll;unsigned
 long lIlIIIl,IIIIlll;local_irq_save(flags);while(IIlIIl){

lIlIIIl=IIllII&(PAGE_SIZE-(0xd73+6322-0x2624));IIIIlll=PAGE_SIZE-lIlIIIl;IIIllll
=(IIIIlll<IIlIIl)?IIIIlll:IIlIIl;
IlllIllI=pfn_to_page(IIllII>>PAGE_SHIFT);
#if KERNEL_GT_EQ((0x1da3+2280-0x2689),(0x12aa+4892-0x25c0),(0xbb+9070-0x2404))
lllIIl=kmap_atomic(IlllIllI);
#else
lllIIl=kmap_atomic(IlllIllI,KM_IRQ0);
#endif
memcpy(lllIllI,lllIIl+lIlIIIl,IIIllll);
#if KERNEL_GT_EQ((0x3d2+7796-0x2244),(0x1571+2765-0x2038),(0x41+64-0x5c))
kunmap_atomic(lllIIl);
#else
kunmap_atomic(lllIIl,KM_IRQ0);
#endif

IIllII+=IIIllll;lllIllI+=IIIllll;IIlIIl-=IIIllll;}local_irq_restore(flags);}int 
llllIlIl(lllII status){int IIIll;switch(status){case IlIllIlII:IIIll=
(0x1531+1718-0x1be7);break;case lIIllllIl:IIIll=-EINPROGRESS;break;case 
IllIllIII:IIIll=-ECONNRESET;break;case IIIllIIII:IIIll=-EXDEV;break;case 
IlIllIIIl:IIIll=-ETIMEDOUT;break;case IIlIlIIII:IIIll=-EINVAL;break;case 
IlIIlIlIl:IIIll=-ENODEV;break;case IllIlIllI:IIIll=-EREMOTEIO;break;case 
IIIIIlIIl:IIIll=-EOVERFLOW;break;case lIllllIll:IIIll=-ENOSR;break;case 
llIIlllII:IIIll=-ECOMM;break;case llIllIIIl:IIIll=-EPIPE;break;case llIIIIIIl:
IIIll=-EILSEQ;break;case lIlllIIII:IIIll=-EPROTO;break;case IIlIlIllI:IIIll=-
ENOMEM;break;case IIllIIIII:IIIll=-EPROTO;break;case IIllIlIII:default:IIIll=-
EPROTO;break;}return IIIll;}
size_t IllIlIlI(struct usb_iso_packet_descriptor*lIlllII,int llIIl,void*lllIllI,
void*IIllII,int IllIIlII){IIIlll*IIlllIII;size_t IIIll;IIIll=(0xeb7+5913-0x25d0)
;IIlllIII=lllIllI;for(;llIIl;llIIl--){IIIlll*IllIllIlI=IIllII+lIlllII->offset;
unsigned int length=IllIIlII?lIlllII->actual_length:lIlllII->length;if(length&&
IIlllIII!=IllIllIlI)
memmove(IIlllIII,IllIllIlI,length);IIlllIII+=length;IIIll+=length;lIlllII++;}
IlllI(
"\x75\x73\x62\x64\x5f\x70\x61\x63\x6b\x5f\x69\x73\x6f\x5f\x62\x75\x66\x66\x65\x72\x3a\x20\x70\x61\x63\x6b\x65\x64\x3d\x25\x6c\x75" "\n"
,(unsigned long)IIIll);return IIIll;}
size_t lIllIllI(struct usb_iso_packet_descriptor*lIlllII,int llIIl,int IllIIlII)
{size_t IIIll;IIIll=(0xa39+3690-0x18a3);for(;llIIl>(0x23c4+424-0x256c);llIIl--){
IIIll+=IllIIlII?lIlllII->actual_length:lIlllII->length;lIlllII++;}IlllI(
"\x75\x73\x62\x64\x5f\x63\x6f\x75\x6e\x74\x5f\x69\x73\x6f\x5f\x62\x75\x66\x66\x65\x72\x3a\x20\x70\x61\x63\x6b\x65\x64\x3d\x25\x6c\x75" "\n"
,(unsigned long)IIIll);return IIIll;}char*llIIIllI(struct kobject*kobj,gfp_t 
IIIIllIII){
#if KERNEL_GT_EQ((0x105a+5201-0x24a9),(0x485+3383-0x11b6),(0xcef+6147-0x24df))
return kobject_get_path(kobj,IIIIllIII);
#else
char*llllIll;int length;struct kobject*IIIlIl;
for(IIIlIl=kobj,length=(0x52f+6212-0x1d73);IIIlIl&&kobject_name(IIIlIl);IIIlIl=
IIIlIl->parent){length+=strlen(kobject_name(IIIlIl));length+=(0x618+1996-0xde3);
}if(IIIlIl)
return NULL;
llllIll=lIlIlll(length+(0x82a+3962-0x17a3),IIIIllIII);if(llllIll==NULL)return 
NULL;*(llllIll+length)='\0';
for(IIIlIl=kobj;IIIlIl&&length>(0x1377+3326-0x2075);IIIlIl=IIIlIl->parent){int l
=strlen(kobject_name(IIIlIl));strncpy(llllIll+length-l,kobject_name(IIIlIl),l);*
(llllIll+length-l-(0x1477+1646-0x1ae4))=((char)(0xdb+3895-0xfe3));length-=l+
(0x332+336-0x481);}
if(length!=(0x164d+2676-0x20c1)||IIIlIl){IlIIIl(llllIll);return NULL;}return 
llllIll;
#endif
}void lIIlIIIIl(char*llllIll){
#if KERNEL_GT_EQ((0x1c1b+443-0x1dd4),(0x14f0+3220-0x217e),(0x802+6539-0x217a))
kfree(llllIll);
#else
IlIIIl(llllIll);
#endif
}int IIIIlIIlI(struct device*dev){



if(dev->bus&&!strcmp(dev->bus->name,"\x75\x73\x62"))return(0x580+2628-0xfc3);
return(0x8a2+3897-0x17db);}int IlIlIIlII(struct device*dev){if(IIIIlIIlI(dev)){
#if KERNEL_LT_EQ((0x1107+4799-0x23c4),(0x431+1934-0xbb9),(0x67+2298-0x94c))

if(!strchr(lIllll(dev),((char)(0xdb4+5980-0x24d6))))return(0x1704+693-0x19b8);
#else




if(dev->type&&!strcmp(dev->type->name,
"\x75\x73\x62\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65"))return(0x9d7+921-0xd6f);
#endif
}return(0xabc+7178-0x26c6);}int llIlllII(struct device*dev){if(IIIIlIIlI(dev)){
#if KERNEL_LT_EQ((0x91a+7439-0x2627),(0xbac+6527-0x2525),(0xa81+5443-0x1faf))


if(strchr(lIllll(dev),((char)(0x2017+310-0x2113))))return(0x2363+387-0x24e5);
#else




if(dev->type&&!strcmp(dev->type->name,"\x75\x73\x62\x5f\x64\x65\x76\x69\x63\x65"
))return(0x78a+7818-0x2613);
#endif
}return(0x197d+2434-0x22ff);}
#if KERNEL_GT_EQ((0xd51+4530-0x1f01),(0x420+6123-0x1c05),(0x140a+4694-0x264a))












void lIIIIIII(struct device*dev,int IIlIllIl){
#if KERNEL_LT_EQ((0x10c9+5267-0x255a),(0x110+2902-0xc60),(0xee4+268-0xfd3))
dev->uevent_suppress=IIlIllIl;
#elif KERNEL_GT_EQ((0x149d+2073-0x1cb4),(0xbb8+6905-0x26ab),(0x50d+2182-0xd75))
dev_set_uevent_suppress(dev,IIlIllIl);
#endif
}int lIllIlII(struct device*dev){
#if KERNEL_LT_EQ((0x7d2+5825-0x1e91),(0x1fa+2652-0xc50),(0x4ec+3561-0x12b8))
return dev->uevent_suppress;
#elif KERNEL_GT_EQ((0x94d+6522-0x22c5),(0x164+4867-0x1461),(0x4cb+660-0x741))
return dev_get_uevent_suppress(dev);
#endif
}
#endif 
#ifndef _USBD_DEBUG_
const char*lIlIIIII(unsigned long llllIIl){return"";}const char*IIIIlIlII(
unsigned long llllIIl){return"";}void lIlIIlIIl(struct urb*lIlll,lllIII lllIl){}
#else
const char*lIlIIIII(unsigned long llllIIl){switch(llllIIl){
#if KERNEL_GT_EQ((0x1f6d+61-0x1fa8),(0x1de7+51-0x1e14),(0x940+5000-0x1cb4))
case BUS_NOTIFY_ADD_DEVICE:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x41\x44\x44\x5f\x44\x45\x56\x49\x43\x45"
;case BUS_NOTIFY_DEL_DEVICE:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x44\x45\x4c\x5f\x44\x45\x56\x49\x43\x45"
;case BUS_NOTIFY_BOUND_DRIVER:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x42\x4f\x55\x4e\x44\x5f\x44\x52\x49\x56\x45\x52"
;case BUS_NOTIFY_UNBIND_DRIVER:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x55\x4e\x42\x49\x4e\x44\x5f\x44\x52\x49\x56\x45\x52"
;
#endif
#if KERNEL_GT_EQ((0x752+2421-0x10c5),(0x170+2882-0xcac),(0xc17+4939-0x1f43))
case BUS_NOTIFY_UNBOUND_DRIVER:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x55\x4e\x42\x4f\x55\x4e\x44\x5f\x44\x52\x49\x56\x45\x52"
;
#endif
#if KERNEL_GT_EQ((0xeec+1771-0x15d5),(0x19b7+3167-0x2610),(0x1878+3330-0x2556))
case BUS_NOTIFY_BIND_DRIVER:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x42\x49\x4e\x44\x5f\x44\x52\x49\x56\x45\x52"
;
#endif
#if KERNEL_GT_EQ((0x135+405-0x2c7),(0x1380+2860-0x1e9a),(0xd2d+3357-0x1a4a))
case BUS_NOTIFY_REMOVED_DEVICE:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x52\x45\x4d\x4f\x56\x45\x44\x5f\x44\x45\x56\x49\x43\x45"
;
#endif
default:break;}return"\x75\x6e\x6b\x6e\x6f\x77\x6e";}const char*IIIIlIlII(
unsigned long llllIIl){switch(llllIIl){case USB_DEVICE_ADD:return
"\x55\x53\x42\x5f\x44\x45\x56\x49\x43\x45\x5f\x41\x44\x44";case 
USB_DEVICE_REMOVE:return
"\x55\x53\x42\x5f\x44\x45\x56\x49\x43\x45\x5f\x52\x45\x4d\x4f\x56\x45";case 
USB_BUS_ADD:return"\x55\x53\x42\x5f\x42\x55\x53\x5f\x41\x44\x44";case 
USB_BUS_REMOVE:return"\x55\x53\x42\x5f\x42\x55\x53\x5f\x52\x45\x4d\x4f\x56\x45";
default:break;}return"\x75\x6e\x6b\x6e\x6f\x77\x6e";}void lIlIIlIIl(struct urb*
lIlll,lllIII lllIl){const char*llIIlIlll[]={"\x69\x73\x6f","\x69\x6e\x74",
"\x63\x74\x72\x6c","\x62\x75\x6c\x6b"};if(!lIlll)return;IlllI(
"\x2b\x2b\x2b\x2b\x20\x55\x52\x42\x20\x53\x54\x41\x52\x54\x20\x2b\x2b\x2b\x2b" "\n"
);IlllI("\x20\x20\x55\x52\x42\x3d\x30\x78\x25\x70" "\n",lIlll);IlllI(
"\x20\x20\x50\x69\x70\x65\x3d\x30\x78\x25\x30\x38\x58\x20\x28\x64\x65\x76\x3a\x20\x25\x64\x20\x65\x6e\x64\x70\x3a\x20\x25\x64\x20\x64\x69\x72\x3a\x20\x25\x73\x20\x74\x79\x70\x65\x3a\x20\x25\x73\x29" "\n"
,lIlll->pipe,usb_pipedevice(lIlll->pipe),usb_pipeendpoint(lIlll->pipe),
usb_pipein(lIlll->pipe)?"\x69\x6e":"\x6f\x75\x74",llIIlIlll[usb_pipetype(lIlll->
pipe)]);IlllI("\x20\x20\x53\x74\x61\x74\x75\x73\x3d\x25\x64" "\n",lIlll->status)
;IlllI(
"\x20\x20\x54\x72\x61\x6e\x73\x66\x65\x72\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x30\x38\x58" "\n"
,lIlll->transfer_flags);IlllI(
"\x20\x20\x42\x75\x66\x66\x65\x72\x3d\x30\x78\x25\x70" "\n",lIlll->
transfer_buffer);IlllI(
"\x20\x20\x42\x75\x66\x66\x65\x72\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n",
lIlll->transfer_buffer_length);IlllI(
"\x20\x20\x41\x63\x74\x75\x61\x6c\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n",
lIlll->actual_length);IlllI(
"\x20\x20\x54\x72\x61\x6e\x73\x66\x65\x72\x44\x6d\x61\x3d\x30\x78\x25\x30\x38\x58" "\n"
,(u32)lIlll->transfer_dma);IlllI(
"\x20\x20\x53\x65\x74\x75\x70\x44\x6d\x61\x3d\x30\x78\x25\x30\x38\x58" "\n",(u32
)lIlll->setup_dma);if(usb_pipecontrol(lIlll->pipe)){IlllI(
"\x20\x20\x53\x65\x74\x75\x70\x50\x61\x63\x6b\x65\x74\x3d\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58" "\n"
,lIlll->setup_packet[(0x7c5+257-0x8c6)],lIlll->setup_packet[(0x8fd+5602-0x1ede)]
,lIlll->setup_packet[(0x2c0+3383-0xff5)],lIlll->setup_packet[(0xfaf+1239-0x1483)
],lIlll->setup_packet[(0x1324+566-0x1556)],lIlll->setup_packet[
(0x1915+2124-0x215c)],lIlll->setup_packet[(0x857+7803-0x26cc)],lIlll->
setup_packet[(0x1b5d+810-0x1e80)]);}else if(usb_pipeisoc(lIlll->pipe)){int i;
IlllI("\x20\x20\x53\x74\x61\x72\x74\x46\x72\x61\x6d\x65\x3d\x25\x64" "\n",lIlll
->start_frame);IlllI(
"\x20\x20\x4e\x75\x6d\x62\x65\x72\x4f\x66\x50\x61\x63\x6b\x65\x74\x73\x3d\x25\x64" "\n"
,lIlll->number_of_packets);IlllI(
"\x20\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x3d\x25\x64" "\n",lIlll->interval);
IlllI("\x20\x20\x45\x72\x72\x6f\x72\x43\x6f\x75\x6e\x74\x3d\x25\x64" "\n",lIlll
->error_count);IlllI("\x20\x20\x49\x73\x6f\x46\x72\x61\x6d\x65\x73\x3d" "\n");
for(i=(0x1741+3628-0x256d);i<lIlll->number_of_packets;i++){IlllI(
"\x20\x20\x20\x20\x5b\x25\x64\x5d\x20\x4f\x66\x66\x73\x65\x74\x3d\x25\x64\x20\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64\x20\x41\x63\x74\x75\x61\x6c\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64\x20\x53\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,i,lIlll->iso_frame_desc[i].offset,lIlll->iso_frame_desc[i].length,lIlll->
iso_frame_desc[i].actual_length,lIlll->iso_frame_desc[i].status);}}else if(
usb_pipeint(lIlll->pipe)){IlllI(
"\x20\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x3d\x25\x64" "\n",lIlll->interval);}
IlllI(
"\x2d\x2d\x2d\x2d\x20\x55\x52\x42\x20\x45\x4e\x44\x20\x2d\x2d\x2d\x2d" "\n");}
#endif 
#ifndef _USBD_DEBUG_
void lllIlIl(IllII IIlIl){}
#else
static void lIlIlII(IllII IIlIl);void lllIlIl(IllII IIlIl){int i;
if(!IIlIl)return;IlllI(
"\x2d\x2d\x2d\x2d\x20\x55\x4e\x52\x42\x20\x53\x54\x41\x52\x54" "\n");switch(
IIlIl->IIIlI.lIIlIII){case lIlIllIl:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x47\x45\x54\x5f\x44\x45\x53\x43\x52\x49\x50\x54\x4f\x52" "\n"
);lIlIlII(IIlIl);IlllI(
"\x20\x20\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x52\x65\x71\x75\x65\x73\x74" "\n"
);IlllI(
"\x20\x20\x20\x20\x52\x65\x71\x75\x65\x73\x74\x54\x79\x70\x65\x3d\x25\x64" "\n",
IIlIl->lIlIll.IIllIlI);IlllI(
"\x20\x20\x20\x20\x52\x65\x71\x75\x65\x73\x74\x52\x65\x63\x69\x70\x69\x65\x6e\x74\x3d\x25\x64" "\n"
,IIlIl->lIlIll.IlIIIIll);IlllI(
"\x20\x20\x20\x20\x44\x65\x73\x63\x54\x79\x70\x65\x3d\x25\x64" "\n",IIlIl->
lIlIll.lllIlIII);IlllI(
"\x20\x20\x20\x20\x44\x65\x73\x63\x49\x6e\x64\x65\x78\x3d\x25\x64" "\n",IIlIl->
lIlIll.llIllIII);IlllI(
"\x20\x20\x20\x20\x4c\x61\x6e\x67\x49\x64\x3d\x25\x64" "\n",IIlIl->lIlIll.
IIIIIlII);IlllI(
"\x20\x20\x20\x20\x42\x75\x66\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",
IIlIl->lIlIll.IIllI);break;case lIIIIIIl:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x53\x45\x54\x5f\x44\x45\x53\x43\x52\x49\x50\x54\x4f\x52" "\n"
);lIlIlII(IIlIl);IlllI(
"\x20\x20\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x52\x65\x71\x75\x65\x73\x74" "\n"
);IlllI("\x20\x20\x20\x20\x44\x65\x73\x63\x54\x79\x70\x65\x3d\x25\x64" "\n",
IIlIl->lIlIll.lllIlIII);IlllI(
"\x20\x20\x20\x20\x44\x65\x73\x63\x49\x6e\x64\x65\x78\x3d\x25\x64" "\n\n",IIlIl
->lIlIll.llIllIII);IlllI(
"\x20\x20\x20\x20\x4c\x61\x6e\x67\x49\x64\x3d\x25\x64" "\n",IIlIl->lIlIll.
IIIIIlII);IlllI(
"\x20\x20\x20\x20\x42\x75\x66\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",
IIlIl->lIlIll.IIllI);break;case IllIllII:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x53\x45\x4c\x45\x43\x54\x5f\x43\x4f\x4e\x46\x49\x47\x55\x52\x41\x54\x49\x4f\x4e" "\n"
);lIlIlII(IIlIl);IlllI(
"\x20\x20\x53\x65\x6c\x65\x63\x74\x43\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e" "\n"
);IlllI(
"\x20\x20\x20\x20\x43\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3d\x25\x64" "\n"
,IIlIl->IlIlIll.lllllIII);IlllI(
"\x20\x20\x20\x20\x4e\x75\x6d\x41\x6c\x74\x65\x72\x6e\x61\x74\x65\x73\x3d\x25\x64" "\n"
,IIlIl->IlIlIll.IIlIlIlI);for(i=(0x7d1+3491-0x1574);i<IIlIl->IlIlIll.IIlIlIlI;i
++){IlllI(
"\x20\x20\x20\x20\x20\x20\x25\x2e\x33\x64\x3a\x20\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x4e\x75\x6d\x3d\x25\x64" "\n"
,i,IIlIl->IlIlIll.lIIIIIl[i].IllllII);IlllI(
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x41\x6c\x74\x65\x72\x6e\x61\x74\x65\x4e\x75\x6d\x3d\x25\x64" "\n"
,IIlIl->IlIlIll.lIIIIIl[i].IlIlllI);}break;case llIlllIl:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x53\x45\x4c\x45\x43\x54\x5f\x49\x4e\x54\x45\x52\x46\x41\x43\x45" "\n"
);lIlIlII(IIlIl);IlllI(
"\x20\x20\x53\x65\x6c\x65\x63\x74\x49\x6e\x74\x65\x72\x66\x61\x63\x65" "\n");
IlllI("\x20\x20\x20\x20\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x3d\x25\x64" "\n",
IIlIl->lIIlIlI.IllllII);IlllI(
"\x20\x20\x20\x20\x41\x6c\x74\x65\x72\x6e\x61\x74\x65\x3d\x25\x64" "\n",IIlIl->
lIIlIlI.IlIlllI);break;case IlllIIIl:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x43\x4f\x4e\x54\x52\x4f\x4c\x5f\x54\x52\x41\x4e\x53\x46\x45\x52" "\n"
);lIlIlII(IIlIl);IlllI(
"\x20\x20\x43\x6f\x6e\x74\x72\x6f\x6c\x54\x72\x61\x6e\x73\x66\x65\x72" "\n");
IlllI("\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IIlIl
->llIlII.Endpoint);IlllI(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IIlIl->
llIlII.Flags);IlllI(
"\x20\x20\x20\x20\x52\x65\x71\x75\x65\x73\x74\x54\x79\x70\x65\x3d\x30\x78\x25\x2e\x32\x58" "\n"
,IIlIl->llIlII.IIllIlI);IlllI(
"\x20\x20\x20\x20\x52\x65\x71\x75\x65\x73\x74\x3d\x30\x78\x25\x2e\x32\x58" "\n",
IIlIl->llIlII.IIlIIlII);IlllI(
"\x20\x20\x20\x20\x56\x61\x6c\x75\x65\x3d\x30\x78\x25\x2e\x34\x58" "\n",IIlIl->
llIlII.llllIllI);IlllI(
"\x20\x20\x20\x20\x49\x6e\x64\x65\x78\x3d\x30\x78\x25\x2e\x34\x58" "\n",IIlIl->
llIlII.IIlIllIlI);IlllI(
"\x20\x20\x20\x20\x42\x75\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",IIlIl->
llIlII.IIllI);break;case IIlIlIll:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x42\x55\x4c\x4b\x5f\x54\x52\x41\x4e\x53\x46\x45\x52" "\n"
);lIlIlII(IIlIl);IlllI(
"\x20\x20\x42\x75\x6c\x6b\x54\x72\x61\x6e\x73\x66\x65\x72" "\n");IlllI(
"\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IIlIl->IlIll
.Endpoint);IlllI(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IIlIl->
IlIll.Flags);IlllI(
"\x20\x20\x20\x20\x42\x75\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",IIlIl->
IlIll.IIllI);break;case llIIIIIl:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x49\x4e\x54\x45\x52\x52\x55\x50\x54\x5f\x54\x52\x41\x4e\x53\x46\x45\x52" "\n"
);lIlIlII(IIlIl);IlllI(
"\x20\x20\x49\x6e\x74\x65\x72\x72\x75\x70\x74\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IlllI("\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",
IIlIl->lIllIl.Endpoint);IlllI(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IIlIl->
lIllIl.Flags);IlllI(
"\x20\x20\x20\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x3d\x25\x64" "\n",IIlIl->
lIllIl.Interval);IlllI(
"\x20\x20\x20\x20\x42\x75\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",IIlIl->
lIllIl.IIllI);break;case IllllllI:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x49\x53\x4f\x43\x48\x5f\x54\x52\x41\x4e\x53\x46\x45\x52" "\n"
);lIlIlII(IIlIl);IlllI(
"\x20\x20\x49\x73\x6f\x63\x68\x54\x72\x61\x6e\x73\x66\x65\x72" "\n");IlllI(
"\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IIlIl->lIIIl
.Endpoint);IlllI(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IIlIl->
lIIIl.Flags);IlllI(
"\x20\x20\x20\x20\x42\x75\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",IIlIl->
lIIIl.IIllI);IlllI(
"\x20\x20\x20\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x3d\x25\x64" "\n",IIlIl->lIIIl
.Interval);IlllI(
"\x20\x20\x20\x20\x53\x74\x61\x72\x74\x46\x72\x61\x6d\x65\x3d\x25\x64" "\n",
IIlIl->lIIIl.IIIlIIIl);IlllI(
"\x20\x20\x20\x20\x4e\x75\x6d\x62\x65\x72\x4f\x66\x50\x61\x63\x6b\x65\x74\x73\x3d\x25\x64" "\n"
,IIlIl->lIIIl.lIllIII);IlllI(
"\x20\x20\x20\x20\x45\x72\x72\x6f\x72\x43\x6f\x75\x6e\x74\x3d\x25\x64" "\n",
IIlIl->lIIIl.lIlIllII);IlllI(
"\x20\x20\x20\x20\x49\x73\x6f\x63\x68\x50\x61\x63\x6b\x65\x74\x73\x3a" "\n");for
(i=(0x169d+2726-0x2143);i<IIlIl->lIIIl.lIllIII;i++){IlllI(
"\x20\x20\x20\x20\x20\x20\x25\x2e\x33\x64\x3a\x20\x4f\x66\x66\x73\x65\x74\x3d\x25\x64" "\n"
,i,IIlIl->lIIIl.llIIlII[i].Offset);IlllI(
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n"
,IIlIl->lIIIl.llIIlII[i].Length);IlllI(
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x53\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,IIlIl->lIIIl.llIIlII[i].Status);}break;case llIIllll:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x43\x4c\x45\x41\x52\x5f\x53\x54\x41\x4c\x4c" "\n"
);lIlIlII(IIlIl);IlllI("\x20\x20\x43\x6c\x65\x61\x72\x53\x74\x61\x6c\x6c" "\n");
IlllI("\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IIlIl
->IIlIIll.Endpoint);IlllI(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IIlIl->
IIlIIll.Flags);break;case IIlIllII:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x47\x45\x54\x5f\x43\x55\x52\x52\x45\x4e\x54\x5f\x46\x52\x41\x4d\x45\x5f\x4e\x55\x4d\x42\x45\x52" "\n"
);lIlIlII(IIlIl);IlllI(
"\x20\x20\x47\x65\x74\x43\x75\x72\x72\x65\x6e\x74\x46\x72\x61\x6d\x65\x4e\x75\x6d\x62\x65\x72" "\n"
);IlllI(
"\x20\x20\x20\x20\x46\x72\x61\x6d\x65\x4e\x75\x6d\x62\x65\x72\x3d\x25\x64" "\n",
IIlIl->llIlIllI.lIIllIll);break;case llIIlIlI:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x47\x45\x54\x5f\x50\x4f\x52\x54\x5f\x53\x54\x41\x54\x55\x53" "\n"
);lIlIlII(IIlIl);IlllI(
"\x20\x20\x47\x65\x74\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73" "\n");switch(
IIlIl->llIlIIll.lllIIIIl){case lllIlllIl:IlllI(
"\x20\x20\x20\x20\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73\x3d\x45\x4e\x41\x42\x4c\x45\x44" "\n"
);break;case IIllllllI:IlllI(
"\x20\x20\x20\x20\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73\x3d\x43\x4f\x4e\x4e\x45\x43\x54\x45\x44" "\n"
);break;default:IlllI(
"\x20\x20\x20\x20\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73\x3d\x75\x6e\x6b\x6e\x6f\x77\x6e" "\n"
);break;}break;case lIllIIIl:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x52\x45\x53\x45\x54\x5f\x50\x4f\x52\x54" "\n"
);lIlIlII(IIlIl);break;case lIlIlIll:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x43\x41\x4e\x43\x45\x4c" "\n"
);lIlIlII(IIlIl);break;case llllIIlI:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x41\x42\x4f\x52\x54\x5f\x45\x4e\x44\x50\x4f\x49\x4e\x54" "\n"
);lIlIlII(IIlIl);IlllI(
"\x20\x20\x41\x62\x6f\x72\x74\x45\x6e\x64\x70\x6f\x69\x6e\x74" "\n");IlllI(
"\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IIlIl->
lIlIIllI.Endpoint);IlllI(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IIlIl->
lIlIIllI.Flags);break;default:IlllI(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x75\x6e\x6b\x6e\x6f\x77\x6e" "\n"
);lIlIlII(IIlIl);break;}IlllI(
"\x2d\x2d\x2d\x2d\x20\x55\x4e\x52\x42\x20\x45\x4e\x44" "\n");}static void 
lIlIlII(IllII IIlIl){IlllI("\x20\x20\x48\x65\x61\x64\x65\x72" "\n");IlllI(
"\x20\x20\x20\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,(lllII)(IIlIl->IIIlI.lIIlIl>>(0x1984+189-0x1a21)),(lllII)(IIlIl->IIIlI.lIIlIl))
;IlllI(
"\x20\x20\x20\x20\x53\x63\x72\x69\x70\x74\x3d\x30\x78\x25\x2e\x34\x58" "\n",(
lIlIlI)IIlIl->IIIlI.IllIIll);IlllI(
"\x20\x20\x20\x20\x53\x69\x7a\x65\x3d\x25\x64" "\n",IIlIl->IIIlI.lIlIl);IlllI(
"\x20\x20\x20\x20\x46\x75\x6e\x63\x74\x69\x6f\x6e\x3d\x25\x64" "\n",IIlIl->IIIlI
.lIIlIII);IlllI("\x20\x20\x20\x20\x53\x74\x61\x74\x75\x73\x3d\x25\x64" "\n",
IIlIl->IIIlI.Status);IlllI(
"\x20\x20\x20\x20\x43\x6f\x6e\x74\x65\x78\x74\x3d\x30\x78\x25\x2e\x38\x58" "\n",
IIlIl->IIIlI.Context);}
#endif 

