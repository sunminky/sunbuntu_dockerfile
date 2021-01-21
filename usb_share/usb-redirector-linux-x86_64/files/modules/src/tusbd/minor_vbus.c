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

#ifdef _USBD_ENABLE_VHCI_
#include "usbd.h"
ssize_t lIIIllllI(void*,const char __user*,size_t);ssize_t lllIIlllI(void*,char 
__user*,size_t);long lIllIlIll(void*,unsigned int,unsigned long);
#ifdef CONFIG_COMPAT
long lllIllIIl(void*,unsigned int,unsigned long);
#endif
int lllIllIII(void*,int);int lllllIIlI(void*,int);unsigned int IlIlIIlIl(void*,
struct file*,poll_table*IIIIlI);int llIIllIlI(struct IIIIII*lllll,struct 
llIlIIlIl __user*ioctl);int IllIIlIll(struct IIIIII*lllll,struct lllllIlll 
__user*ioctl);int IIIIIlllI(struct IIIIII*lllll,struct IIlIIIIlI __user*ioctl);
static struct IlIllIIl llIllllIl[]={{"\x74\x79\x70\x65","\x76\x62\x75\x73",NULL}
,{NULL,NULL,NULL}};struct IIIIII*llllIIIII(void){struct IIIIII*lllll;lllll=
IIIlIll(sizeof(*lllll),GFP_KERNEL);if(lllll){mutex_init(&lllll->mutex);lllll->
context=lllll;lllll->llllll=-(0x1ab+9287-0x25f1);lllll->ops.open=lllIllIII;lllll
->ops.release=lllllIIlI;lllll->ops.unlocked_ioctl=lIllIlIll;
#ifdef CONFIG_COMPAT
lllll->ops.compat_ioctl=lllIllIIl;
#endif
lllll->ops.read=lllIIlllI;lllll->ops.write=lIIIllllI;lllll->ops.poll=IlIlIIlIl;
lllll->llllIlII=llIllllIl;if(lIIIIllI(lllll,(0x24ba+572-0x26f5),
(0xbf5+6428-0x2510))<(0x220+2076-0xa3c)){IlIIIl(lllll);lllll=NULL;}}return lllll
;}void llIllllII(struct IIIIII*lllll){if(lllll){IIIIlIII(lllll);IlIIIl(lllll);}}
ssize_t lllIIlllI(void*context,char __user*IIIIl,size_t llIIl){
ssize_t IIIll=(0x981+3687-0x17e8);IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x72\x65\x61\x64\x3a\x20\x62\x75\x66\x20\x69\x73\x20\x30\x78\x25\x70\x2c\x20\x72\x65\x71\x75\x65\x73\x74\x65\x64\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,IIIIl,(unsigned long)llIIl);return IIIll;}ssize_t lIIIllllI(void*context,const 
char __user*IIIIl,size_t llIIl){
ssize_t IIIll=llIIl;IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x77\x72\x69\x74\x65\x3a\x20\x62\x75\x66\x20\x69\x73\x20\x30\x78\x25\x70\x2c\x20\x72\x65\x71\x75\x65\x73\x74\x65\x64\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,IIIIl,(unsigned long)llIIl);return IIIll;}long IIIIllIlI(void*context,unsigned 
int lIIlII,void __user*IllIII){struct IIIIII*lllll=context;ssize_t IIIll=
(0x17d6+970-0x1ba0);IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2b\x2b\x20\x63\x6d\x64\x3d\x25\x64\x20\x61\x72\x67\x3d\x30\x78\x25\x70" "\n"
,lIIlII,IllIII);switch(lIIlII){case lIlIllllI:IIIll=llIIllIlI(lllll,IllIII);
break;case lIIIIlIII:IIIll=IllIIlIll(lllll,IllIII);break;case llIIllIIl:IIIll=
IIIIIlllI(lllll,IllIII);break;default:IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x6f\x63\x74\x6c" "\n"
);IIIll=-EINVAL;break;}IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IIIll);return IIIll;}long lIllIlIll(void*context,unsigned int 
lIIlII,unsigned long IllIII){IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c" "\n");return 
IIIIllIlI(context,lIIlII,(void __user*)IllIII);}
#ifdef CONFIG_COMPAT
long lllIllIIl(void*context,unsigned int lIIlII,unsigned long IllIII){IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x63\x6f\x6d\x70\x61\x74\x5f\x69\x6f\x63\x74\x6c" "\n"
);return IIIIllIlI(context,lIIlII,compat_ptr(IllIII));}
#endif


int lllIllIII(void*context,int lIlIIll){
IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x6f\x70\x65\x6e\x20\x25\x64" "\n",
lIlIIll);return(0xabb+1083-0xef6);}

