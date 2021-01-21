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
static ssize_t IIIlIlIll(void*,const char __user*,size_t);static ssize_t 
lIlIIIllI(void*,char __user*,size_t);static long IIIlIlIII(void*,unsigned int,
unsigned long);
#ifdef CONFIG_COMPAT
static long IIIIllIIl(void*,unsigned int,unsigned long);
#endif
static int lIIlIIlIl(void*,int);static int llIIIIlll(void*,int);static unsigned 
int IlllIlllI(void*,struct file*,poll_table*IIIIlI);static int lIlllIlll(struct 
IIIIII*lllll,const char __user*IIIIl);static int llllIIIll(struct IIIIII*lllll,
const struct IlIlllIIl __user*ioctl);static int llllIlllI(struct IIIIII*lllll,
struct lllllllIl __user*ioctl);static int lllIlIlll(struct IIIIII*lllll,const 
struct lIlIlIlIl __user*ioctl);static int IIlIIlIlI(struct IIIIII*lllll,const 
struct lllIllllI __user*ioctl);static int IIIIIIIIl(struct IIIIII*lllll,const 
struct llIlIIIII __user*ioctl);struct IlIllIIl IlllllIll[]={{"\x74\x79\x70\x65",
"\x6c\x6f\x61\x64\x65\x72",NULL},{NULL,NULL,NULL}};struct IIIIII*lIlllIIlI(void)
{struct IIIIII*lllll;lllll=IIIlIll(sizeof(*lllll),GFP_KERNEL);if(lllll){
mutex_init(&lllll->mutex);lllll->context=lllll;lllll->llllll=-
(0xcd9+2934-0x184e);lllll->ops.open=lIIlIIlIl;lllll->ops.release=llIIIIlll;lllll
->ops.unlocked_ioctl=IIIlIlIII;
#ifdef CONFIG_COMPAT
lllll->ops.compat_ioctl=IIIIllIIl;
#endif
lllll->ops.read=lIlIIIllI;lllll->ops.write=IIIlIlIll;lllll->ops.poll=IlllIlllI;
lllll->llllIlII=IlllllIll;if(lIIIIllI(lllll,(0xff4+5335-0x24cb),
(0x4e1+2872-0x1019))<(0x452+6899-0x1f45)){IlIIIl(lllll);lllll=NULL;}}return 
lllll;}void lllIIIII(struct IIIIII*lllll){if(lllll){IIIIlIII(lllll);IlIIIl(lllll
);}}static ssize_t lIlIIIllI(void*context,char __user*IIIIl,size_t llIIl){
ssize_t IIIll=(0x90f+3733-0x17a4);IlllI(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x72\x65\x61\x64\x3a\x20\x62\x75\x66\x20\x69\x73\x20\x30\x78\x25\x70\x2c\x20\x72\x65\x71\x75\x65\x73\x74\x65\x64\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,IIIIl,(unsigned long)llIIl);return IIIll;}static ssize_t IIIlIlIll(void*context
,const char __user*IIIIl,size_t llIIl){
ssize_t IIIll=llIIl;IlllI(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x77\x72\x69\x74\x65\x3a\x20\x62\x75\x66\x20\x69\x73\x20\x30\x78\x25\x70\x2c\x20\x72\x65\x71\x75\x65\x73\x74\x65\x64\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,IIIIl,(unsigned long)llIIl);return IIIll;}static long IlllIIIIl(void*context,
unsigned int lIIlII,void __user*IllIII){struct IIIIII*lllll=context;ssize_t 
IIIll=(0x1244+17-0x1255);IlllI(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2b\x2b\x20\x63\x6d\x64\x3d\x25\x64\x20\x61\x72\x67\x3d\x30\x78\x25\x70" "\n"
,lIIlII,IllIII);switch(lIIlII){case IIlIIlIIl:IIIll=lIlllIlll(lllll,IllIII);
break;case lllIIIIII:IIIll=llllIIIll(lllll,IllIII);break;case IIIIIIIlI:IIIll=
llllIlllI(lllll,IllIII);break;case IllllIIll:IIIll=lllIlIlll(lllll,IllIII);break
;case IIlIIllII:IIIll=IIlIIlIlI(lllll,IllIII);break;case IIlIlIIlI:IIIll=
IIIIIIIIl(lllll,IllIII);break;default:IlllI(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x6f\x63\x74\x6c" "\n"
);IIIll=-EINVAL;break;}IlllI(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IIIll);return IIIll;}static long IIIlIlIII(void*context,unsigned
 int lIIlII,unsigned long IllIII){IlllI(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x69\x6f\x63\x74\x6c" "\n");
return IlllIIIIl(context,lIIlII,(void __user*)IllIII);}
#ifdef CONFIG_COMPAT
static long IIIIllIIl(void*context,unsigned int lIIlII,unsigned long IllIII){
IlllI(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x63\x6f\x6d\x70\x61\x74\x5f\x69\x6f\x63\x74\x6c" "\n"
);return IlllIIIIl(context,lIIlII,compat_ptr(IllIII));}
#endif


static int lIIlIIlIl(void*context,int lIlIIll){
IlllI(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x6f\x70\x65\x6e\x20\x25\x64" "\n"
,lIlIIll);
return(0x1665+2628-0x20a9);}

static int llIIIIlll(void*context,int lIlIIll){
IlllI(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x72\x65\x6c\x65\x61\x73\x65\x20\x25\x64" "\n"
,lIlIIll);if(lIlIIll==(0x64b+6259-0x1ebe)){
IIllIlll();}return(0x18d6+1484-0x1ea2);}static unsigned int IlllIlllI(void*
context,struct file*lllIll,poll_table*IIIIlI){
return(POLLOUT|POLLWRNORM);}static int lIlllIlll(struct IIIIII*lllll,const char 
__user*IIIIl){int IIIll=(0x545+5112-0x193d);const char __user*IIIlIIII;struct 
list_head lIlllIII;struct llIllIlII IIIllllI;lllII IIllll;llIll("\x2b\x2b" "\n")
;INIT_LIST_HEAD(&lIlllIII);if(copy_from_user(&IIIllllI,IIIIl,sizeof(IIIllllI)))
return-EFAULT;IIIlIIII=IIIIl+IIIllllI.llIllI.IIllIll;if(IIIIl+sizeof(IIIllllI)>
IIIlIIII)return-EINVAL;IIIIl+=sizeof(IIIllllI);llIll(
"\x63\x6f\x75\x6e\x74\x3d\x25\x64" "\n",IIIllllI.IlllIllIl);for(IIllll=
(0x13bb+4617-0x25c4);IIllll<IIIllllI.IlllIllIl;IIllll++){size_t IlIllIlll;size_t
 IlIIIIIl;struct IIlIIIIl IIIII;struct lIIIllII*IlIIIII;if(IIIIl+sizeof(IIIII)>
IIIlIIII){IIIll=-EINVAL;break;}if(copy_from_user(&IIIII,IIIIl,sizeof(IIIII))){
IIIll=-EFAULT;break;}if((IIIII.IIlIIlI&IIIllIlIl)&&(IIIII.IIlIIlI&lIIllIIll)){
IIIll=-EINVAL;break;}if((IIIII.IIlIIlI&IIIIIllll)&&IIIII.llIIllIl<=
(0x1d8+4531-0x138b)){
IIIll=-EINVAL;break;}if((IIIII.IIlIIlI&IIIIlIIII)&&IIIII.IlllIIlI<=
(0x8a3+3001-0x145c)){
IIIll=-EINVAL;break;}IlIIIIIl=sizeof(struct IIlIIIIl)+IIIII.llIIllIl+IIIII.
IlllIIlI;IlIllIlll=sizeof(struct lIIIllII)-sizeof(struct IIlIIIIl)+IlIIIIIl;if(
IIIIl+IlIIIIIl>IIIlIIII){IIIll=-EINVAL;break;}IlIIIII=lIlIlll(IlIllIlll,
GFP_KERNEL);if(IlIIIII==NULL){IIIll=-ENOMEM;break;}if(copy_from_user(&IlIIIII->
IIIII,IIIIl,IlIIIIIl)){IlIIIl(IlIIIII);IIIll=-EFAULT;break;}if((IIIII.IIlIIlI&
IIIIIllll)&&*((char*)(&IlIIIII->IIIII+(0x1403+3478-0x2198))+IIIII.llIIllIl-
(0x844+6714-0x227d))!='\0'){
IlIIIl(IlIIIII);IIIll=-EINVAL;break;}if((IIIII.IIlIIlI&IIIIlIIII)&&*((char*)(&
IlIIIII->IIIII+(0x16b+9313-0x25cb))+IIIII.llIIllIl+IIIII.IlllIIlI-
(0x1313+1457-0x18c3))!='\0'){
IlIIIl(IlIIIII);IIIll=-EINVAL;break;}llIll(
"\x56\x3d\x25\x30\x34\x58\x20\x50\x3d\x25\x30\x34\x58\x20\x52\x3d\x25\x30\x34\x58\x20\x43\x3d\x25\x30\x32\x58\x20\x53\x3d\x25\x30\x32\x58\x20\x50\x3d\x25\x30\x32\x58\x20\x49\x44\x3d\x25\x73\x20\x53\x4e\x3d\x25\x73\x20\x46\x3d\x25\x30\x38\x58" "\n"
,IlIIIII->IIIII.lIIIlIII,IlIIIII->IIIII.lllIIIll,IlIIIII->IIIII.lIIIllIl,IlIIIII
->IIIII.IIllIlllI,IlIIIII->IIIII.IIIIlIlll,IlIIIII->IIIII.lIIlllllI,IlIIIII->
IIIII.llIIllIl?(char*)(&IlIIIII->IIIII+(0x896+891-0xc10)):"\x6e\x6f\x6e\x65",
IlIIIII->IIIII.IlllIIlI?(char*)(&IlIIIII->IIIII+(0xbba+259-0xcbc))+IlIIIII->
IIIII.llIIllIl:"\x6e\x6f\x6e\x65",IlIIIII->IIIII.IIlIIlI);list_add_tail(&IlIIIII
->entry,&lIlllIII);IIIIl+=IlIIIIIl;}
if(IIllll!=IIIllllI.IlllIllIl){IIIll=-EINVAL;}
if(IIIll>=(0x4a4+242-0x596)){llIll("\x75\x70\x64\x61\x74\x65" "\n");IlllllllI(&
lIlllIII);}
if(IIIll<(0xbf7+1632-0x1257)){while(!list_empty(&lIlllIII)){struct lIIIllII*
lIIlIll;lIIlIll=list_entry(lIlllIII.next,struct lIIIllII,entry);list_del(&
lIIlIll->entry);IlIIIl(lIIlIll);}}llIll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
static int llllIIIll(struct IIIIII*lllll,const struct IlIlllIIl __user*ioctl){
int IIIll;lllII lllllI;llIll("\x2b\x2b" "\n");do
{if(get_user(lllllI,&ioctl->llIllI.IIllIll)<(0x39f+4197-0x1404)){IIIll=-EFAULT;
break;}if(lllllI!=sizeof(*ioctl)){IIIll=-EINVAL;break;}IIllIlll();IIIll=
(0x6+9497-0x251f);}while((0x3ec+2906-0xf46));llIll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
static int llllIlllI(struct IIIIII*lllll,struct lllllllIl __user*ioctl){int 
IIIll=-ENODEV;lllII lllllI;llIll("\x2b\x2b" "\n");do
{IIIlll IlIIIIIII;char llIlIl[sizeof(ioctl->llIlIl)+(0x1a4c+2957-0x25d8)];struct
 usb_device*IlIII;if(get_user(lllllI,&ioctl->llIllI.IIllIll)<(0x769+640-0x9e9)){
IIIll=-EFAULT;break;}if(lllllI!=sizeof(*ioctl)){IIIll=-EINVAL;break;}if(get_user
(IlIIIIIII,&ioctl->IlIIIIIII)<(0x905+135-0x98c)){IIIll=-EFAULT;break;}llIlIl[
sizeof(llIlIl)-(0x13f1+3568-0x21e0)]='\0';if(copy_from_user(llIlIl,&ioctl->
llIlIl,sizeof(ioctl->llIlIl))){IIIll=-EFAULT;break;}IIIll=-ENODEV;IlIII=llIlIlll
(llIlIl);if(IlIII){usb_lock_device(IlIII);
#if KERNEL_LT_EQ((0x1789+82-0x17d9),(0xbe2+1677-0x1269),(0x2f0+6421-0x1bf0))
down_write(&IlIII->dev.bus->subsys.rwsem);
#endif
if(IllllIIl(IlIII)){IIIll=IllIlllI(IlIII);}else{llIll(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x73\x68\x61\x72\x65\x64" "\n"
,llIlIl);}
#if KERNEL_LT_EQ((0x760+1257-0xc47),(0x1602+875-0x1967),(0x8c5+348-0xa0c))
up_write(&IlIII->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(IlIII);usb_put_dev(IlIII);}else{llIll(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,llIlIl);}}while((0xb3c+4686-0x1d8a));llIll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
static int lllIlIlll(struct IIIIII*lllll,const struct lIlIlIlIl __user*ioctl){
int IIIll=-ENODEV;lllII lllllI;llIll("\x2b\x2b" "\n");do
{char llIlIl[sizeof(ioctl->llIlIl)+(0x5a7+740-0x88a)];IIIlll IlIlIlll;struct 
usb_device*IlIII;if(get_user(lllllI,&ioctl->llIllI.IIllIll)<(0x6d3+7422-0x23d1))
{IIIll=-EFAULT;break;}if(lllllI!=sizeof(*ioctl)){IIIll=-EINVAL;break;}if(
get_user(IlIlIlll,&ioctl->IlIlIlll)<(0x14f6+3835-0x23f1)){IIIll=-EFAULT;break;}
llIlIl[sizeof(llIlIl)-(0xe1d+3471-0x1bab)]='\0';if(copy_from_user(llIlIl,&ioctl
->llIlIl,sizeof(ioctl->llIlIl))){IIIll=-EFAULT;break;}IIIll=-ENODEV;IlIII=
llIlIlll(llIlIl);if(IlIII){usb_lock_device(IlIII);
#if KERNEL_LT_EQ((0x6d5+6672-0x20e3),(0xe9a+1111-0x12eb),(0x1493+992-0x185e))
down_write(&IlIII->dev.bus->subsys.rwsem);
#endif
IIlIIIlI(IlIII,IlIlIlll);IIIll=(0x5e4+7763-0x2437);
#if KERNEL_LT_EQ((0x859+556-0xa83),(0x398+4834-0x1674),(0x1295+1791-0x197f))
up_write(&IlIII->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(IlIII);usb_put_dev(IlIII);}else{llIll(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,llIlIl);}}while((0x2b3+4093-0x12b0));llIll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
static int IIlIIlIlI(struct IIIIII*lllll,const struct lllIllllI __user*ioctl){
int IIIll=-ENODEV;lllII lllllI;llIll("\x2b\x2b" "\n");do
{char llIlIl[sizeof(ioctl->llIlIl)+(0x10d5+4671-0x2313)];struct usb_device*IlIII
;if(get_user(lllllI,&ioctl->llIllI.IIllIll)<(0x180d+1399-0x1d84)){IIIll=-EFAULT;
break;}if(lllllI!=sizeof(*ioctl)){IIIll=-EINVAL;break;}llIlIl[sizeof(llIlIl)-
(0x87c+963-0xc3e)]='\0';if(copy_from_user(llIlIl,&ioctl->llIlIl,sizeof(ioctl->
llIlIl))){IIIll=-EFAULT;break;}IIIll=-ENODEV;IlIII=llIlIlll(llIlIl);if(IlIII){
usb_lock_device(IlIII);
#if KERNEL_LT_EQ((0x1316+864-0x1674),(0x210d+1257-0x25f0),(0xb18+1579-0x112e))
down_write(&IlIII->dev.bus->subsys.rwsem);
#endif
if(IllllIIl(IlIII)){IIIll=IllIlllI(IlIII);}else{IIlIIIlI(IlIII,
(0x1584+3001-0x213c));IIIll=(0x614+1388-0xb80);}
#if KERNEL_LT_EQ((0x1c3+6963-0x1cf4),(0x3d8+415-0x571),(0x305+1268-0x7e4))
up_write(&IlIII->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(IlIII);usb_put_dev(IlIII);}else{llIll(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,llIlIl);}}while((0xf8+5639-0x16ff));llIll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
static int IIIIIIIIl(struct IIIIII*lllll,const struct llIlIIIII __user*ioctl){
int IIIll=-ENODEV;lllII lllllI;llIll("\x2b\x2b" "\n");do
{char llIlIl[sizeof(ioctl->llIlIl)+(0x15dd+2369-0x1f1d)];struct usb_device*IlIII
;if(get_user(lllllI,&ioctl->llIllI.IIllIll)<(0xdd5+1346-0x1317)){IIIll=-EFAULT;
break;}if(lllllI<sizeof(*ioctl)){IIIll=-EINVAL;break;}llIlIl[sizeof(llIlIl)-
(0xec+7003-0x1c46)]='\0';if(copy_from_user(llIlIl,&ioctl->llIlIl,sizeof(ioctl->
llIlIl))){IIIll=-EFAULT;break;}IIIll=-ENODEV;IlIII=llIlIlll(llIlIl);if(IlIII){
usb_lock_device(IlIII);
#if KERNEL_LT_EQ((0x13e3+3365-0x2106),(0x1d6f+1972-0x251d),(0x6dd+5747-0x1d3b))
down_write(&IlIII->dev.bus->subsys.rwsem);
#endif
IIIll=-ENOENT;if(IlIII->actconfig){int i;for(i=(0x1bfc+2376-0x2544);i<IlIII->
descriptor.bNumConfigurations;i++){struct usb_config_descriptor*config=(struct 
usb_config_descriptor*)IlIII->rawdescriptors[i];if(config->bConfigurationValue==
IlIII->actconfig->desc.bConfigurationValue){
if(copy_to_user((void*)(ioctl+(0x9b5+4119-0x19cb)),(void*)config,min(lllllI-
sizeof(*ioctl),(size_t)le16_to_cpu(config->wTotalLength)))){IIIll=-EFAULT;}else{
IIIll=(0xec+9469-0x25e9);}break;}}}
#if KERNEL_LT_EQ((0x10ed+2357-0x1a20),(0x7e7+5255-0x1c68),(0x46d+1025-0x859))
up_write(&IlIII->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(IlIII);usb_put_dev(IlIII);}else{llIll(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,llIlIl);}}while((0x926+1800-0x102e));llIll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
#endif 

