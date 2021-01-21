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
struct IIIIII*IIIlllIl;struct list_head IlIIllIl;struct mutex lllIIIlI;extern 
struct usb_driver llIIllI;int IllllIIl(struct usb_device*IlIII){lIlIlI vid,
IlIIlIl,llIlllI;IIIlll class,IIIIIIlII,lIlIIllII;struct lIIIllII*IIIII;int 
IlllIlIlI=(0x822+4930-0x1b64);int IIIIIIll=(0x9af+3624-0x17d7);llIll(
"\x2b\x2b" "\n");
if(strcmp(IIIIIlIl(IlIII),lllllll)==(0x1223+4785-0x24d4)){llIll(
"\x2d\x2d\x20\x73\x6b\x69\x70\x20\x6f\x75\x72\x20\x76\x69\x72\x74\x75\x61\x6c\x20\x64\x65\x76\x69\x63\x65\x21" "\n"
);return(0x311+5150-0x172f);}vid=le16_to_cpu(IlIII->descriptor.idVendor);IlIIlIl
=le16_to_cpu(IlIII->descriptor.idProduct);llIlllI=le16_to_cpu(IlIII->descriptor.
bcdDevice);lIIlIIllI(IlIII,&class,&IIIIIIlII,&lIlIIllII);if(class==
(0xb05+5929-0x2225)){llIll(
"\x2d\x2d\x20\x73\x6b\x69\x70\x20\x75\x73\x62\x20\x68\x75\x62\x21" "\n");return
(0xee4+2542-0x18d2);}llIll(
"\x56\x3d\x25\x30\x34\x58\x20\x50\x3d\x25\x30\x34\x58\x20\x52\x3d\x25\x30\x34\x58\x20\x43\x3d\x25\x30\x32\x58\x20\x53\x3d\x25\x30\x32\x58\x20\x50\x3d\x25\x30\x32\x58\x20\x49\x44\x3d\x25\x73\x20\x53\x4e\x3d\x25\x73" "\n"
,vid,IlIIlIl,llIlllI,class,IIIIIIlII,lIlIIllII,lIllll(&IlIII->dev),IlIII->serial
?IlIII->serial:"\x6e\x6f\x6e\x65");
mutex_lock(&lllIIIlI);list_for_each_entry(IIIII,&IlIIllIl,entry){if(IIIII->IIIII
.IIlIIlI&IIlIllIIl){if(IIIII->IIIII.lIIIlIII!=vid)continue;}if(IIIII->IIIII.
IIlIIlI&IlIlllllI){if(IIIII->IIIII.lllIIIll!=IlIIlIl)continue;}if(IIIII->IIIII.
IIlIIlI&lllIIlIlI){if(IIIII->IIIII.lIIIllIl!=llIlllI)continue;}if(IIIII->IIIII.
IIlIIlI&lIIlIlIII){if(IIIII->IIIII.IIllIlllI!=class)continue;}if(IIIII->IIIII.
IIlIIlI&llIlIllII){if(IIIII->IIIII.IIIIlIlll!=IIIIIIlII)continue;}if(IIIII->
IIIII.IIlIIlI&lIlIlIIlI){if(IIIII->IIIII.lIIlllllI!=lIlIIllII)continue;}if(IIIII
->IIIII.IIlIIlI&IIIIIllll){if(strncmp((char*)(IIIII+(0xc52+2991-0x1800)),lIllll(
&IlIII->dev),IIIII->IIIII.llIIllIl))continue;}if(IIIII->IIIII.IIlIIlI&IIIIlIIII)
{if(IlIII->serial==NULL)continue;if(strncmp((char*)(IIIII+(0x2f1+4411-0x142b))+
IIIII->IIIII.llIIllIl,IlIII->serial,IIIII->IIIII.IlllIIlI))continue;}if(IIIII->
IIIII.IIlIIlI&IIIllIlIl){IIIIIIll=(0x17ab+2654-0x2208);IlllIlIlI=
(0x1486+1287-0x198c);break;}if(IIIII->IIIII.IIlIIlI&lIIllIIll){IIIIIIll=
(0x13b6+3783-0x227d);IlllIlIlI=(0x8fc+5329-0x1dcc);break;}}mutex_unlock(&
lllIIIlI);if(IlllIlIlI==(0x3cd+5168-0x17fd)){llIll(
"\x2d\x2d\x20\x6e\x6f\x20\x6d\x61\x74\x63\x68" "\n");}else if(IIIIIIll){llIll(
"\x2d\x2d\x20\x61\x6c\x6c\x6f\x77\x65\x64" "\n");}else{llIll(
"\x2d\x2d\x20\x64\x65\x6e\x69\x65\x64" "\n");}return IIIIIIll;}void IlllllllI(
struct list_head*lIlllIII){struct list_head IlIIlII=LIST_HEAD_INIT(IlIIlII);

mutex_lock(&lllIIIlI);list_splice_init(&IlIIllIl,&IlIIlII);list_splice_init(
lIlllIII,&IlIIllIl);mutex_unlock(&lllIIIlI);
while(!list_empty(&IlIIlII)){struct lIIIllII*lIIlIll;lIIlIll=list_entry(IlIIlII.
next,struct lIIIllII,entry);list_del(&lIIlIll->entry);IlIIIl(lIIlIll);}



}void IIllIlll(){struct list_head IlIIlII=LIST_HEAD_INIT(IlIIlII);
mutex_lock(&lllIIIlI);list_splice_init(&IlIIllIl,&IlIIlII);mutex_unlock(&
lllIIIlI);
while(!list_empty(&IlIIlII)){struct lIIIllII*lIIlIll;lIIlIll=list_entry(IlIIlII.
next,struct lIIIllII,entry);list_del(&lIIlIll->entry);IlIIIl(lIIlIll);}}











