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
#include <linux/ctype.h> 
#define lIIllIIl (0x4bb+6498-0x1d1d)
static struct cdev*lllIlII=NULL;static dev_t llllIlI=MKDEV((0x88+4568-0x1260),
(0x1811+649-0x1a9a));static void*lIlIlIII[lIIllIIl]={(0xfd3+3360-0x1cf3)};static
 struct mutex IllIlII;static struct class*IlllIII=NULL;ssize_t lIlIlllIl(struct 
file*,char __user*,size_t,loff_t*);ssize_t llIIIllll(struct file*,const char 
__user*,size_t,loff_t*);long llllIIIIl(struct file*,unsigned int,unsigned long);
#ifdef CONFIG_COMPAT
long llIIlIllI(struct file*,unsigned int,unsigned long);
#endif
int IIIlIlIIl(struct inode*,struct file*);int IlIlIIIII(struct inode*,struct 
file*);unsigned int llIIIIIII(struct file*lllIll,poll_table*IIIIlI);int 
lIlIIIlII(struct file*lllIll,struct vm_area_struct*IIllllI);
#if KERNEL_LT_EQ((0x337+7251-0x1f88),(0xca0+553-0xec3),(0x7bd+2689-0x1227)) 
static int IlIllIll(struct class_device*dev,char**envp,int lllIlllII,char*IllIl,
int IlIlIlIII);static void IIIlIllI(struct class_device*device);
#elif KERNEL_LT_EQ((0x1b3+4275-0x1264),(0x8f2+1308-0xe08),(0x8f0+1666-0xf59)) 
static int IlIllIll(struct class_device*dev,struct kobj_uevent_env*lIlIIII);
static void IIIlIllI(struct class_device*device);
#else 
static int IlIllIll(struct device*dev,struct kobj_uevent_env*lIlIIII);
#endif
static struct file_operations IIIlIlIlI={.owner=THIS_MODULE,.read=lIlIlllIl,.
write=llIIIllll,.poll=llIIIIIII,.unlocked_ioctl=llllIIIIl,
#ifdef CONFIG_COMPAT
.compat_ioctl=llIIlIllI,
#endif
.mmap=lIlIIIlII,.open=IIIlIlIIl,.release=IlIlIIIII,};int IIIlIllIl(void){int 
IIIll=(0x119a+715-0x1465);IlllI(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2b\x2b" "\n"
);do{mutex_init(&IllIlII);IlllIII=class_create(THIS_MODULE,lIIlllI);if(IlllIII==
NULL){IlllI(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x63\x6c\x61\x73\x73\x5f\x63\x72\x65\x61\x74\x65\x20\x66\x61\x69\x6c\x65\x64\x2e" "\n"
);IIIll=-ENOMEM;break;}
#if KERNEL_LT_EQ((0x593+1782-0xc87),(0x73+7419-0x1d68),(0x1474+4531-0x2618)) 
IlllIII->hotplug=IlIllIll,IlllIII->release=IIIlIllI,
#elif KERNEL_LT_EQ((0x934+3900-0x186e),(0x11d7+4901-0x24f6),(0x17ca+3640-0x25e9)\
) 
IlllIII->uevent=IlIllIll,IlllIII->release=IIIlIllI,
#else 
IlllIII->dev_uevent=IlIllIll,
#endif
IIIll=alloc_chrdev_region(&llllIlI,(0x224+2026-0xa0e),lIIllIIl,lIIlllI);if(IIIll
!=(0x6f4+7870-0x25b2)){IlllI(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x61\x6c\x6c\x6f\x63\x5f\x63\x68\x72\x64\x65\x76\x5f\x72\x65\x67\x69\x6f\x6e\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}IlllI(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x64\x20\x64\x65\x76\x6e\x75\x6d\x20\x72\x65\x67\x69\x6f\x6e\x3a\x20\x4d\x61\x6a\x6f\x72\x20\x25\x64\x20\x4d\x69\x6e\x6f\x72\x20\x25\x64" "\n"
,MAJOR(llllIlI),MINOR(llllIlI));memset(lIlIlIII,(0x126a+3894-0x21a0),sizeof(
lIlIlIII));lllIlII=cdev_alloc();if(lllIlII==NULL){IlllI(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x63\x64\x65\x76\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64\x2e" "\n"
);IIIll=-ENOMEM;break;}lllIlII->owner=THIS_MODULE;lllIlII->ops=&IIIlIlIlI;IIIll=
cdev_add(lllIlII,llllIlI,lIIllIIl);if(IIIll!=(0x216+7545-0x1f8f)){IlllI(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x63\x64\x65\x76\x5f\x61\x64\x64\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}}while((0xa0f+4642-0x1c31));if(IIIll!=(0x1ba7+1972-0x235b)){if(
lllIlII)cdev_del(lllIlII);if(llllIlI!=MKDEV((0xad1+2191-0x1360),
(0x9e2+5439-0x1f21)))unregister_chrdev_region(llllIlI,(0xad0+2701-0x145e));if(
IlllIII)class_destroy(IlllIII);lllIlII=NULL;llllIlI=MKDEV((0x1847+2136-0x209f),
(0x15f5+1492-0x1bc9));IlllIII=NULL;}IlllI(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}int llllllII(void){IlllI(
"\x64\x65\x73\x74\x72\x6f\x79\x5f\x63\x64\x65\x76" "\n");if(lllIlII)cdev_del(
lllIlII);if(llllIlI!=MKDEV((0x3cc+8818-0x263e),(0xbf0+1785-0x12e9)))
unregister_chrdev_region(llllIlI,lIIllIIl);if(IlllIII)class_destroy(IlllIII);
lllIlII=NULL;llllIlI=MKDEV((0x15f2+3528-0x23ba),(0xc99+2049-0x149a));IlllIII=
NULL;return(0x156c+957-0x1929);}
#if KERNEL_LT_EQ((0x25a+1661-0x8d5),(0x808+2972-0x139e),(0x1c7+7681-0x1faf)) 
static void IIIlIllI(struct class_device*device){kfree(device);}
#endif
#if KERNEL_LT_EQ((0x1c6+7534-0x1f32),(0x834+7129-0x2407),(0x1a10+1209-0x1eb2)) 
static int IlIllIll(struct class_device*device,char**envp,int lllIlllII,char*
IllIl,int IlIlIlIII){struct IIIIII*lllll=device->class_data;if(lllll&&lllll->
llllIlII){int i;int length;struct IlIllIIl*IllIIIl;for(IllIIIl=lllll->llllIlII,i
=(0x1a89+2588-0x24a5),length=(0x266+3340-0xf72);IllIIIl->name&&(IllIIIl->
IlIIIlIl||IllIIIl->IlIIIlII);IllIIIl++){const char*IlIIIlIl=IllIIIl->IlIIIlII?
IllIIIl->IlIIIlII(lllll->context):IllIIIl->IlIIIlIl;
#if KERNEL_LT_EQ((0x8c6+7186-0x24d6),(0x11d8+1343-0x1711),(0xb02+2286-0x13e1)) 
if(add_hotplug_env_var(
#else 
if(add_uevent_var(
#endif
envp,lllIlllII,&i,IllIl,IlIlIlIII,&length,"\x25\x73\x5f\x25\x73\x3d\x25\x73",
lIIlllI,IllIIIl->name,IlIIIlIl)==(0x187+2881-0xcc8)){int IlIIII;for(IlIIII=
(0x17e0+2545-0x21d1);envp[i-(0x1a50+1864-0x2197)][IlIIII]!='\0'&&envp[i-
(0x51+8077-0x1fdd)][IlIIII]!=((char)(0x237+5468-0x1756));IlIIII++)envp[i-
(0xfb+5477-0x165f)][IlIIII]=toupper(envp[i-(0x1956+1855-0x2094)][IlIIII]);}}}
return(0x1375+4759-0x260c);}
#else 
static int IlIllIll(
#if KERNEL_LT_EQ((0x1da+4525-0x1385),(0x10cd+2351-0x19f6),(0x1ad4+3123-0x26ee)) 
struct class_device*device,
#else 
struct device*device,
#endif
struct kobj_uevent_env*lIlIIII){
#if KERNEL_LT_EQ((0xcb+5231-0x1538),(0x1258+3933-0x21af),(0x2065+789-0x2361)) 
struct IIIIII*lllll=device->class_data;
#else 
struct IIIIII*lllll=dev_get_drvdata(device);
#endif
if(lllll&&lllll->llllIlII){struct IlIllIIl*IllIIIl;for(IllIIIl=lllll->llllIlII;
IllIIIl->name&&(IllIIIl->IlIIIlIl||IllIIIl->IlIIIlII);IllIIIl++){const char*
IlIIIlIl=IllIIIl->IlIIIlII?IllIIIl->IlIIIlII(lllll->context):IllIIIl->IlIIIlIl;
if(add_uevent_var(lIlIIII,"\x25\x73\x5f\x25\x73\x3d\x25\x73",lIIlllI,IllIIIl->
name,IlIIIlIl)==(0x156+1713-0x807)){int IlIIII;for(IlIIII=(0x1625+1560-0x1c3d);
lIlIIII->envp[lIlIIII->envp_idx-(0x10f3+1307-0x160d)][IlIIII]!='\0'&&lIlIIII->
envp[lIlIIII->envp_idx-(0x57+4724-0x12ca)][IlIIII]!=((char)(0x1341+2063-0x1b13))
;IlIIII++)lIlIIII->envp[lIlIIII->envp_idx-(0x708+6360-0x1fdf)][IlIIII]=toupper(
lIlIIII->envp[lIlIIII->envp_idx-(0xa77+2567-0x147d)][IlIIII]);}}}return
(0xbcb+3202-0x184d);}
#endif 
int IIlIIIIll(struct IIIIII*lllll,int llllll){















#if KERNEL_GT_EQ((0x1dc+8698-0x23d4),(0x43a+1734-0xafa),(0x1185+1493-0x173f)) 
struct device*dev=NULL;dev=device_create(IlllIII,NULL,MKDEV(MAJOR(llllIlI),MINOR
(llllIlI)+llllll),lllll,lIIlllI"\x5f\x25\x64",llllll);
#elif KERNEL_EQ((0x1c93+1159-0x2118),(0x1499+2673-0x1f04),(0x1ff4+533-0x21ef)) 
struct device*dev=NULL;dev=device_create_drvdata(IlllIII,NULL,MKDEV(MAJOR(
llllIlI),MINOR(llllIlI)+llllll),lllll,lIIlllI"\x5f\x25\x64",llllll);
#else 
struct class_device*dev=NULL;int lIIllIIlI;dev=kzalloc(sizeof(*dev),GFP_KERNEL);
if(dev){dev->devt=MKDEV(MAJOR(llllIlI),MINOR(llllIlI)+llllll);dev->dev=NULL;dev
->class=IlllIII;dev->parent=NULL;dev->release=NULL;
dev->class_data=lllll;
#if KERNEL_LT_EQ((0x1e5b+506-0x2053),(0xdc7+4511-0x1f60),(0x1acf+277-0x1bd5)) 
dev->hotplug=NULL;
#else 
dev->uevent=NULL;
#endif
snprintf(dev->class_id,BUS_ID_SIZE,lIIlllI"\x5f\x25\x64",llllll);lIIllIIlI=
class_device_register(dev);if(lIIllIIlI){kfree(dev);dev=ERR_PTR(lIIllIIlI);}}
else{dev=ERR_PTR(-ENOMEM);}
#endif
if(IS_ERR(dev)){return PTR_ERR(dev);}lllll->dev=dev;return(0x8d5+4782-0x1b83);}
void IlllIIIII(struct IIIIII*lllll,int llllll){if(lllll->dev){
#if KERNEL_GT_EQ((0x9c5+6729-0x240c),(0x18e6+2606-0x230e),(0x10aa+1810-0x17a2)) 
device_destroy(IlllIII,MKDEV(MAJOR(llllIlI),MINOR(llllIlI)+llllll));
#else 
class_device_destroy(IlllIII,MKDEV(MAJOR(llllIlI),MINOR(llllIlI)+llllll));
#endif
lllll->dev=NULL;}}int lIIIIllI(struct IIIIII*lllll,int lllIllII,int lIlIIIll){
int i;if(lIlIIIll==-(0x1021+3826-0x1f12)){lIlIIIll=lIIllIIl-(0x189+2774-0xc5e);}
if(lllIllII<(0xf+4083-0x1002)||lllIllII>=lIIllIIl)return-EINVAL;if(lIlIIIll<
(0x697+5033-0x1a40)||lIlIIIll>=lIIllIIl)return-EINVAL;if(lllIllII>lIlIIIll)
return-EINVAL;mutex_lock(&IllIlII);for(i=lllIllII;i<=lIlIIIll;i++){if(lIlIlIII[i
]==NULL){if(IIlIIIIll(lllll,i)==(0x5f1+739-0x8d4)){lllll->llllll=i;lIlIlIII[i]=
lllll;if(lllll->ops.IIIllIIl)lllll->ops.IIIllIIl(lllll->context);break;}}}
mutex_unlock(&IllIlII);if(i>lIlIIIll)return-EOVERFLOW;return(0x1346+170-0x13f0);
}dev_t llIIIlIll(struct IIIIII*lllll){dev_t IIIll=MKDEV((0x1261+4845-0x254e),
(0x1d22+2003-0x24f5));mutex_lock(&IllIlII);if(lllll->llllll>=(0x2fc+8459-0x2407)
&&lllll->llllll<lIIllIIl){IIIll=MKDEV(MAJOR(llllIlI),MINOR(llllIlI)+lllll->
llllll);}mutex_unlock(&IllIlII);return IIIll;}int IlllIlII(struct IIIIII*lllll){
int llllll;mutex_lock(&IllIlII);llllll=lllll->llllll;mutex_unlock(&IllIlII);
return llllll;}void IIIIlIII(struct IIIIII*lllll){mutex_lock(&IllIlII);if(lllll
->llllll>=(0xb64+4127-0x1b83)&&lllll->llllll<lIIllIIl&&lIlIlIII[lllll->llllll]==
lllll){lIlIlIII[lllll->llllll]=NULL;IlllIIIII(lllll,lllll->llllll);}lllll->
llllll=-(0xb4a+3905-0x1a8a);mutex_unlock(&IllIlII);if(lllll->ops.lIIllIII)lllll
->ops.lIIllIII(lllll->context);}void lIIIIIlll(struct IIIIII*lllll){
#if KERNEL_LT_EQ((0x1a68+1542-0x206c),(0x607+3439-0x1370),(0x717+5452-0x1c54))
kobject_hotplug(&lllll->dev->kobj,KOBJ_ONLINE);
#else
kobject_uevent(&lllll->dev->kobj,KOBJ_ONLINE);
#endif
}void lIlIlIIIl(struct IIIIII*lllll){
#if KERNEL_LT_EQ((0x1141+4354-0x2241),(0x4b0+5011-0x183d),(0xc1a+2340-0x152f))
kobject_hotplug(&lllll->dev->kobj,KOBJ_OFFLINE);
#else
kobject_uevent(&lllll->dev->kobj,KOBJ_OFFLINE);
#endif
}
ssize_t lIlIlllIl(struct file*lllIll,char __user*lIIllIIII,size_t llIIl,loff_t*
llllIIllI){struct IIIIII*lllll=lllIll->private_data;if(lllll){if(lllll->ops.read
)return lllll->ops.read(lllll->context,lIIllIIII,llIIl);else return
(0x1f53+342-0x20a9);}return-ENODEV;}ssize_t llIIIllll(struct file*lllIll,const 
char __user*lIIllIIII,size_t llIIl,loff_t*llllIIllI){struct IIIIII*lllll=lllIll
->private_data;if(lllll){if(lllll->ops.write)return lllll->ops.write(lllll->
context,lIIllIIII,llIIl);else return(0xdeb+5010-0x217d);}return-ENODEV;}unsigned
 int llIIIIIII(struct file*lllIll,poll_table*IIIIlI){struct IIIIII*lllll=lllIll
->private_data;if(lllll){if(lllll->ops.poll)return lllll->ops.poll(lllll->
context,lllIll,IIIIlI);else return(0xb1d+5198-0x1f6b);}return-ENODEV;}long 
llllIIIIl(struct file*lllIll,unsigned int lIIlII,unsigned long IllIII){struct 
IIIIII*lllll=lllIll->private_data;if(lllll){if(lllll->ops.unlocked_ioctl)return 
lllll->ops.unlocked_ioctl(lllll->context,lIIlII,IllIII);else return
(0xe52+2284-0x173e);}return-ENODEV;}
#ifdef CONFIG_COMPAT
long llIIlIllI(struct file*lllIll,unsigned int lIIlII,unsigned long IllIII){
struct IIIIII*lllll=lllIll->private_data;if(lllll){if(lllll->ops.compat_ioctl)
return lllll->ops.compat_ioctl(lllll->context,lIIlII,IllIII);else return
(0x17bc+2503-0x2183);}return-ENODEV;}
#endif
int lIlIIIlII(struct file*lllIll,struct vm_area_struct*IIllllI){struct IIIIII*
lllll=lllIll->private_data;if(lllll){if(lllll->ops.mmap)return lllll->ops.mmap(
lllll->context,IIllllI);else return-EINVAL;}return-ENODEV;}int IIIlIlIIl(struct 
inode*inode,struct file*lllIll){int IIIll=-ENODEV;u32 m=iminor(inode);struct 
IIIIII*lllll;mutex_lock(&IllIlII);lllll=lIlIlIII[m];if(lllll&&lllll->ops.
IIIllIIl)lllll->ops.IIIllIIl(lllll->context);mutex_unlock(&IllIlII);if(lllll){
lllIll->private_data=lllll;





mutex_lock(&lllll->mutex);if(lllll->ops.open)IIIll=lllll->ops.open(lllll->
context,++lllll->lIlIIll);else IIIll=(0x3c4+7609-0x217d);mutex_unlock(&lllll->
mutex);}return IIIll;}int IlIlIIIII(struct inode*inode,struct file*lllIll){int 
IIIll=-ENODEV;struct IIIIII*lllll=lllIll->private_data;if(lllll){





mutex_lock(&lllll->mutex);if(lllll->ops.release)IIIll=lllll->ops.release(lllll->
context,--lllll->lIlIIll);else IIIll=(0x2ba+8444-0x23b6);mutex_unlock(&lllll->
mutex);if(lllll->ops.lIIllIII)lllll->ops.lIIllIII(lllll->context);}return IIIll;
}