int lllllIIlI(void*context,int lIlIIll){
IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x72\x65\x6c\x65\x61\x73\x65\x20\x25\x64" "\n"
,lIlIIll);if(lIlIIll==(0x16d5+2988-0x2281)){
llllIllIl();}return(0xa51+180-0xb05);}unsigned int IlIlIIlIl(void*context,struct
 file*lllIll,poll_table*IIIIlI){
return(POLLOUT|POLLWRNORM);}int llIIllIlI(struct IIIIII*lllll,struct llIlIIlIl 
__user*ioctl){int IIIll=(0xd54+1351-0x129b);struct IlIlIl*lIllI=NULL;lllII 
lllllI;lIlIlI vid;lIlIlI IlIIlIl;lIlIlI llIlllI;lIlIlI llIlllIll;IIIlll speed;
IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x2b\x2b" "\n"
);do
{if(get_user(lllllI,&ioctl->llIllI.IIllIll)<(0x476+5646-0x1a84)){IIIll=-EFAULT;
break;}if(lllllI!=sizeof(struct llIlIIlIl)){IIIll=-EINVAL;break;}if(get_user(vid
,&ioctl->lIIIlIII)<(0x10a+2364-0xa46)){IIIll=-EFAULT;break;}if(get_user(IlIIlIl,
&ioctl->lllIIIll)<(0x146c+274-0x157e)){IIIll=-EFAULT;break;}if(get_user(llIlllI,
&ioctl->lIIIllIl)<(0x51d+122-0x597)){IIIll=-EFAULT;break;}if(get_user(llIlllIll,
&ioctl->IIIllIlII)<(0x779+6646-0x216f)){IIIll=-EFAULT;break;}if(get_user(speed,&
ioctl->llIllIIII)<(0x3c9+480-0x5a9)){IIIll=-EFAULT;break;}
switch(speed){case IIIIIIlll:speed=USB_SPEED_LOW;break;case IIlIIlllI:speed=
USB_SPEED_FULL;break;case IllIlIlIl:speed=USB_SPEED_HIGH;break;case IlIIlIIlI:
#if KERNEL_GT_EQ((0xf53+3160-0x1ba9),(0x91b+2628-0x1359),(0xf1a+908-0x127f)) || \
RHEL_RELEASE_GT_EQ((0x77b+2650-0x11cf),(0x4+2034-0x7f3)) 
speed=USB_SPEED_SUPER;
#else
IlIIlI(
"\x55\x53\x42\x20\x33\x2e\x30\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x6e\x20\x74\x68\x69\x73\x20\x6b\x65\x72\x6e\x65\x6c\x2c\x20\x75\x73\x65\x20\x6b\x65\x72\x6e\x65\x6c\x20\x32\x2e\x36\x2e\x33\x39\x20\x6f\x72\x20\x6e\x65\x77\x65\x72" "\n"
);IIIll=-EINVAL;
#endif
break;default:IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x64\x65\x76\x69\x63\x65\x20\x73\x70\x65\x65\x64" "\n"
);IIIll=-EINVAL;break;}if(IIIll<(0x22cc+987-0x26a7))break;lIllI=lIIlIIIII(vid,
IlIIlIl,llIlllI,speed);if(lIllI==(0xb0+388-0x234)){IIIll=-ENOMEM;break;}IIIll=
llllIllll(lIllI);if(IIIll<(0x273+6716-0x1caf)){IlIIlIll(lIllI);break;}llIll(
"\x64\x65\x76\x69\x63\x65\x69\x64\x3d\x25\x64" "\n",IlllIlII(lIllI->lllll));if(
put_user((lllII)IlllIlII(lIllI->lllll),&ioctl->lIIlIlIlI)<(0xbd+5873-0x17ae)){
IlIIlIll(lIllI);IIIll=-EFAULT;break;}}while((0x70f+6518-0x2085));if(IIIll<
(0x5d4+4461-0x1741)){if(lIllI)IlIIlIll(lIllI);}IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}int IllIIlIll(struct IIIIII*lllll,struct lllllIlll __user*
ioctl){int IIIll=(0x100c+1206-0x14c2);struct IlIlIl*lIllI;lllII lllllI;lllII 
IIIlIlII;IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x6e\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x2b\x2b" "\n"
);do
{if(get_user(lllllI,&ioctl->llIllI.IIllIll)<(0x1a63+984-0x1e3b)){IIIll=-EFAULT;
break;}if(lllllI!=sizeof(struct lllllIlll)){IIIll=-EINVAL;break;}if(get_user(
IIIlIlII,&ioctl->lIIlIlIlI)<(0x136d+1837-0x1a9a)){IIIll=-EFAULT;break;}lIllI=
lIlllIlIl(IIIlIlII);if(lIllI==NULL){IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x6e\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x64\x65\x76\x69\x63\x65\x20\x25\x75\x20\x69\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIIlIlII);IIIll=-ENODEV;break;}

IlIIlIll(lIllI);
IIlllIll(lIllI);}while((0xd43+826-0x107d));IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x6e\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}int IIIIIlllI(struct IIIIII*lllll,struct IIlIIIIlI __user*
ioctl){int IIIll=(0x1125+3389-0x1e62);lllII lllllI;IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x73\x62\x33\x5f\x73\x75\x70\x70\x6f\x72\x74\x3a\x20\x2b\x2b" "\n"
);do
{if(get_user(lllllI,&ioctl->llIllI.IIllIll)<(0x153f+9-0x1548)){IIIll=-EFAULT;
break;}if(lllllI!=sizeof(struct IIlIIIIlI)){IIIll=-EINVAL;break;}
#if KERNEL_GT_EQ((0x36b+1137-0x7da),(0x1ab2+1868-0x21f8),(0x365+7271-0x1fa5)) ||\
 RHEL_RELEASE_GT_EQ((0x15d7+1772-0x1cbd),(0xf24+2752-0x19e1))
IIIll=(0xd5c+5293-0x2209);
#else
IIIll=-EPIPE;
#endif
}while((0xacc+2752-0x158c));IlllI(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x73\x62\x33\x5f\x73\x75\x70\x70\x6f\x72\x74\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}
#endif 