int lIlllIll(struct usb_interface*IllllI){int IIIll;int IIllllIlI=
(0x1b9+6468-0x1afd);int IIllIlIl=(0x816+5976-0x1f6e);
if(IllllI->dev.driver&&to_usb_driver(IllllI->dev.driver)==&llIIllI){return
(0x78+5401-0x1591);}
IIllIlIl=(0x776+1543-0xd7c);
if(IllllI->dev.driver){usb_driver_release_interface(to_usb_driver(IllllI->dev.
driver),IllllI);IIllllIlI=(0x82d+7275-0x2497);}
IIIll=usb_driver_claim_interface(&llIIllI,IllllI,(void*)-(0xf66+4105-0x1f6e));if
(IIIll<(0xe5f+2498-0x1821)){IlIIlI(
"\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x63\x6c\x61\x69\x6d\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,lIllll(&IllllI->dev),IIIll);return IIIll;}IIIll=lIIIlIlII(IllllI,IIllllIlI);if(
IIIll<(0xaf7+6609-0x24c8)){IlIIlI(
"\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x61\x74\x74\x61\x63\x68\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,lIllll(&IllllI->dev),IIIll);
usb_driver_release_interface(&llIIllI,IllllI);return IIIll;}return IIllIlIl;}
#if KERNEL_GT_EQ((0x103b+1424-0x15c6),(0x33f+9122-0x26de),(0x78+1191-0x51f))
static int lIllIIIII(struct device*dev,const void*IllIlIIII)
#else
static int lIllIIIII(struct device*dev,void*IllIlIIII)
#endif
{const char*llIlIl=IllIlIIII;if(strcmp(llIlIl,lIllll(dev))==(0x922+6769-0x2393))
return(0x1060+3555-0x1e42);return(0x1f11+1094-0x2357);}struct usb_device*
llIlIlll(const char*llIlIl){struct device*dev;dev=bus_find_device(
#if KERNEL_LT_EQ((0x1985+2065-0x2194),(0xad2+6850-0x258e),(0x1c6+4352-0x12b4))
llIIllI.driver.bus,
#else
llIIllI.drvwrap.driver.bus,
#endif
NULL,(void*)llIlIl,lIllIIIII);if(dev){return to_usb_device(dev);}return NULL;}





int IllIlllI(struct usb_device*IlIII){int i;int lllIllIll=(0x1f5+2988-0xda1);int
 IIllIlIl=(0x1681+4175-0x26d0);int IIIll=-ENODEV;llIll(
"\x2b\x2b\x20\x25\x73" "\n",lIllll(&IlIII->dev));if(!lllllIIl(IlIII)){IIIll=
lIIIlIIl(IlIII);if(IIIll<(0x2aa+3587-0x10ad)){IlIIlI(
"\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x61\x74\x74\x61\x63\x68\x20\x75\x73\x62\x20\x64\x65\x76\x69\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,lIllll(&IlIII->dev),IIIll);llIll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}}if
(IlIII->actconfig){for(i=(0x112+727-0x3e9);i<IlIII->actconfig->desc.
bNumInterfaces;i++){struct usb_interface*IllllI=IlIII->actconfig->interface[i];
if(IllllI==NULL)continue;
IIIll=lIlllIll(IllllI);if(IIIll<(0x39+7955-0x1f4c)){llIll(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x63\x6c\x61\x69\x6d\x65\x64\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,lIllll(&IllllI->dev),IIIll);break;}lllIllIll++;if(IIIll>(0xbb0+3906-0x1af2)){
llIll(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x61\x63\x74\x75\x61\x6c\x6c\x79\x20\x63\x6c\x61\x69\x6d\x65\x64" "\n"
,lIllll(&IllllI->dev));IIllIlIl++;}else
{llIll(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x63\x6c\x61\x69\x6d\x65\x64" "\n"
,lIllll(&IllllI->dev));}}if(IIIll>=(0x4a+8351-0x20e9)&&lllIllIll>
(0x9bb+6505-0x2324)&&IIllIlIl==(0x260+6685-0x1c7d)){



struct llIII*IlIlI=IlllIlIl(IlIII);if(IlIlI){llIll(
"\x72\x65\x66\x72\x65\x73\x68\x20\x6f\x6e\x6c\x69\x6e\x65" "\n");llllIIlII(IlIlI
);IlIllIl(IlIlI);}else{llIll(
"\x73\x74\x75\x62\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n");}}}llIll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}





void IIlIIIlI(struct usb_device*IlIII,int IlIlIlll){int i;llIll(
"\x2b\x2b\x20\x25\x73" "\n",lIllll(&IlIII->dev));if(IlIII->actconfig){for(i=
(0x763+6744-0x21bb);i<IlIII->actconfig->desc.bNumInterfaces;i++){struct 
usb_interface*IllllI=IlIII->actconfig->interface[i];if(IllllI==NULL)continue;
if(IllllI->dev.driver==NULL)continue;if(to_usb_driver(IllllI->dev.driver)!=&
llIIllI)continue;llIll(
"\x72\x65\x6c\x65\x61\x73\x65\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73" "\n"
,lIllll(&IllllI->dev));
usb_driver_release_interface(&llIIllI,IllllI);}}if(lllllIIl(IlIII)){llIIIIII(
IlIII);}
#if KERNEL_GT_EQ((0x349+333-0x494),(0xe78+1677-0x14ff),(0x153f+2641-0x1f7a))
if(lIllIlII(&IlIII->dev)){lIIIIIII(&IlIII->dev,(0xaf2+6245-0x2357));llIll(
"\x73\x65\x6e\x64\x20\x4b\x4f\x42\x4a\x5f\x41\x44\x44\x20\x66\x6f\x72\x20\x64\x65\x76\x69\x63\x65\x20\x25\x73" "\n"
,lIllll(&IlIII->dev));kobject_uevent(&IlIII->dev.kobj,KOBJ_ADD);}
#endif
if(IlIII->actconfig){for(i=(0x10c4+83-0x1117);i<IlIII->actconfig->desc.
bNumInterfaces;i++){struct usb_interface*IllllI=IlIII->actconfig->interface[i];
if(IllllI==NULL)continue;
#if KERNEL_GT_EQ((0x15b0+1493-0x1b83),(0x167b+3932-0x25d1),(0x83c+2825-0x132f))
if(lIllIlII(&IllllI->dev)){lIIIIIII(&IllllI->dev,(0x52b+787-0x83e));llIll(
"\x73\x65\x6e\x64\x20\x4b\x4f\x42\x4a\x5f\x41\x44\x44\x20\x66\x6f\x72\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73" "\n"
,lIllll(&IllllI->dev));kobject_uevent(&IllllI->dev.kobj,KOBJ_ADD);}
#endif
if(IlIlIlll&&IllllI->dev.driver==NULL){int llIllIIl;llIll(
"\x6c\x6f\x61\x64\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x64\x72\x69\x76\x65\x72\x20\x66\x6f\x72\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73" "\n"
,lIllll(&IllllI->dev));


llIllIIl=device_attach(&IllllI->dev);}}}llIll("\x2d\x2d" "\n");}








#if KERNEL_LT_EQ((0x1b11+996-0x1ef3),(0xa4c+5675-0x2071),(0xded+4691-0x202d))


int IllIIlIlI(struct notifier_block*self,unsigned long llllIIl,void*dev){struct 
usb_device*IlIII=dev;llIll(
"\x2b\x2b\x20\x61\x63\x74\x69\x6f\x6e\x3d\x25\x73\x28\x25\x6c\x75\x29\x20\x64\x65\x76\x3d\x25\x73" "\n"
,IIIIlIlII(llllIIl),llllIIl,IlIII?lIllll(&IlIII->dev):"\x6e\x6f\x6e\x65");if(
llllIIl==USB_DEVICE_ADD){if(IllllIIl(IlIII)){IllIlllI(IlIII);}}if(llllIIl==
USB_DEVICE_REMOVE){

IIlIIIlI(IlIII,(0x123+9098-0x24ad));}llIll("\x2d\x2d");return NOTIFY_OK;}struct 
notifier_block IllllIII={.notifier_call=IllIIlIlI,.priority=INT_MAX,
};
#else 




int IlllllIlI(struct notifier_block*self,unsigned long llllIIl,void*dev){struct 
device*IlIlII=dev;llIll(
"\x2b\x2b\x20\x61\x63\x74\x69\x6f\x6e\x3d\x25\x73\x28\x25\x6c\x75\x29\x20\x64\x65\x76\x3d\x25\x73" "\n"
,lIlIIIII(llllIIl),llllIIl,IlIlII?lIllll(IlIlII):"\x6e\x6f\x6e\x65");if(llllIIl
==BUS_NOTIFY_ADD_DEVICE){if(llIlllII(IlIlII)){struct usb_device*IlIII=
to_usb_device(IlIlII);



if(IllllIIl(IlIII)){

if(lIIIlIIl(IlIII)>=(0x17a8+1004-0x1b94)){
#if KERNEL_GT_EQ((0x684+2788-0x1166),(0x44b+6785-0x1ec6),(0x149f+2016-0x1c69))







lIIIIIII(&IlIII->dev,(0x1922+371-0x1a94));
#endif
}}}else if(IlIlIIlII(IlIlII)){struct usb_interface*IllllI=to_usb_interface(dev);
struct usb_device*IlIII=interface_to_usbdev(IllllI);
if(lllllIIl(IlIII)){int IIIll;
#if KERNEL_GT_EQ((0x8b3+3275-0x157c),(0x904+2370-0x1240),(0x6d3+823-0x9f0)) && \
KERNEL_LT_EQ((0x64c+1700-0xcee),(0x17e9+2104-0x201b),(0x5dc+144-0x645))
int state_in_sysfs;
#endif
#if KERNEL_GT_EQ((0xc64+3161-0x18bb),(0x1468+3801-0x233b),(0x74a+82-0x786))
lIIIIIII(&IllllI->dev,(0x6a1+8244-0x26d4));
#endif
llIll(
"\x63\x6c\x61\x69\x6d\x69\x6e\x67\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73" "\n"
,lIllll(&IllllI->dev));
#if KERNEL_GT_EQ((0x8f1+5887-0x1fee),(0x1aba+2107-0x22ef),(0x257+5572-0x1801)) \
&& KERNEL_LT_EQ((0xdcf+6217-0x2616),(0x11bd+4323-0x229a),(0x1258+4740-0x24b5))























state_in_sysfs=IlIlII->kobj.state_in_sysfs;IlIlII->kobj.state_in_sysfs=
(0x1439+1675-0x1ac4);
#endif
IIIll=lIlllIll(IllllI);
#if KERNEL_GT_EQ((0xab0+806-0xdd4),(0x1c69+879-0x1fd2),(0x5a0+1402-0xb00)) && \
KERNEL_LT_EQ((0x166a+3485-0x2405),(0x19c8+2570-0x23cc),(0x4a2+5108-0x186f))

IlIlII->kobj.state_in_sysfs=state_in_sysfs;
#endif
if(IIIll<(0x2b1+6220-0x1afd)){llIll(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x63\x6c\x61\x69\x6d\x65\x64\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,lIllll(&IllllI->dev),IIIll);}else if(IIIll>(0x721+4394-0x184b)){llIll(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x20\x61\x63\x74\x75\x61\x6c\x6c\x79\x20\x63\x6c\x61\x69\x6d\x65\x64" "\n"
,lIllll(&IllllI->dev));}else
{llIll(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x20\x63\x6c\x61\x69\x6d\x65\x64" "\n"
,lIllll(&IllllI->dev));}}}}else if(llllIIl==BUS_NOTIFY_DEL_DEVICE){if(IlIlIIlII(
IlIlII)){struct usb_interface*IllllI=to_usb_interface(dev);struct usb_device*
IlIII=interface_to_usbdev(IllllI);if(lllllIIl(IlIII)){



}}else if(llIlllII(IlIlII)){struct usb_device*IlIII=to_usb_device(IlIlII);if(
lllllIIl(IlIII)){


llIIIIII(IlIII);}}}llIll("\x2d\x2d" "\n");return NOTIFY_OK;}struct 
notifier_block IllIIIIl={.notifier_call=IlllllIlI,.priority=INT_MAX,
};
#endif 
#endif 

