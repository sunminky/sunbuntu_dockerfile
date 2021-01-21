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
int IlIIlIIII(void*,int);int IlIIlIlII(void*,int);void llllIIlll(void*context);
void lIIIllIII(void*context);unsigned int IIIllIIlI(void*,struct file*,
poll_table*IIIIlI);long IllllIlII(void*context,unsigned int lIIlII,unsigned long
 IllIII);
#ifdef CONFIG_COMPAT
long IllIIIIIl(void*context,unsigned int lIIlII,unsigned long IllIII);
#endif
int IllIIIlII(struct IIlII*lIlII);void IIIlllIll(struct IIlII*lIlII,int status,
gfp_t IlIIl);void IlIIlllI(struct IIlII*lIlII,gfp_t IlIIl);void IIIIIl(struct 
IIlII*lIlII,int status);void lllIIllll(struct IIlII*llIlIll,gfp_t IlIIl);void 
llIIlIIII(struct IIlII*llIlIll,gfp_t IlIIl);void lIllllIlI(struct IIlII*llIlIll,
gfp_t IlIIl);void IIlIIIlIl(struct IIlII*llIlIll,gfp_t IlIIl);void lllIlIIlI(
struct IIlII*llIlIll,gfp_t IlIIl);void lllIIIlII(struct IIlII*llIlIll,gfp_t 
IlIIl);void IIllllIIl(struct IIlII*llIlIll,gfp_t IlIIl);
#if KERNEL_GT_EQ((0x100d+1895-0x1772),(0x1a5a+2579-0x2467),(0x4b7+7558-0x221e))
void lIIIIIIll(struct IIlII*llIlIll,gfp_t IlIIl);
#endif
void IIlIIIIIl(struct IIlII*llIlIll,gfp_t IlIIl);void IllIlIIlI(struct IIlII*
llIlIll,gfp_t IlIIl);
#if KERNEL_GT_EQ((0x736+4100-0x1738),(0x139b+2535-0x1d7c),(0x1330+4975-0x2680))
void lllllIlII(struct IIlII*llIlIll,gfp_t IlIIl);
#endif
void IIlIlllII(struct IIlII*llIlIll,gfp_t IlIIl);void IIIllIlll(struct IIlII*
llIlIll,gfp_t IlIIl);void lIIIIIIII(struct IIlII*llIlIll,gfp_t IlIIl);void 
IIlllIlIl(struct IIlII*llIlIll,gfp_t IlIIl);void lIlIIllll(struct IIlII*llIlIll,
gfp_t IlIIl);void IllllIIIl(struct IIlII*llIlIll,gfp_t IlIIl);void llIIlllIl(
struct IIlII*llIlIll,gfp_t IlIIl);void lIlIllIll(struct IIlII*llIlIll,gfp_t 
IlIIl);void IllllllII(struct IIlII*llIlIll,gfp_t IlIIl);void lIllllIIl(struct 
IIlII*lIlII,int status,gfp_t IlIIl);void lIIlllIl(struct IIlII*lIlII,int status,
gfp_t IlIIl);void lIlIIIIlI(struct IIlII*lIlII,int status,gfp_t IlIIl);void 
llllIIIlI(struct IIlII*lIlII,int status,gfp_t IlIIl);void llIIIlIII(struct IIlII
*lIlII,int status,gfp_t IlIIl);void IlIlIllII(struct IIlII*lIlII,int status,
gfp_t IlIIl);void llIlIIIll(struct IIlII*lIlII,int status,gfp_t IlIIl);void 
IllllIIlI(struct IIlII*lIlII,int status,gfp_t IlIIl);void IlIlIIII(struct IIlII*
lIlII,int status,gfp_t IlIIl);void lllIIII(struct IIlII*lIlII,int status,gfp_t 
IlIIl);void llIIlIll(struct IIlII*lIlII,int status,gfp_t IlIIl);void lIIIIlII(
struct IIlII*lIlII,int status,gfp_t IlIIl);
#if KERNEL_LT((0x91c+1302-0xe30),(0xae4+4158-0x1b1c),(0xcc8+4212-0x1d29))
void IIlIIllI(struct urb*lIlll,struct pt_regs*IIlllIl);void lllIlIll(struct urb*
lIlll,struct pt_regs*IIlllIl);void IlIllllI(struct urb*lIlll,struct pt_regs*
IIlllIl);void lIllIlIl(struct urb*lIlll,struct pt_regs*IIlllIl);void IlIIIlllI(
struct urb*lIlll,struct pt_regs*IIlllIl);static void lIIlIIlII(struct urb*lIlll,
struct pt_regs*IIlllIl);static void IIIIlllI(struct urb*lIlll,struct pt_regs*
IIlllIl);static void IIIlIIllI(struct urb*lIlll,struct pt_regs*IIlllIl);
#else
void IIlIIllI(struct urb*lIlll);void lllIlIll(struct urb*lIlll);void IlIllllI(
struct urb*lIlll);void lIllIlIl(struct urb*lIlll);void IlIIIlllI(struct urb*
lIlll);static void lIIlIIlII(struct urb*lIlll);static void IIIIlllI(struct urb*
lIlll);static void IIIlIIllI(struct urb*lIlll);
#endif
void IllIlIIIl(struct lllIlI*llllI);void lllIlIlII(struct lllIlI*llllI);int 
lIlIIIIl(struct llIII*IlIlI);int IlIIIIlIl(struct IIlII*lIlII,gfp_t IlIIl);int 
lIllIIlIl(struct llIII*IlIlI,lllIII lllIl);void llIlIIIl(struct llIII*IlIlI);
void lllIIlII(struct llIII*IlIlI,int llIlIlI,int llIIIIlI);void IIIlIIIll(struct
 IIIllI*lIIII,int status,gfp_t IlIIl);void lllllIIll(struct IIIllI*lIIII,int 
status,gfp_t IlIIl);void lIIlIllI(struct IIIllI*lIIII,int status,gfp_t IlIIl);
void lIlIIlll(struct IIIllI*lIIII);void lIllIIII(struct IIIllI*lIIII);void 
lIIlIllIl(struct IIIllI*lIIII,struct lllllIlI*IllIlll);void lIIIIlIlll(struct 
kref*IIIIllI);void IIllIIllI(struct IIIllI*lIIII);struct IIIllI*llllllllI(struct
 llIII*IlIlI,gfp_t IlIIl);int IIlIIlIII(struct IIlII*lIlII);int llIlIllll(struct
 IIlII*lIlII);int lIIlIllll(struct IIlII*lIlII);int IlllllIIl(struct IIIllI*
lIIII);static inline void IlIllIIII(struct IIIllI*lIIII,gfp_t IlIIl);static 
inline void lllIlIIII(struct IIIllI*lIIII,gfp_t IlIIl);static inline void 
llIIllIII(struct IIIllI*lIIII,gfp_t IlIIl);static inline void IllIllIl(struct 
IIIllI*lIIII);static inline void IIIIlIl(struct IIIllI*lIIII);void IlIlllIl(
struct llIII*IlIlI,lllIII lllIl);struct IIlII*llIIllII(struct llIII*IlIlI,lllIII
 lllIl);static struct IlIllIIl llIIIlllI[]={{"\x74\x79\x70\x65",
"\x73\x74\x75\x62",NULL},{"\x64\x65\x76",NULL,IllIlllll},{
"\x73\x75\x70\x70\x72\x65\x73\x73",NULL,lIIlIlllI},{NULL,NULL,NULL},};int 
lIlllllIl(struct llIII*IlIlI){struct IIIIII*lllll;lllll=IIIlIll(sizeof(*lllll),
GFP_KERNEL);if(lllll){mutex_init(&lllll->mutex);lllll->context=IlIlI;lllll->
llllll=-(0x17eb+3591-0x25f1);lllll->ops.open=IlIIlIIII;lllll->ops.release=
IlIIlIlII;lllll->ops.poll=IIIllIIlI;lllll->ops.unlocked_ioctl=IllllIlII;
#ifdef CONFIG_COMPAT
lllll->ops.compat_ioctl=IllIIIIIl;
#endif
lllll->ops.IIIllIIl=llllIIlll;lllll->ops.lIIllIII=lIIIllIII;lllll->llllIlII=
llIIIlllI;IlIlI->lllll=lllll;return(0x29a+2080-0xaba);}return-ENOMEM;}void 
IlIIIllII(struct llIII*IlIlI){if(IlIlI->lllll){IllllllIl(IlIlI);IlIIIl(IlIlI->
lllll);IlIlI->lllll=NULL;}}int IIlllIlll(struct llIII*IlIlI){return lIIIIllI(
IlIlI->lllll,(0x9bd+5892-0x20bf),-(0x1037+3090-0x1c48));}void IllllllIl(struct 
llIII*IlIlI){IIIIlIII(IlIlI->lllll);}int llIlIllIl(struct llIII*IlIlI,void 
__user*IIIIl){int IIIll=(0x1a4d+2008-0x2225);unsigned long flags;struct IIlII*
lIlII;lllII IlIIlIIll;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x2b\x2b" "\n"
);
#if KERNEL_GT_EQ((0x69a+7586-0x2437),(0x298+493-0x485),(0x1016+2599-0x1a3d))
if(!access_ok(IIIIl,sizeof(llIlll)))
#else
if(!access_ok(VERIFY_READ,IIIIl,sizeof(llIlll)))
#endif
{IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x6d\x65\x6d\x6f\x72\x79\x20\x61\x63\x63\x65\x73\x73\x20\x63\x68\x65\x63\x6b\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return-EINVAL;}
if(get_user(IlIIlIIll,&((llIlll*)IIIIl)->lIlIl)<(0x129c+305-0x13cd)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x61\x64\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72" "\n"
);return-EFAULT;}lIlII=NULL;spin_lock_irqsave(&IlIlI->lllIIll,flags);if(!
list_empty(&IlIlI->IIIIIIIl)){lIlII=list_entry(IlIlI->IIIIIIIl.next,struct IIlII
,lIlIIl);list_del_init(&lIlII->lIlIIl);}spin_unlock_irqrestore(&IlIlI->lllIIll,
flags);if(lIlII){IIIll=IlllIIlII(lIlII,IIIIl,IlIIlIIll);if(IIIll==-EMSGSIZE){




spin_lock_irqsave(&IlIlI->lllIIll,flags);list_add(&lIlII->lIlIIl,&IlIlI->
IIIIIIIl);spin_unlock_irqrestore(&IlIlI->lllIIll,flags);
wake_up(&IlIlI->IIIIlI);}else{IIllIIl(lIlII);}}else{IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x6e\x6f\x20\x6d\x6f\x72\x65\x20\x64\x61\x74\x61" "\n"
);IIIll=-ENODATA;}IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67\x20\x25\x64" "\n"
,IIIll);return IIIll;}int IIlIIlIll(struct llIII*IlIlI,void __user*IIIIl){int 
IIIll;IllII IIlIl;struct IIlII*lIlII;llIlll IIIIllIl;size_t lIIlIIII;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2b\x2b" "\n"
);if(unlikely(lIIIlllIl(IlIlI))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x64\x65\x76\x69\x63\x65\x20\x6f\x66\x66\x6c\x69\x6e\x65" "\n"
);return-ENODEV;}if(copy_from_user(&IIIIllIl,IIIIl,sizeof(IIIIllIl))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x63\x6f\x70\x79\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return-EFAULT;}lIIlIIII=IIIIllIl.lIlIl;if(IIIIllIl.lIIlIII==IIIllIIIl){
lIIlIIII-=sizeof(llIlll);IIIIl+=sizeof(llIlll);}while(lIIlIIII>
(0x1747+871-0x1aae)){lIlII=IlIIllIll(IlIlI,IIIIl,lIIlIIII);if(!lIlII){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x63\x61\x6e\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x72\x65\x71\x75\x65\x73\x74" "\n"
);return-ENOMEM;}IIlIl=(IllII)(lIlII+(0x4dd+5193-0x1925));if(lIIlIIII<IIlIl->
IIIlI.lIlIl){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65" "\n"
);return-EINVAL;}lIIlIIII-=IIlIl->IIIlI.lIlIl;IIIIl+=IIlIl->IIIlI.lIlIl;lllIlIl(
IIlIl);IIIll=IllIIIlII(lIlII);if(likely(IIIll>(0x15a1+175-0x1650))){
IlIIlllI(lIlII,GFP_KERNEL);}else if(IIIll==(0x124+2923-0xc8f)){
}else if(lIlII->llIlIlI)
{IIllIIl(lIlII);}else{IIIlllIll(lIlII,IIIll,GFP_KERNEL);IIIIIl(lIlII,IIIll);}}
IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x30" "\n"
);return(0x10cf+5244-0x254b);}int IlllIlIII(struct llIII*IlIlI){unsigned long 
flags;struct list_head IlIIlII;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x72\x61\x69\x6e\x5f\x72\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x2b\x2b" "\n"
);






IIlIIIII(IlIlI,NULL,(0x1c65+700-0x1f20),(0x1419+4455-0x257f));

INIT_LIST_HEAD(&IlIIlII);spin_lock_irqsave(&IlIlI->lllIIll,flags);
list_splice_init(&IlIlI->IIIIIIIl,&IlIIlII);spin_unlock_irqrestore(&IlIlI->
lllIIll,flags);while(!list_empty(&IlIIlII)){struct IIlII*lIIIIlIlI;lIIIIlIlI=
list_entry(IlIIlII.next,struct IIlII,lIlIIl);list_del(&lIIIIlIlI->lIlIIl);
IIllIIl(lIIIIlIlI);}IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x72\x61\x69\x6e\x5f\x72\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x2d\x2d" "\n"
);return(0x182a+2988-0x23d6);}int IlllIllII(struct llIII*IlIlI,struct IIlllIIII 
__user*ioctl){lllII lllllI;lllII llIllIl;if(get_user(lllllI,&ioctl->llIllI.
IIllIll)<(0xc17+6360-0x24ef))return-EFAULT;if(lllllI!=sizeof(struct IIlllIIII))
return-EINVAL;if(get_user(llIllIl,&ioctl->llIllIl)<(0x1d2+6602-0x1b9c))return-
EFAULT;if(llIllIl>=IIIIlllIl)return-EINVAL;IlIlI->lIIlIIlI=llIllIl;return
(0x1581+3828-0x2475);}int llllllIII(struct llIII*IlIlI,struct IlIlllIll __user*
ioctl){lllII lllllI;lllII llIIlIII;if(get_user(lllllI,&ioctl->llIllI.IIllIll)<
(0xed6+4305-0x1fa7))return-EFAULT;if(lllllI!=sizeof(struct IlIlllIll))return-
EINVAL;if(get_user(llIIlIII,&ioctl->llIIlIII)<(0xef2+3357-0x1c0f))return-EFAULT;
IlIlI->llIIlIII=llIIlIII;return(0x4bc+3574-0x12b2);}
int lIIIIllIl(struct llIII*IlIlI,struct IlIllIllI __user*ioctl){lllII lllllI;if(
get_user(lllllI,&ioctl->llIllI.IIllIll)<(0x1c4c+950-0x2002))return-EFAULT;if(
lllllI!=sizeof(struct IlIllIllI))return-EINVAL;lllllIllI(IlIlI,IlIlI->lIIlIIlI);
return(0x8c3+3636-0x16f7);}int lIlIIlIII(struct llIII*IlIlI,struct lIIIIllll 
__user*ioctl){lllII lllllI;lllII lIlIlIIl;if(get_user(lllllI,&ioctl->llIllI.
IIllIll)<(0xf5f+4920-0x2297))return-EFAULT;if(lllllI!=sizeof(*ioctl))return-
EINVAL;lIlIlIIl=IlIlI->IIIlIlIl;if(put_user(lIlIlIIl,&ioctl->lIlIlIIl)<
(0x1259+642-0x14db))return-EFAULT;return(0x3c2+3952-0x1332);}long lIllIIIlI(void
*context,unsigned int lIIlII,void __user*IllIII){struct llIII*IlIlI=context;
ssize_t IIIll=(0xcc7+1591-0x12fe);IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2b\x2b\x20\x63\x6d\x64\x3d\x25\x64\x20\x61\x72\x67\x3d\x30\x78\x25\x70" "\n"
,lIIlII,IllIII);switch(lIIlII){case IlllIllll:IIIll=llIlIllIl(IlIlI,IllIII);
break;case IIIIlllII:IIIll=IIlIIlIll(IlIlI,IllIII);break;case IIIlIIIII:IIIll=
IlllIlIII(IlIlI);break;case IIIlIIlIl:IIIll=IlllIllII(IlIlI,IllIII);break;case 
lllIIlIll:IIIll=llllllIII(IlIlI,IllIII);break;case lIllIllII:IIIll=lIIIIllIl(
IlIlI,IllIII);break;case IIIllIIll:IIIll=lIlIIlIII(IlIlI,IllIII);break;default:
IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x6f\x63\x74\x6c" "\n"
);IIIll=-EINVAL;break;}IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IIIll);return IIIll;}long IllllIlII(void*context,unsigned int 
lIIlII,unsigned long IllIII){return lIllIIIlI(context,lIIlII,(void __user*)
IllIII);}
#ifdef CONFIG_COMPAT
long IllIIIIIl(void*context,unsigned int lIIlII,unsigned long IllIII){return 
lIllIIIlI(context,lIIlII,compat_ptr(IllIII));}
#endif


int IlIIlIIII(void*context,int lIlIIll){int IIIll=(0x417+35-0x43a);
IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x6f\x70\x65\x6e\x3a\x20\x2b\x2b\x20\x25\x64" "\n"
,lIlIIll);
IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x6f\x70\x65\x6e\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}

int IlIIlIlII(void*context,int lIlIIll){struct llIII*IlIlI=context;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x72\x65\x6c\x65\x61\x73\x65\x20\x25\x64" "\n"
,lIlIIll);if(lIlIIll==(0x1176+782-0x1484)){

IlllIlIII(IlIlI);if(IlIlI->IIIlIlIl){lllllIllI(IlIlI,IlIlI->lIIlIIlI);}

}return(0x6b9+3247-0x1368);}void llllIIlll(void*context){struct llIII*IlIlI=
context;IlIIlIII(IlIlI);}void lIIIllIII(void*context){struct llIII*IlIlI=context
;IlIllIl(IlIlI);}unsigned int IIIllIIlI(void*context,struct file*lllIll,
poll_table*IIIIlI){struct llIII*IlIlI=context;int lIIlllll;unsigned long flags;
poll_wait(lllIll,&IlIlI->IIIIlI,IIIIlI);spin_lock_irqsave(&IlIlI->lllIIll,flags)
;lIIlllll=list_empty(&IlIlI->IIIIIIIl);spin_unlock_irqrestore(&IlIlI->lllIIll,
flags);if(!lIIlllll){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x70\x6f\x6c\x6c\x3a\x20\x71\x75\x65\x75\x65\x20\x6e\x6f\x74\x20\x65\x6d\x70\x74\x79" "\n"
);return((POLLOUT|POLLWRNORM)|(POLLIN|POLLRDNORM));}return(POLLOUT|POLLWRNORM);}
int IllIIIlII(struct IIlII*lIlII){unsigned long flags;struct llIII*IlIlI=lIlII->
IlIlI;
if(lIlII->IIIlIIl.llIlIIlI==(0x136c+2617-0x1da5)){
spin_lock_irqsave(&IlIlI->lIlllI,flags);list_add_tail(&lIlII->lIlIIl,&IlIlI->
IIlllII);spin_unlock_irqrestore(&IlIlI->lIlllI,flags);return(0x4df+1337-0xa17);}
else{
struct IlIlIlII*IIlIlI,*lllIIlIl;struct IIlII*lIlIIIlll,*IIllIllI;




if(lIlII->IIIlIIl.lIIlIIlll){IIlIlI=IIIlIll(sizeof(*IIlIlI),GFP_KERNEL);
if(IIlIlI==NULL){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x55\x4e\x52\x42" "\n"
);return-ENOMEM;}IIlIlI->lllIl=lIlII->lllIl;spin_lock_irqsave(&IlIlI->lIlllI,
flags);list_add_tail(&IIlIlI->lIlIII,&IlIlI->IIllllII);list_add_tail(&lIlII->
lIlIIl,&IlIlI->IIlllII);spin_unlock_irqrestore(&IlIlI->lIlllI,flags);return
(0x1027+2027-0x1811);}







spin_lock_irqsave(&IlIlI->lIlllI,flags);

IIlIlI=NULL;list_for_each_entry(lllIIlIl,&IlIlI->IIllllII,lIlIII){if(lllIIlIl->
lllIl==lIlII->lllIl){IIlIlI=lllIIlIl;break;}}


if(IIlIlI==NULL){spin_unlock_irqrestore(&IlIlI->lIlllI,flags);lIlII->llIlIlI=
(0xc22+1547-0x122c);return-ECONNRESET;}


lIlIIIlll=NULL;list_for_each_entry(IIllIllI,&IlIlI->IIlllII,lIlIIl){if(IIllIllI
->lllIl==lIlII->lllIl&&IIllIllI->IIIlIIl.llIlIIlI){lIlIIIlll=IIllIllI;break;}}


if(lIlIIIlll==NULL){
if(IIlIlI->IlIIIlIII){atomic_xchg(&lIlII->state,lIIllll);IIlIlI->IlIIIlIII=
(0xada+5723-0x2135);}switch(IIlIlI->llIlllIlI){case IIIIlIIl:
spin_unlock_irqrestore(&IlIlI->lIlllI,flags);lIlII->llIlIlI=(0xa16+2564-0x1419);
return-ECONNRESET;case IIlllllII:list_add_tail(&lIlII->lIlIIl,&IlIlI->IIlllII);
spin_unlock_irqrestore(&IlIlI->lIlllI,flags);return(0x2175+885-0x24e9);case 
IlllIIIlI:atomic_xchg(&lIlII->state,lIIllll);list_add_tail(&lIlII->lIlIIl,&IlIlI
->IIlllII);spin_unlock_irqrestore(&IlIlI->lIlllI,flags);return-ECONNRESET;case 
lIIlllIIl:IIlIlI->llIlllIlI=lIlII->IIIlIIl.lIIllIllI;spin_unlock_irqrestore(&
IlIlI->lIlllI,flags);lIlII->llIlIlI=(0x1b9d+2798-0x268a);return-ECONNRESET;}}





list_add_tail(&lIlII->lIlIIl,&IlIlI->IIlllII);spin_unlock_irqrestore(&IlIlI->
lIlllI,flags);return(0x2174+44-0x21a0);}}void IlIIlllI(struct IIlII*lIlII,gfp_t 
IlIIl){IllII IIlIl=(IllII)(lIlII+(0xaff+1125-0xf63));if(unlikely(atomic_cmpxchg(
&lIlII->state,IIIIIIlI,IIIIIlI)!=IIIIIIlI)){IIIlllIll(lIlII,-ECONNRESET,IlIIl);
IIIIIl(lIlII,-ECONNRESET);return;}lIlII->IlIlI->IIIlIlIl=(0xf37+185-0xfef);
switch(IIlIl->IIIlI.lIIlIII){case lIlIllIl:lllIIllll(lIlII,IlIIl);break;case 
IllIllII:llIIlIIII(lIlII,IlIIl);break;case llIlllIl:lIllllIlI(lIlII,IlIIl);break
;case IlllIIIl:IIlIIIlIl(lIlII,IlIIl);break;case IIlIlIll:if(IlIIIIlIl(lIlII,
IlIIl)>=(0x190d+3535-0x26dc)){break;}lllIlIIlI(lIlII,IlIIl);break;case llIIIIIl:
IIlIIIIIl(lIlII,IlIIl);break;case IllllllI:IIlIlllII(lIlII,IlIIl);break;case 
llIIllll:IIlllIlIl(lIlII,IlIIl);break;case IIlIllII:lIlIIllll(lIlII,IlIIl);break
;case llIIlIlI:IllllIIIl(lIlII,IlIIl);break;case lIllIIIl:llIIlllIl(lIlII,IlIIl)
;break;case lIlIlIll:lIlIllIll(lIlII,IlIIl);break;case llllIIlI:IllllllII(lIlII,
IlIIl);break;}}void IIIlllIll(struct IIlII*lIlII,int status,gfp_t IlIIl){IllII 
IIlIl=(IllII)(lIlII+(0x69+130-0xea));switch(IIlIl->IIIlI.lIIlIII){case lIlIllIl:
lIllllIIl(lIlII,status,IlIIl);break;case IllIllII:lIIlllIl(lIlII,status,IlIIl);
break;case llIlllIl:llIIIlIII(lIlII,status,IlIIl);break;case IlllIIIl:IlIlIIII(
lIlII,status,IlIIl);break;case IIlIlIll:lllIIII(lIlII,status,IlIIl);break;case 
llIIIIIl:llIIlIll(lIlII,status,IlIIl);break;case IllllllI:lIIIIlII(lIlII,status,
IlIIl);break;case llIIllll:lIlIIIIlI(lIlII,status,IlIIl);break;case IIlIllII:
llllIIIlI(lIlII,status,IlIIl);break;case llIIlIlI:IlIlIllII(lIlII,status,IlIIl);
break;case lIllIIIl:llIlIIIll(lIlII,status,IlIIl);break;case lIlIlIll:
break;case llllIIlI:IllllIIlI(lIlII,status,IlIIl);break;}}void lllIIllll(struct 
IIlII*lIlII,gfp_t IlIIl){int IIIll=(0x107b+179-0x112e);struct usb_ctrlrequest*
IlIIIIl;IllII IIlIl=(IllII)(lIlII+(0x132a+1238-0x17ff));do{struct urb*lIlll;
lIlll=lIlllIl((0x18a3+1577-0x1ecc),IlIIl);if(unlikely(!lIlll)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}lIlII->Illlll.lIlll=lIlll;IlIIIIl=lIlIlll(sizeof(*IlIIIIl
),IlIIl);if(unlikely(!IlIIIIl)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}IlIIIIl->bRequest=USB_REQ_GET_DESCRIPTOR;IlIIIIl->
bRequestType=USB_DIR_IN+((IIlIl->lIlIll.IIllIlI&(0x33c+1522-0x92b))<<
(0x69a+460-0x861))+(IIlIl->lIlIll.IlIIIIll&(0x7b1+6997-0x22e7));IlIIIIl->wValue=
cpu_to_le16((IIlIl->lIlIll.lllIlIII<<(0x9b3+4605-0x1ba8))+IIlIl->lIlIll.llIllIII
);IlIIIIl->wIndex=cpu_to_le16(IIlIl->lIlIll.IIIIIlII);IlIIIIl->wLength=
cpu_to_le16(IIlIl->lIlIll.IIllI);usb_fill_control_urb(lIlll,lIlII->IlIlI->IIlll,
usb_rcvctrlpipe(lIlII->IlIlI->IIlll,(0xbfb+1992-0x13c3)),(unsigned char*)IlIIIIl
,lIlII->Illlll.IllIl,IIlIl->lIlIll.IIllI,IIlIIllI,lIlII);if(atomic_cmpxchg(&
lIlII->state,IIIIIlI,llIlIII)!=IIIIIlI){IIIll=-ECONNRESET;break;}IIIll=
usb_submit_urb(lIlll,IlIIl);if(unlikely(IIIll<(0x360+3877-0x1285))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);break;}}while((0x5ff+4031-0x15be));if(unlikely(IIIll<(0x20b+5985-0x196c)
)){lIllllIIl(lIlII,IIIll,IlIIl);IIIIIl(lIlII,IIIll);}}void lIllllIIl(struct 
IIlII*lIlII,int status,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0xeea+4933-0x222e));IIlIl->lIlIll.IIllI=(0x19c+9486-0x26aa);IIlIl->IIIlI.lIlIl=
sizeof(IIlIl->lIlIll)+IIlIl->lIlIll.IIllI;IIlIl->IIIlI.Status=status;}void 
llIIlIIII(struct IIlII*lIlII,gfp_t IlIIl){int i;int IIIll=(0x5a1+125-0x61e);
IllII IIlIl=(IllII)(lIlII+(0xb1a+4814-0x1de7));do
{
IIlIl->IIIlI.Status=(0xd38+5694-0x2376);
IIlIIIII(lIlII->IlIlI,lIlII,(0xb9f+5190-0x1fe5),(0x724+3765-0x15d9));if(IIlIl->
IlIlIll.lllllIII==(0xab+895-0x42a)){IIIll=(0x113b+5459-0x268e);break;}
usb_lock_device(lIlII->IlIlI->IIlll);



if(lIlII->IlIlI->IIlll->actconfig==NULL||lIlII->IlIlI->IIlll->actconfig->desc.
bConfigurationValue!=IIlIl->IlIlIll.lllllIII){usb_unlock_device(lIlII->IlIlI->
IIlll);
IIIll=-EINPROGRESS;break;}IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x73\x65\x6c\x65\x63\x74\x65\x64" "\n"
);
lIlIIIIl(lIlII->IlIlI);for(i=(0x4d5+4961-0x1836);i<IIlIl->IlIlIll.IIlIlIlI;i++){
struct usb_interface*IIIIll;struct usb_host_interface*lIIIIII;IIIIll=
usb_ifnum_to_if(lIlII->IlIlI->IIlll,IIlIl->IlIlIll.lIIIIIl[i].IllllII);if(!
IIIIll){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIlIl->IlIlIll.lIIIIIl[i].IllllII);continue;}lIIIIII=usb_altnum_to_altsetting(
IIIIll,IIlIl->IlIlIll.lIIIIIl[i].IlIlllI);if(!lIIIIII){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67\x20\x25\x64\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIlIl->IlIlIll.lIIIIIl[i].IllllII,IIlIl->IlIlIll.lIIIIIl[i].IlIlllI);continue;}
if(IIIIll->cur_altsetting){if(IIIIll->num_altsetting==(0x807+183-0x8bd)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x68\x61\x73\x20\x6f\x6e\x6c\x79\x20\x6f\x6e\x65\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67" "\n"
,IIlIl->IlIlIll.lIIIIIl[i].IllllII);continue;}if(lIIIIII->desc.bAlternateSetting
==IIIIll->cur_altsetting->desc.bAlternateSetting){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x73\x65\x74" "\n"
,IIlIl->IlIlIll.lIIIIIl[i].IllllII);continue;}}IIIll=usb_set_interface(lIlII->
IlIlI->IIlll,IIlIl->IlIlIll.lIIIIIl[i].IllllII,IIlIl->IlIlIll.lIIIIIl[i].IlIlllI
);if(IIIll!=(0x6a1+14-0x6af)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x75\x73\x62\x5f\x73\x65\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);IIIll=(0x3f8+765-0x6f5);
}if(IIIIll->cur_altsetting){int IlIIII;int pipe;for(IlIIII=(0x21c7+933-0x256c);
IlIIII<IIIIll->cur_altsetting->desc.bNumEndpoints;IlIIII++){if(IIIIll->
cur_altsetting->endpoint[IlIIII].desc.bEndpointAddress&(0x103+9474-0x2585))pipe=
usb_rcvisocpipe(lIlII->IlIlI->IIlll,IIIIll->cur_altsetting->endpoint[IlIIII].
desc.bEndpointAddress&(0x18e7+2939-0x2453));else pipe=usb_sndisocpipe(lIlII->
IlIlI->IIlll,IIIIll->cur_altsetting->endpoint[IlIIII].desc.bEndpointAddress&
(0xff+7707-0x1f0b));IIIllIll(lIlII->IlIlI,pipe,(0x1f49+199-0x2010));}}}
usb_unlock_device(lIlII->IlIlI->IIlll);}while((0x203d+1392-0x25ad));if(unlikely(
IIIll<(0x1aeb+84-0x1b3f))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);lIIlllIl(lIlII,IIIll,IlIIl);}IIIIIl(lIlII,IIIll);}void lIIlllIl(struct 
IIlII*lIlII,int status,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0x1282+1173-0x1716));IIlIl->IIIlI.Status=status;}void IIlllIlIl(struct IIlII*
lIlII,gfp_t IlIIl){int IIIll=(0x308+7706-0x2122);IllII IIlIl=(IllII)(lIlII+
(0x43d+2138-0xc96));
IIlIl->IIIlI.Status=(0x29c+21-0x2b1);if(lIlII->IlIlI->Illllll&&(lIlII->endpoint
==lIlII->IlIlI->IIlllIlI||lIlII->endpoint==lIlII->IlIlI->lIlIIlIl)){llIlIIIl(
lIlII->IlIlI);}do
{
#if KERNEL_GT_EQ((0xdf9+2190-0x1685),(0x9af+1779-0x109c),(0x916+2023-0x10f3))
int pipe=(0xc70+1433-0x1209),IlllllIl;struct usb_host_endpoint*ep;ep=(IIlIl->
IIlIIll.Flags&lIllII)?lIlII->IlIlI->IIlll->ep_in[IIlIl->IIlIIll.Endpoint]:lIlII
->IlIlI->IIlll->ep_out[IIlIl->IIlIIll.Endpoint];if(ep){switch(ep->desc.
bmAttributes&USB_ENDPOINT_XFERTYPE_MASK){case USB_ENDPOINT_XFER_ISOC:pipe=(IIlIl
->IIlIIll.Flags&lIllII)?usb_rcvisocpipe(lIlII->IlIlI->IIlll,IIlIl->IIlIIll.
Endpoint):usb_sndisocpipe(lIlII->IlIlI->IIlll,IIlIl->IIlIIll.Endpoint);break;
case USB_ENDPOINT_XFER_BULK:pipe=(IIlIl->IIlIIll.Flags&lIllII)?usb_rcvbulkpipe(
lIlII->IlIlI->IIlll,IIlIl->IIlIIll.Endpoint):usb_sndbulkpipe(lIlII->IlIlI->IIlll
,IIlIl->IIlIIll.Endpoint);break;case USB_ENDPOINT_XFER_INT:pipe=(IIlIl->IIlIIll.
Flags&lIllII)?usb_rcvintpipe(lIlII->IlIlI->IIlll,IIlIl->IIlIIll.Endpoint):
usb_sndintpipe(lIlII->IlIlI->IIlll,IIlIl->IIlIIll.Endpoint);break;case 
USB_ENDPOINT_XFER_CONTROL:default:break;}}
#endif
if(ep&&(ep->desc.bmAttributes&USB_ENDPOINT_XFERTYPE_MASK)==
USB_ENDPOINT_XFER_ISOC){IIIllIll(lIlII->IlIlI,pipe,(0x498+6728-0x1ee0));IlllllIl
=usb_pipeendpoint(pipe);
#if KERNEL_GT_EQ((0x109c+5030-0x2440),(0x54d+6009-0x1cc0),(0x90b+4885-0x1c02))
if(usb_pipein(pipe))IlllllIl|=USB_DIR_IN;usb_reset_endpoint(lIlII->IlIlI->IIlll,
IlllllIl);
#else
usb_settoggle(lIlII->IlIlI->IIlll,IlllllIl,usb_pipeout(pipe),(0x1c7+4788-0x147b)
);
#endif
IIIll=(0x362+7827-0x21f5);}else{IIIll=usb_clear_halt(lIlII->IlIlI->IIlll,pipe);}
}while((0x453+1607-0xa9a));if(unlikely(IIIll<(0x1000+4313-0x20d9))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x63\x6c\x65\x61\x72\x73\x74\x61\x6c\x6c\x3a\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);lIlIIIIlI(lIlII,IIIll,IlIIl);}IIIIIl(lIlII,IIIll);}void lIlIIIIlI(struct
 IIlII*lIlII,int status,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0x2d9+8011-0x2223));IIlIl->IIIlI.Status=status;}void lIlIIllll(struct IIlII*
lIlII,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+(0x170c+3149-0x2358));IIlIl->IIIlI.
Status=(0x11d5+3688-0x203d);IIlIl->llIlIllI.lIIllIll=
usb_get_current_frame_number(lIlII->IlIlI->IIlll);IIIIIl(lIlII,
(0x460+5652-0x1a74));}void llllIIIlI(struct IIlII*lIlII,int status,gfp_t IlIIl){
IllII IIlIl=(IllII)(lIlII+(0xf42+782-0x124f));IIlIl->llIlIllI.lIIllIll=
(0xee7+3646-0x1d25);IIlIl->IIIlI.Status=status;}void lIllllIlI(struct IIlII*
lIlII,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+(0x15f2+2307-0x1ef4));struct 
usb_interface*IIIIll;struct usb_host_interface*lIIIIII;
IIlIl->IIIlI.Status=(0x790+7935-0x268f);usb_lock_device(lIlII->IlIlI->IIlll);do{
IIIIll=usb_ifnum_to_if(lIlII->IlIlI->IIlll,IIlIl->lIIlIlI.IllllII);if(!IIIIll){
IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIlIl->lIIlIlI.IlIlllI);break;}


IIlIIIlII(lIlII->IlIlI,IIIIll,lIlII,(0xb26+5605-0x210b));lIIIIII=
usb_altnum_to_altsetting(IIIIll,IIlIl->lIIlIlI.IlIlllI);if(!lIIIIII){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67\x20\x25\x64\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIlIl->lIIlIlI.IllllII,IIlIl->lIIlIlI.IlIlllI);break;}if(IIIIll->cur_altsetting
){if(IIIIll->num_altsetting==(0xd43+4838-0x2028)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x68\x61\x73\x20\x6f\x6e\x6c\x79\x20\x6f\x6e\x65\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67" "\n"
,IIlIl->lIIlIlI.IllllII);break;}if(lIIIIII->desc.bAlternateSetting==IIIIll->
cur_altsetting->desc.bAlternateSetting){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x73\x65\x74" "\n"
,IIlIl->lIIlIlI.IllllII);break;}}IIlIl->IIIlI.Status=usb_set_interface(lIlII->
IlIlI->IIlll,IIlIl->lIIlIlI.IllllII,IIlIl->lIIlIlI.IlIlllI);if(IIlIl->IIIlI.
Status!=(0x1a30+1963-0x21db)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x75\x73\x62\x5f\x73\x65\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIlIl->IIIlI.Status);}if(IIIIll->cur_altsetting){int IlIIII;int pipe;for(IlIIII
=(0x9a7+4800-0x1c67);IlIIII<IIIIll->cur_altsetting->desc.bNumEndpoints;IlIIII++)
{if(IIIIll->cur_altsetting->endpoint[IlIIII].desc.bEndpointAddress&
(0x67f+3840-0x14ff))pipe=usb_rcvisocpipe(lIlII->IlIlI->IIlll,IIIIll->
cur_altsetting->endpoint[IlIIII].desc.bEndpointAddress&(0x8fc+3534-0x16bb));else
 pipe=usb_sndisocpipe(lIlII->IlIlI->IIlll,IIIIll->cur_altsetting->endpoint[
IlIIII].desc.bEndpointAddress&(0x862+314-0x98d));IIIllIll(lIlII->IlIlI,pipe,
(0x1611+2920-0x2179));}}}while((0x2ff+1386-0x869));if(!lIlII->IlIlI->Illllll)
{
lIlIIIIl(lIlII->IlIlI);}usb_unlock_device(lIlII->IlIlI->IIlll);IIIIIl(lIlII,
(0xb1c+737-0xdfd));}void llIIIlIII(struct IIlII*lIlII,int status,gfp_t IlIIl){
IllII IIlIl=(IllII)(lIlII+(0x22f+2655-0xc8d));IIlIl->IIIlI.Status=status;}void 
IllllIIIl(struct IIlII*lIlII,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0x19d0+2784-0x24af));enum usb_device_state state;usb_lock_device(lIlII->IlIlI->
IIlll);state=lIlII->IlIlI->IIlll->state;usb_unlock_device(lIlII->IlIlI->IIlll);
IIlIl->IIIlI.Status=(0x96a+7429-0x266f);IIlIl->llIlIIll.lllIIIIl=
(0x881+448-0xa41);if(state!=USB_STATE_SUSPENDED&&state!=USB_STATE_NOTATTACHED){
IIlIl->llIlIIll.lllIIIIl|=IIllllllI;if(state==USB_STATE_CONFIGURED)IIlIl->
llIlIIll.lllIIIIl|=lllIlllIl;}IIIIIl(lIlII,(0x1e2+8468-0x22f6));}void IlIlIllII(
struct IIlII*lIlII,int status,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0xdab+3287-0x1a81));IIlIl->llIlIIll.lllIIIIl=(0x2f5+7714-0x2117);IIlIl->IIIlI.
Status=status;}void llIIlllIl(struct IIlII*lIlII,gfp_t IlIIl){IllII IIlIl=(IllII
)(lIlII+(0x4e3+6809-0x1f7b));IIlIl->IIIlI.Status=-(0x168+7998-0x20a5);if(lIlII->
IlIlI->Illllll)
llIlIIIl(lIlII->IlIlI);if(usb_lock_device_for_reset(lIlII->IlIlI->IIlll,NULL)>=
(0xf70+5340-0x244c)){
IIlIl->IIIlI.Status=usb_reset_device(lIlII->IlIlI->IIlll);usb_unlock_device(
lIlII->IlIlI->IIlll);}if(IIlIl->IIIlI.Status!=(0xc33+2677-0x16a8)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x72\x65\x73\x65\x74\x70\x6f\x72\x74\x3a\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIlIl->IIIlI.Status);}IIIIIl(lIlII,IIlIl->IIIlI.Status);}void llIlIIIll(struct 
IIlII*lIlII,int status,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0xd22+3157-0x1976));IIlIl->IIIlI.Status=status;}void lIlIllIll(struct IIlII*
lIlII,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+(0x1cdd+2328-0x25f4));IIlIl->IIIlI.
Status=(0x101+8538-0x225b);
IllIIllII(lIlII->IlIlI,lIlII->lllIl,lIlII);lIlII->llIlIlI=(0xb7c+6570-0x2525);
IIIIIl(lIlII,(0x665+5607-0x1c4c));}void IllllllII(struct IIlII*lIlII,gfp_t IlIIl
){IllII IIlIl=(IllII)(lIlII+(0x204b+495-0x2239));int endpoint;endpoint=IIlIl->
lIlIIllI.Endpoint;endpoint|=(IIlIl->lIlIIllI.Flags&lIllII)?(0x737+5992-0x1e1f):
(0x15ad+2825-0x20b6);IIlIl->IIIlI.Status=(0x11b6+1667-0x1839);

lIIIIIlII(lIlII->IlIlI,endpoint,lIlII);IIIIIl(lIlII,(0x2f8+2833-0xe09));}void 
IllllIIlI(struct IIlII*lIlII,int status,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0x14e2+1330-0x1a13));IIlIl->IIIlI.Status=status;}void IIlIIIlIl(struct IIlII*
lIlII,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+(0x19df+2463-0x237d));int IIIll=
(0x123+8436-0x2217);struct usb_ctrlrequest*IlIIIIl=NULL;do{struct urb*lIlll;int 
pipe;lIlll=lIlllIl((0x377+591-0x5c6),IlIIl);if(unlikely(!lIlll)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}lIlII->Illlll.lIlll=lIlll;IlIIIIl=lIlIlll(sizeof(*IlIIIIl
),IlIIl);if(!IlIIIIl){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}IlIIIIl->bRequestType=IIlIl->llIlII.IIllIlI;IlIIIIl->
bRequest=IIlIl->llIlII.IIlIIlII;IlIIIIl->wValue=cpu_to_le16(IIlIl->llIlII.
llllIllI);IlIIIIl->wIndex=cpu_to_le16(IIlIl->llIlII.IIlIllIlI);IlIIIIl->wLength=
cpu_to_le16(IIlIl->llIlII.IIllI);pipe=(IIlIl->llIlII.Flags&lIllII)?
usb_rcvctrlpipe(lIlII->IlIlI->IIlll,IIlIl->llIlII.Endpoint):usb_sndctrlpipe(
lIlII->IlIlI->IIlll,IIlIl->llIlII.Endpoint);usb_fill_control_urb(lIlll,lIlII->
IlIlI->IIlll,pipe,(unsigned char*)IlIIIIl,lIlII->Illlll.IllIl,IIlIl->llIlII.
IIllI,lllIlIll,lIlII);if(atomic_cmpxchg(&lIlII->state,IIIIIlI,llIlIII)!=IIIIIlI)
{IIIll=-ECONNRESET;break;}IIIll=usb_submit_urb(lIlll,IlIIl);if(unlikely(IIIll<
(0xb2d+516-0xd31))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);}}while((0x1a9+284-0x2c5));if(unlikely(IIIll<(0x879+6736-0x22c9))){
IlIlIIII(lIlII,IIIll,IlIIl);IIIIIl(lIlII,IIIll);}}void IlIlIIII(struct IIlII*
lIlII,int status,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+(0x1140+4421-0x2284));
IIlIl->llIlII.IIllI=(0x429+4501-0x15be);IIlIl->IIIlI.lIlIl=sizeof(IIlIl->llIlII)
;IIlIl->IIIlI.Status=status;}void lllIlIIlI(struct IIlII*lIlII,gfp_t IlIIl){
switch(lIlII->lIIIII){case lIllIll:lllIIIlII(lIlII,IlIIl);return;case IllIIlI:
IIllllIIl(lIlII,IlIIl);return;
#if KERNEL_GT_EQ((0x12f3+5046-0x26a7),(0xcdc+3551-0x1ab5),(0xb1f+1462-0x10b6))
case llIllII:lIIIIIIll(lIlII,IlIIl);return;
#endif
default:lllIIII(lIlII,-EINVAL,IlIIl);IIIIIl(lIlII,-EINVAL);return;}}void 
lllIIIlII(struct IIlII*lIlII,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0x1266+4326-0x234b));int IIIll=(0xf88+2073-0x17a1);do{struct urb*lIlll;int pipe
=(IIlIl->IlIll.Flags&lIllII)?usb_rcvbulkpipe(lIlII->IlIlI->IIlll,IIlIl->IlIll.
Endpoint):usb_sndbulkpipe(lIlII->IlIlI->IIlll,IIlIl->IlIll.Endpoint);lIlll=
lIlllIl((0x87f+522-0xa89),IlIIl);if(unlikely(!lIlll)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}lIlII->Illlll.lIlll=lIlll;usb_fill_bulk_urb(lIlll,lIlII->
IlIlI->IIlll,pipe,lIlII->Illlll.IllIl,IIlIl->IlIll.IIllI,IlIllllI,lIlII);if(
IIlIl->IlIll.Flags&lIllII){if((IIlIl->IlIll.Flags&lllllII)==(0x661+5074-0x1a33))
{lIlll->transfer_flags|=URB_SHORT_NOT_OK;}}if(unlikely(atomic_cmpxchg(&lIlII->
state,IIIIIlI,llIlIII)!=IIIIIlI)){IIIll=-ECONNRESET;break;}IIIll=usb_submit_urb(
lIlll,IlIIl);if(unlikely(IIIll<(0x294+1156-0x718))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x6f\x6c\x69\x64\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);}}while((0x7a0+732-0xa7c));if(unlikely(IIIll<(0x1e2f+1167-0x22be))){
lllIIII(lIlII,IIIll,IlIIl);IIIIIl(lIlII,IIIll);}}
#if KERNEL_GT_EQ((0x10a0+1291-0x15a9),(0x520+5320-0x19e2),(0x1372+3257-0x200c))
void lIIIIIIll(struct IIlII*lIlII,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0x372+2117-0xbb6));int IIIll=(0x1589+3091-0x219c);do{struct urb*lIlll;int pipe=
(IIlIl->IlIll.Flags&lIllII)?usb_rcvbulkpipe(lIlII->IlIlI->IIlll,IIlIl->IlIll.
Endpoint):usb_sndbulkpipe(lIlII->IlIlI->IIlll,IIlIl->IlIll.Endpoint);lIlll=
lIlllIl((0x39b+6948-0x1ebf),IlIIl);if(unlikely(!lIlll)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}lIlII->IIIIIIl.lIlll=lIlll;usb_fill_bulk_urb(lIlll,lIlII
->IlIlI->IIlll,pipe,NULL,IIlIl->IlIll.IIllI,IlIllllI,lIlII);lIlll->sg=lIlII->
IIIIIIl.sg.lIIIlll;lIlll->num_sgs=lIlII->IIIIIIl.sg.num_sgs;if(IIlIl->IlIll.
Flags&lIllII){if((IIlIl->IlIll.Flags&lllllII)==(0x9d3+2261-0x12a8)){lIlll->
transfer_flags|=URB_SHORT_NOT_OK;}}if(unlikely(atomic_cmpxchg(&lIlII->state,
IIIIIlI,llIlIII)!=IIIIIlI)){IIIll=-ECONNRESET;break;}IIIll=usb_submit_urb(lIlll,
IlIIl);if(unlikely(IIIll<(0xe7d+5352-0x2365))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x6f\x6c\x69\x64\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);}}while((0xc6d+1813-0x1382));if(unlikely(IIIll<(0xef9+5987-0x265c))){
lllIIII(lIlII,IIIll,IlIIl);IIIIIl(lIlII,IIIll);}}
#endif
void IIllllIIl(struct IIlII*lIlII,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0x95c+328-0xaa3));int IIIll=(0xa43+3703-0x18ba);do{int pipe;pipe=(IIlIl->IlIll.
Flags&lIllII)?usb_rcvbulkpipe(lIlII->IlIlI->IIlll,IIlIl->IlIll.Endpoint):
usb_sndbulkpipe(lIlII->IlIlI->IIlll,IIlIl->IlIll.Endpoint);lIlII->llllII.IIIlllI
=llIIIIIll(pipe,(0x809+4504-0x19a1),!!(IIlIl->IlIll.Flags&lllllII),lIlII->IlIlI
->lllIlll,lIlII->IlIlI->IIlll,lIlII->llllII.lIIIlI,lIlII,IllIlIIIl,IlIIl);if(
unlikely(lIlII->llllII.IIIlllI==NULL)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}if(unlikely(atomic_cmpxchg(&lIlII->state,IIIIIlI,llIlIII)
!=IIIIIlI)){IIIll=-ECONNRESET;break;}IIIll=IlIIIllll(lIlII->llllII.IIIlllI);if(
unlikely(IIIll<(0x53c+6833-0x1fed))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,IIIll,(lllII)(IIlIl->IIIlI.lIIlIl>>(0x842+586-0xa6c)),(lllII)(IIlIl->IIIlI.
lIIlIl));}}while((0x187c+225-0x195d));if(unlikely(IIIll<(0x20c2+1612-0x270e))){
lllIIII(lIlII,IIIll,IlIIl);IIIIIl(lIlII,IIIll);}}void lllIIII(struct IIlII*lIlII
,int status,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+(0xcb3+4038-0x1c78));IIlIl->
IlIll.IIllI=(0x1317+3282-0x1fe9);IIlIl->IIIlI.lIlIl=sizeof(IIlIl->IlIll)+IIlIl->
IlIll.IIllI;IIlIl->IIIlI.Status=status;}void IIlIIIIIl(struct IIlII*lIlII,gfp_t 
IlIIl){switch(lIlII->lIIIII){case lIllIll:IllIlIIlI(lIlII,IlIIl);return;
#if KERNEL_GT_EQ((0x46d+5454-0x19b9),(0xa20+5414-0x1f40),(0x1041+3978-0x1fac))
case llIllII:lllllIlII(lIlII,IlIIl);return;
#endif
default:llIIlIll(lIlII,-EINVAL,IlIIl);IIIIIl(lIlII,-EINVAL);return;}}void 
IllIlIIlI(struct IIlII*lIlII,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0x7e6+2287-0x10d4));int IIIll=(0xc18+1095-0x105f);do{int pipe;struct urb*lIlll;
struct usb_host_endpoint*ep;lIlll=lIlllIl((0x132+3141-0xd77),IlIIl);if(unlikely(
!lIlll)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}lIlII->Illlll.lIlll=lIlll;pipe=(IIlIl->lIllIl.Flags&
lIllII)?usb_rcvintpipe(lIlII->IlIlI->IIlll,IIlIl->lIllIl.Endpoint):
usb_sndintpipe(lIlII->IlIlI->IIlll,IIlIl->lIllIl.Endpoint);IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x69\x6e\x74\x65\x72\x76\x61\x6c\x20\x69\x73\x20\x25\x64" "\n"
,IIlIl->lIllIl.Interval);usb_fill_int_urb(lIlll,lIlII->IlIlI->IIlll,pipe,lIlII->
Illlll.IllIl,IIlIl->lIllIl.IIllI,lIllIlIl,lIlII,(0x7af+3551-0x158d));if(likely(
IIlIl->lIllIl.Interval)){lIlll->interval=IIlIl->lIllIl.Interval;}else{
#if KERNEL_GT_EQ((0x1b6a+1191-0x200f),(0x79+761-0x36c),(0x1d80+799-0x2095))
ep=(IIlIl->lIllIl.Flags&lIllII)?lIlII->IlIlI->IIlll->ep_in[IIlIl->lIllIl.
Endpoint]:lIlII->IlIlI->IIlll->ep_out[IIlIl->lIllIl.Endpoint];IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x3d\x25\x73\x20\x65\x70\x3d\x30\x78\x25\x70\x20\x65\x70\x5f\x69\x6e\x5b\x25\x64\x5d\x3d\x30\x78\x25\x70\x20\x65\x70\x5f\x6f\x75\x74\x5b\x25\x64\x5d\x3d\x30\x78\x25\x70" "\n"
,(IIlIl->lIllIl.Flags&lIllII)?"\x69\x6e":"\x6f\x75\x74",ep,IIlIl->lIllIl.
Endpoint,lIlII->IlIlI->IIlll->ep_in[IIlIl->lIllIl.Endpoint],IIlIl->lIllIl.
Endpoint,lIlII->IlIlI->IIlll->ep_out[IIlIl->lIllIl.Endpoint]);if(ep){if(lIlII->
IlIlI->IIlll->speed==USB_SPEED_HIGH)lIlll->interval=(0xecb+1800-0x15d2)<<(ep->
desc.bInterval-(0x1e77+1889-0x25d7));else lIlll->interval=ep->desc.bInterval;}
else{lIlll->interval=(0x1f19+1208-0x23d0);}
#else
lIlll->interval=(0x8b+8786-0x22dc);
#endif
}if(IIlIl->lIllIl.Flags&lIllII){if((IIlIl->lIllIl.Flags&lllllII)==
(0x11b3+3661-0x2000)){lIlll->transfer_flags|=URB_SHORT_NOT_OK;}}if(
atomic_cmpxchg(&lIlII->state,IIIIIlI,llIlIII)!=IIIIIlI){IIIll=-ECONNRESET;break;
}while((0x8da+6779-0x2354)){IIIll=usb_submit_urb(lIlll,IlIIl);if((IIIll==-ENOMEM
)&&(lIlII->IlIlI->IIlll->speed==USB_SPEED_HIGH)&&(lIlll->interval<=
(0x1e7+838-0x4ad)))
lIlll->interval<<=(0xd9f+6078-0x255c);else break;yield();}if(unlikely(IIIll<
(0x1f6f+97-0x1fd0))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,IIIll,(lllII)(IIlIl->IIIlI.lIIlIl>>(0xe60+5477-0x23a5)),(lllII)(IIlIl->IIIlI.
lIIlIl));}}while((0x219a+226-0x227c));if(unlikely(IIIll<(0xe44+5754-0x24be))){
llIIlIll(lIlII,IIIll,IlIIl);IIIIIl(lIlII,IIIll);}}
#if KERNEL_GT_EQ((0x94f+6534-0x22d3),(0xbb3+6450-0x24df),(0x1575+2742-0x200c))
void lllllIlII(struct IIlII*lIlII,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0x2c1+5211-0x171b));int IIIll=(0x16b+587-0x3b6);do{int pipe;struct urb*lIlll;
struct usb_host_endpoint*ep;lIlll=lIlllIl((0x24c+1616-0x89c),IlIIl);if(unlikely(
!lIlll)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x67\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}lIlII->IIIIIIl.lIlll=lIlll;pipe=(IIlIl->lIllIl.Flags&
lIllII)?usb_rcvintpipe(lIlII->IlIlI->IIlll,IIlIl->lIllIl.Endpoint):
usb_sndintpipe(lIlII->IlIlI->IIlll,IIlIl->lIllIl.Endpoint);IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x69\x6e\x74\x65\x72\x76\x61\x6c\x20\x69\x73\x20\x25\x64" "\n"
,IIlIl->lIllIl.Interval);usb_fill_int_urb(lIlll,lIlII->IlIlI->IIlll,pipe,NULL,
IIlIl->lIllIl.IIllI,lIllIlIl,lIlII,(0x19cd+1543-0x1fd3));lIlll->sg=lIlII->
IIIIIIl.sg.lIIIlll;lIlll->num_sgs=lIlII->IIIIIIl.sg.num_sgs;if(likely(IIlIl->
lIllIl.Interval)){lIlll->interval=IIlIl->lIllIl.Interval;}else{
#if KERNEL_GT_EQ((0xd85+3339-0x1a8e),(0xccf+3269-0x198e),(0x91d+4966-0x1c79))
ep=(IIlIl->lIllIl.Flags&lIllII)?lIlII->IlIlI->IIlll->ep_in[IIlIl->lIllIl.
Endpoint]:lIlII->IlIlI->IIlll->ep_out[IIlIl->lIllIl.Endpoint];IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x3d\x25\x73\x20\x65\x70\x3d\x30\x78\x25\x70\x20\x65\x70\x5f\x69\x6e\x5b\x25\x64\x5d\x3d\x30\x78\x25\x70\x20\x65\x70\x5f\x6f\x75\x74\x5b\x25\x64\x5d\x3d\x30\x78\x25\x70" "\n"
,(IIlIl->lIllIl.Flags&lIllII)?"\x69\x6e":"\x6f\x75\x74",ep,IIlIl->lIllIl.
Endpoint,lIlII->IlIlI->IIlll->ep_in[IIlIl->lIllIl.Endpoint],IIlIl->lIllIl.
Endpoint,lIlII->IlIlI->IIlll->ep_out[IIlIl->lIllIl.Endpoint]);if(ep){if(lIlII->
IlIlI->IIlll->speed==USB_SPEED_HIGH)lIlll->interval=(0x4d2+2341-0xdf6)<<(ep->
desc.bInterval-(0x119d+3119-0x1dcb));else lIlll->interval=ep->desc.bInterval;}
else{lIlll->interval=(0x7b9+6168-0x1fd0);}
#else
lIlll->interval=(0xae9+5755-0x2163);
#endif
}if(IIlIl->lIllIl.Flags&lIllII){if((IIlIl->lIllIl.Flags&lllllII)==
(0x2126+213-0x21fb)){lIlll->transfer_flags|=URB_SHORT_NOT_OK;}}if(atomic_cmpxchg
(&lIlII->state,IIIIIlI,llIlIII)!=IIIIIlI){IIIll=-ECONNRESET;break;}while(
(0x512+5948-0x1c4d)){IIIll=usb_submit_urb(lIlll,IlIIl);if((IIIll==-ENOMEM)&&(
lIlII->IlIlI->IIlll->speed==USB_SPEED_HIGH)&&(lIlll->interval<=
(0x1447+3519-0x2186)))
lIlll->interval<<=(0x6df+8073-0x2667);else break;yield();}if(unlikely(IIIll<
(0x10d+7331-0x1db0))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,IIIll,(lllII)(IIlIl->IIIlI.lIIlIl>>(0x1ad6+2099-0x22e9)),(lllII)(IIlIl->IIIlI.
lIIlIl));}}while((0x1df2+328-0x1f3a));if(unlikely(IIIll<(0x3e3+6682-0x1dfd))){
llIIlIll(lIlII,IIIll,IlIIl);IIIIIl(lIlII,IIIll);}}
#endif
void llIIlIll(struct IIlII*lIlII,int status,gfp_t IlIIl){IllII IIlIl=(IllII)(
lIlII+(0x82a+5037-0x1bd6));IIlIl->lIllIl.IIllI=(0x15e6+2009-0x1dbf);IIlIl->IIIlI
.lIlIl=sizeof(IIlIl->lIllIl)+IIlIl->lIllIl.IIllI;IIlIl->IIIlI.Status=status;}
void IIlIlllII(struct IIlII*lIlII,gfp_t IlIIl){switch(lIlII->lIIIII){case 
lIllIll:IIIllIlll(lIlII,IlIIl);return;case IllIIlI:lIIIIIIII(lIlII,IlIIl);return
;default:lIIIIlII(lIlII,-EINVAL,IlIIl);IIIIIl(lIlII,-EINVAL);return;}}void 
lIIIIIIII(struct IIlII*lIlII,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0x1566+1197-0x1a12));int pipe,IIIll=(0xc3+4457-0x122c);do{int i,IlIIII,IIIlIl,
lIIIllI,IllIIlIl,IllllIlI;int IllIIllI;struct urb*lIlll;pipe=(IIlIl->lIIIl.Flags
&lIllII)?usb_rcvisocpipe(lIlII->IlIlI->IIlll,IIlIl->lIIIl.Endpoint):
usb_sndisocpipe(lIlII->IlIlI->IIlll,IIlIl->lIIIl.Endpoint);IllllIlI=IIllIlIIl(
lIlII->IlIlI,pipe);lIlII->llllII.IIIlllI=llIIIIIll(pipe,IIlIl->lIIIl.Interval,!!
(IIlIl->lIIIl.Flags&lllllII),lIlII->IlIlI->lllIlll,lIlII->IlIlI->IIlll,lIlII->
llllII.lIIIlI,lIlII,lllIlIlII,IlIIl);if(unlikely(lIlII->llllII.IIIlllI==NULL)){
IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}lIlII->llllII.IIIlllI->llllIl[(0x1882+1036-0x1c8e)]->
start_frame=IIlIl->lIIIl.IIIlIIIl;if(!(IIlIl->lIIIl.Flags&IlIllllII))lIlII->
llllII.IIIlllI->llllIl[(0x2110+1491-0x26e3)]->transfer_flags&=~URB_ISO_ASAP;


lIlll=lIlII->llllII.IIIlllI->llllIl[(0x178+1828-0x89c)];IllIIllI=
(0x3b8+8195-0x23bb);for(i=(0xb47+1405-0x10c4),IlIIII=(0x1632+2289-0x1f23),IIIlIl
=(0x8a5+4687-0x1af4);i<IIlIl->lIIIl.lIllIII;i++,IIIlIl++){if(IIIlIl>=lIlll->
number_of_packets){if(++IlIIII>=lIlII->llllII.IIIlllI->llIIl)break;IllIIllI=
(0x1971+1769-0x205a);lIlll=lIlII->llllII.IIIlllI->llllIl[IlIIII];IIIlIl=
(0xc97+4581-0x1e7c);}lIlll->iso_frame_desc[IIIlIl].offset=IllIIllI;lIlll->
iso_frame_desc[IIIlIl].length=IIlIl->lIIIl.llIIlII[i].Length;IllIIllI+=lIlll->
iso_frame_desc[IIIlIl].length;
}


lIIIllI=IIlIlIIl(lIlII->IlIlI,pipe);IllIIlIl=usb_get_current_frame_number(lIlII
->IlIlI->IIlll);if(!(lIlII->llllII.IIIlllI->llllIl[(0xee8+784-0x11f8)]->
transfer_flags&URB_ISO_ASAP)&&(lIIIllI==(0x958+1805-0x1065))){lIIIllI=(IllIIlIl+
(0x7a7+609-0xa06))-lIlII->llllII.IIIlllI->llllIl[(0x4e9+6474-0x1e33)]->
start_frame;IIIllIll(lIlII->IlIlI,pipe,lIIIllI);}if(IllllIlI==
(0x126b+348-0x13c6)){if(lIlII->llllII.IIIlllI->llllIl[(0x12c8+99-0x132b)]->
transfer_flags&URB_ISO_ASAP){lIlII->llllII.IIIlllI->llllIl[(0x131f+1693-0x19bc)]
->transfer_flags&=~URB_ISO_ASAP;lIlII->llllII.IIIlllI->llllIl[
(0xaf9+3868-0x1a15)]->start_frame=IllIIlIl+(0x1186+1945-0x191e)-lIIIllI;}}if(!(
lIlII->llllII.IIIlllI->llllIl[(0x42+3064-0xc3a)]->transfer_flags&URB_ISO_ASAP)){
lIlII->llllII.IIIlllI->llllIl[(0xe31+5592-0x2409)]->start_frame+=lIIIllI;if(
lIlII->llllII.IIIlllI->llllIl[(0x1119+1999-0x18e8)]->start_frame<IllIIlIl+
(0xf5f+362-0x10c8)){IIlIl->IIIlI.Status=-EXDEV;IIlIl->IIIlI.lIlIl=llllllll(IIlIl
);IIlIl->lIIIl.IIllI=(0x53c+3037-0x1119);IIlIl->lIIIl.lIlIllII=IIlIl->lIIIl.
lIllIII;for(i=(0x5d3+3686-0x1439);i<IIlIl->lIIIl.lIllIII;i++){IIlIl->lIIIl.
llIIlII[i].Status=-EINVAL;IIlIl->lIIIl.llIIlII[i].Length=(0x1337+3713-0x21b8);}
IIIll=(0x1dd3+679-0x207a);IIIIIl(lIlII,-EXDEV);break;}}if(atomic_cmpxchg(&lIlII
->state,IIIIIlI,llIlIII)!=IIIIIlI){IIIll=-ECONNRESET;break;}IIIll=IlIIIllll(
lIlII->llllII.IIIlllI);if(unlikely(IIIll<(0xf11+3717-0x1d96))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,IIIll,(lllII)(IIlIl->IIIlI.lIIlIl>>(0x49c+2832-0xf8c)),(lllII)(IIlIl->IIIlI.
lIIlIl));}}while((0x12b1+1848-0x19e9));if(unlikely(IIIll<(0x206a+1646-0x26d8))){
lIIIIlIl(lIlII->IlIlI,pipe);lIIIIlII(lIlII,IIIll,IlIIl);IIIIIl(lIlII,IIIll);}}
void IIIllIlll(struct IIlII*lIlII,gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+
(0xeb3+1417-0x143b));int pipe,IIIll=(0x1678+4004-0x261c);int IllIIllI;do{int i,
lIIIllI,IllIIlIl,IllllIlI;struct urb*lIlll;struct usb_host_endpoint*ep;pipe=(
IIlIl->lIIIl.Flags&lIllII)?usb_rcvisocpipe(lIlII->IlIlI->IIlll,IIlIl->lIIIl.
Endpoint):usb_sndisocpipe(lIlII->IlIlI->IIlll,IIlIl->lIIIl.Endpoint);IllllIlI=
IIllIlIIl(lIlII->IlIlI,pipe);lIlll=lIlllIl(IIlIl->lIIIl.lIllIII,IlIIl);if(
unlikely(!lIlll)){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}lIlII->Illlll.lIlll=lIlll;lIlll->dev=lIlII->IlIlI->IIlll;
lIlll->pipe=pipe;lIlll->transfer_flags=(IIlIl->lIIIl.Flags&IlIllllII)?
URB_ISO_ASAP:(0xc97+1948-0x1433);lIlll->transfer_buffer_length=IIlIl->lIIIl.
IIllI;lIlll->start_frame=IIlIl->lIIIl.IIIlIIIl;lIlll->number_of_packets=IIlIl->
lIIIl.lIllIII;lIlll->context=lIlII;lIlll->complete=IlIIIlllI;lIlll->
transfer_buffer=lIlII->Illlll.IllIl;if(likely(IIlIl->lIIIl.Interval)){lIlll->
interval=IIlIl->lIIIl.Interval;}else{
#if KERNEL_GT_EQ((0x3a6+6961-0x1ed5),(0x843+3568-0x162d),(0x6c5+5055-0x1a7a))

ep=(IIlIl->lIIIl.Flags&lIllII)?lIlII->IlIlI->IIlll->ep_in[IIlIl->lIIIl.Endpoint]
:lIlII->IlIlI->IIlll->ep_out[IIlIl->lIIIl.Endpoint];if(ep){if(lIlII->IlIlI->
IIlll->speed==USB_SPEED_HIGH)lIlll->interval=(0x1801+1973-0x1fb5)<<(ep->desc.
bInterval-(0x9ad+3118-0x15da));else lIlll->interval=ep->desc.bInterval;}else{
lIlll->interval=(0x1a1d+695-0x1cd3);}
#else
lIlll->interval=(0x2032+791-0x2348);
#endif
}IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x69\x6e\x74\x65\x72\x76\x61\x6c\x20\x69\x73\x20\x25\x64" "\n"
,lIlll->interval);for(IllIIllI=(0xac2+2110-0x1300),i=(0x168c+2168-0x1f04);i<
IIlIl->lIIIl.lIllIII;i++){lIlll->iso_frame_desc[i].offset=IllIIllI;lIlll->
iso_frame_desc[i].length=IIlIl->lIIIl.llIIlII[i].Length;IllIIllI+=lIlll->
iso_frame_desc[i].length;}


lIIIllI=IIlIlIIl(lIlII->IlIlI,pipe);IllIIlIl=usb_get_current_frame_number(lIlII
->IlIlI->IIlll);if(!(lIlll->transfer_flags&URB_ISO_ASAP)&&(lIIIllI==
(0x1c47+317-0x1d84))){lIIIllI=(IllIIlIl+(0x1686+2868-0x21b8))-lIlll->start_frame
;IIIllIll(lIlII->IlIlI,pipe,lIIIllI);}if(IllllIlI==(0xdc0+5449-0x2308)){if(lIlll
->transfer_flags&URB_ISO_ASAP){lIlll->transfer_flags&=~URB_ISO_ASAP;lIlll->
start_frame=IllIIlIl+(0x2123+940-0x24ce)-lIIIllI;}}if(!(lIlll->transfer_flags&
URB_ISO_ASAP)){lIlll->start_frame+=lIIIllI;if(lIlll->start_frame<IllIIlIl+
(0x1e11+1393-0x2381)){IIlIl->IIIlI.Status=-EXDEV;IIlIl->IIIlI.lIlIl=llllllll(
IIlIl);IIlIl->lIIIl.IIllI=(0xc9+8633-0x2282);IIlIl->lIIIl.lIlIllII=IIlIl->lIIIl.
lIllIII;for(i=(0x37b+8898-0x263d);i<IIlIl->lIIIl.lIllIII;i++){IIlIl->lIIIl.
llIIlII[i].Status=-EINVAL;IIlIl->lIIIl.llIIlII[i].Length=(0xb1+2769-0xb82);}
IIIll=(0xa13+2821-0x1518);IIIIIl(lIlII,-EXDEV);break;}}IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x66\x6c\x61\x67\x73\x3d\x25\x64\x20\x73\x74\x61\x72\x74\x66\x72\x61\x6d\x65\x3d\x25\x64\x20\x63\x75\x72\x66\x72\x61\x6d\x65\x3d\x25\x64\x20\x64\x65\x6c\x74\x61\x3d\x25\x64" "\n"
,lIlll->transfer_flags,lIlll->start_frame,usb_get_current_frame_number(lIlII->
IlIlI->IIlll),IIlIlIIl(lIlII->IlIlI,pipe));if(atomic_cmpxchg(&lIlII->state,
IIIIIlI,llIlIII)!=IIIIIlI){IIIll=-ECONNRESET;break;}IIIll=usb_submit_urb(lIlll,
IlIIl);if(unlikely(IIIll<(0x9b+5964-0x17e7))){IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,IIIll,(unsigned long long)IIlIl->IIIlI.lIIlIl);}}while((0xb5d+4479-0x1cdc));if(
unlikely(IIIll<(0x1612+2045-0x1e0f))){lIIIIlIl(lIlII->IlIlI,pipe);lIIIIlII(lIlII
,IIIll,IlIIl);IIIIIl(lIlII,IIIll);}}void lIIIIlII(struct IIlII*lIlII,int status,
gfp_t IlIIl){IllII IIlIl=(IllII)(lIlII+(0x1070+5615-0x265e));IIlIl->lIIIl.IIllI=
(0x90c+974-0xcda);IIlIl->IIIlI.lIlIl=llllllll(IIlIl)+IIlIl->lIIIl.IIllI;IIlIl->
IIIlI.Status=status;
}void IIlIIllI(struct urb*lIlll
#if KERNEL_LT((0x7ac+215-0x881),(0xa6d+4567-0x1c3e),(0xe50+4376-0x1f55))
,struct pt_regs*IIlllIl
#endif
){struct IIlII*lIlII=lIlll->context;IllII IIlIl=(IllII)(lIlII+
(0xd15+4481-0x1e95));IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72" "\n"
);
IIlIl->lIlIll.IIllI=(lIlll->actual_length<(0xc55+5508-0x21d9))?
(0x1045+2080-0x1865):lIlll->actual_length;IIlIl->lIlIll.IlllII.lIlIl=sizeof(
IIlIl->lIlIll)+IIlIl->lIlIll.IIllI;IIlIl->lIlIll.IlllII.Status=lIlll->status;
IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIlll->status);lllIlIl(IIlIl);
IIIIIl(lIlII,lIlll->status);}void lllIlIll(struct urb*lIlll
#if KERNEL_LT((0xfc8+1470-0x1584),(0x2cd+8084-0x225b),(0x36d+7672-0x2152))
,struct pt_regs*IIlllIl
#endif
){struct IIlII*lIlII=lIlll->context;IllII IIlIl=(IllII)(lIlII+
(0x200+4334-0x12ed));IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72" "\n"
);
IIlIl->llIlII.IIllI=(lIlll->actual_length<(0xd7+6189-0x1904))?(0x417+2638-0xe65)
:lIlll->actual_length;IIlIl->IIIlI.lIlIl=sizeof(IIlIl->llIlII);if(usb_pipein(
lIlll->pipe))IIlIl->IIIlI.lIlIl+=IIlIl->llIlII.IIllI;IIlIl->llIlII.IlllII.Status
=lIlll->status;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIlll->status);lllIlIl(IIlIl);
IIIIIl(lIlII,lIlll->status);}void IlIllllI(struct urb*lIlll
#if KERNEL_LT((0x13c+5782-0x17d0),(0x8c0+7510-0x2610),(0x5b6+5099-0x198e))
,struct pt_regs*IIlllIl
#endif
){struct IIlII*lIlII=lIlll->context;IllII IIlIl=(IllII)(lIlII+
(0x10f4+2659-0x1b56));IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IIlIl->IlIll.IIllI=lIlll->actual_length;IIlIl->IIIlI.lIlIl=sizeof(IIlIl->IlIll
);if(usb_pipein(lIlll->pipe))IIlIl->IIIlI.lIlIl+=IIlIl->IlIll.IIllI;IIlIl->IlIll
.IlllII.Status=lIlll->status;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIlll->status);lllIlIl(IIlIl);
IIIIIl(lIlII,lIlll->status);}void lIllIlIl(struct urb*lIlll
#if KERNEL_LT((0xcd0+4047-0x1c9d),(0x18d9+3097-0x24ec),(0xdb0+1282-0x129f))
,struct pt_regs*IIlllIl
#endif
){struct IIlII*lIlII=lIlll->context;IllII IIlIl=(IllII)(lIlII+
(0x1654+2963-0x21e6));IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IIlIl->lIllIl.IIllI=lIlll->actual_length;IIlIl->IIIlI.lIlIl=sizeof(IIlIl->
lIllIl);if(usb_pipein(lIlll->pipe))IIlIl->IIIlI.lIlIl+=IIlIl->lIllIl.IIllI;IIlIl
->lIllIl.IlllII.Status=lIlll->status;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIlll->status);lllIlIl(IIlIl);
IIIIIl(lIlII,lIlll->status);}void IlIIIlllI(struct urb*lIlll
#if KERNEL_LT((0xc42+3661-0x1a8d),(0x767+5859-0x1e44),(0xa03+7308-0x267c))
,struct pt_regs*IIlllIl
#endif
){int i;struct IIlII*lIlII=lIlll->context;struct llIII*IlIlI=lIlII->IlIlI;IllII 
IIlIl=(IllII)(lIlII+(0x557+4555-0x1721));IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIlll->status);lIIIIlIl(IlIlI,lIlll->pipe);lIlll->start_frame-=IIlIlIIl(IlIlI,
lIlll->pipe);
#if KERNEL_LT((0x1e5+1262-0x6d1),(0xd54+3192-0x19c6),(0x17dc+1957-0x1f69))


if(lIlll->status!=-ECONNRESET&&lIlll->status!=-ENOENT&&lIlll->status!=-ESHUTDOWN
)lIlll->status=(0x1dcf+1694-0x246d);
#endif
IIlIl->lIIIl.IlllII.Status=lIlll->status;IIlIl->lIIIl.lIlIllII=lIlll->
error_count;IIlIl->lIIIl.IIIlIIIl=lIlll->start_frame;if(usb_pipein(lIlll->pipe))
{IIlIl->lIIIl.IIllI=IllIlIlI(lIlll->iso_frame_desc,lIlll->number_of_packets,
lIlll->transfer_buffer,lIlll->transfer_buffer,(0x161+1581-0x78d));}else{IIlIl->
lIIIl.IIllI=lIllIllI(lIlll->iso_frame_desc,lIlll->number_of_packets,
(0x1393+1165-0x181f));}for(i=(0x1323+1929-0x1aac);i<IIlIl->lIIIl.lIllIII;i++){
IIlIl->lIIIl.llIIlII[i].Length=lIlll->iso_frame_desc[i].actual_length;IIlIl->
lIIIl.llIIlII[i].Status=lIlll->iso_frame_desc[i].status;}IIlIl->IIIlI.lIlIl=
llllllll(IIlIl);if(usb_pipein(lIlll->pipe))IIlIl->IIIlI.lIlIl+=IIlIl->lIIIl.
IIllI;lllIlIl(IIlIl);
#if defined(_USBD_USE_EHCI_FIX_) && KERNEL_GT_EQ((0x1d22+1717-0x23d5),\
(0x1a94+2883-0x25d1),(0x1e08+1339-0x232a)) && KERNEL_LT_EQ((0x1392+1429-0x1925),\
(0x4d+5910-0x175d),(0x262+3718-0x10cc))
if(IlIlI->lllIlll&&(lIlll->status==(0x659+4886-0x196f))&&(atomic_read(&lIlll->
kref.refcount)>(0x22fd+410-0x2496)))usb_put_urb(lIlll);
#endif

IIIIIl(lIlII,lIlll->status);}void IllIlIIIl(struct lllIlI*llllI){int i;struct 
IIlII*lIlII=llllI->context;IllII IIlIl=(IllII)(lIlII+(0x25d+8018-0x21ae));IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64" "\n"
);IIlIl->IlIll.IIllI=llllI->lllIlllll;IIlIl->IIIlI.lIlIl=sizeof(IIlIl->IlIll);if
(usb_pipein(llllI->pipe))IIlIl->IlIll.IlllII.lIlIl+=IIlIl->IlIll.IIllI;IIlIl->
IlIll.IlllII.Status=llllI->status;for(i=(0xba4+4893-0x1ec1);i<llllI->llIIl;i++)
lIlII->llllII.lIIIlI->IlllIl[i].actual_length=llllI->llllIl[i]->actual_length;
IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,llllI->status);lllIlIl(IIlIl);
IIIIIl(lIlII,llllI->status);}void lllIlIlII(struct lllIlI*llllI){int i,IlIIII,
IIIlIl;struct IIlII*lIlII=llllI->context;struct llIII*IlIlI=lIlII->IlIlI;IllII 
IIlIl=(IllII)(lIlII+(0x8c3+7485-0x25ff));IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64" "\n"
);lIIIIlIl(IlIlI,llllI->pipe);llllI->llllIl[(0x1436+4224-0x24b6)]->start_frame-=
IIlIlIIl(IlIlI,llllI->pipe);IIlIl->lIIIl.IlllII.Status=llllI->status;IIlIl->
lIIIl.IIIlIIIl=llllI->llllIl[(0x1237+317-0x1374)]->start_frame;IIlIl->lIIIl.
lIlIllII=(0x707+4568-0x18df);IIlIl->lIIIl.IIllI=(0x1809+903-0x1b90);for(i=
(0x18d3+2716-0x236f),IIIlIl=(0x104b+4679-0x2292);i<llllI->llIIl;i++){struct urb*
lIlll=llllI->llllIl[i];if(usb_pipein(llllI->pipe)){lIlII->llllII.lIIIlI->IlllIl[
i].actual_length=IllIlIlI(lIlll->iso_frame_desc,lIlll->number_of_packets,lIlll->
transfer_buffer,lIlll->transfer_buffer,(0x2cf+4176-0x131e));}else{lIlII->llllII.
lIIIlI->IlllIl[i].actual_length=lIllIllI(lIlll->iso_frame_desc,lIlll->
number_of_packets,(0x5e6+4037-0x15aa));}IIlIl->lIIIl.IIllI+=lIlII->llllII.lIIIlI
->IlllIl[i].actual_length;IIlIl->lIIIl.lIlIllII+=lIlll->error_count;for(IlIIII=
(0xf+2480-0x9bf);IlIIII<lIlll->number_of_packets;IlIIII++){
IIlIl->lIIIl.llIIlII[IIIlIl].Length=lIlll->iso_frame_desc[IlIIII].actual_length;
IIlIl->lIIIl.llIIlII[IIIlIl].Status=lIlll->iso_frame_desc[IlIIII].status;IIIlIl
++;}}IIlIl->IIIlI.lIlIl=llllllll(IIlIl);if(usb_pipein(llllI->pipe))IIlIl->IIIlI.
lIlIl+=IIlIl->lIIIl.IIllI;IlllI(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,llllI->status);lllIlIl(IIlIl);
IIIIIl(lIlII,llllI->status);}
void IlIlllIl(struct llIII*IlIlI,lllIII lllIl){struct IlIlIlII*IIlIlI;

list_for_each_entry(IIlIlI,&IlIlI->IIllllII,lIlIII){if(IIlIlI->lllIl==lllIl){
list_del(&IIlIlI->lIlIII);IlIIIl(IIlIlI);return;}}}static inline void lIIllllll(
struct llIII*IlIlI,lllIII lllIl,int IlIIIlI){struct IlIlIlII*IIlIlI;
list_for_each_entry(IIlIlI,&IlIlI->IIllllII,lIlIII){if(IIlIlI->lllIl==lllIl){
IIlIlI->llIlllIlI=IlIIIlI;return;}}}struct IIlII*llIIllII(struct llIII*IlIlI,
lllIII lllIl){struct IIlII*lIlII;list_for_each_entry(lIlII,&IlIlI->IIlllII,
lIlIIl){if(lIlII->lllIl==lllIl){return lIlII;}}return NULL;}struct IIlII*
IlIIllllI(struct IIlII*lIlII,int IlIIIlI){struct IIlII*llIIlI;struct list_head*
lIIlIIll;


if(unlikely(list_empty(&lIlII->lIlIIl)))return NULL;llIIlI=lIlII;
list_for_each_entry_continue(llIIlI,&lIlII->IlIlI->IIlllII,lIlIIl){if(llIIlI->
lllIl==lIlII->lllIl){switch(IlIIIlI){case IIIIlIIl:lIIlIIll=llIIlI->lIlIIl.prev;
list_del(&llIIlI->lIlIIl);IIllIIl(llIIlI);llIIlI=list_entry(lIIlIIll,struct 
IIlII,lIlIIl);break;case IIlllllII:IlIIIlI=IlIIIlI;return llIIlI;case IlllIIIlI:
IlIIIlI=IlIIIlI;atomic_xchg(&llIIlI->state,lIIllll);return llIIlI;case lIIlllIIl
:IlIIIlI=llIIlI->IIIlIIl.lIIllIllI;lIIlIIll=llIIlI->lIlIIl.prev;list_del(&llIIlI
->lIlIIl);IIllIIl(llIIlI);llIIlI=list_entry(lIIlIIll,struct IIlII,lIlIIl);break;
}}}if(unlikely(IlIIIlI==IIIIlIIl)){IlIlllIl(lIlII->IlIlI,lIlII->lllIl);}else{
lIIllllll(lIlII->IlIlI,lIlII->lllIl,IlIIIlI);}
return NULL;}





void IIIIIl(struct IIlII*lIlII,int status){struct llIII*IlIlI=IlIIlIII(lIlII->
IlIlI);struct IIlII*llIIllIll=NULL;unsigned long flags;int lIIIIll;int llIlIlIII
=(0x1e96+1873-0x25e7);int IIlIIlll;int IlIIIlI;spin_lock_irqsave(&IlIlI->lIlllI,
flags);
lIIIIll=atomic_xchg(&lIlII->state,lllIIllIl);










if(lIlII->lIllIIl&&lIIIIll==lIIllll&&(status==-ECONNRESET||status==-ENOENT)){
IllII IIlIl=(IllII)(lIlII+(0xfd5+999-0x13bb));IIlIl->IIIlI.Status=-ESHUTDOWN;
llIll(
"\x72\x65\x71\x75\x65\x73\x74\x20\x63\x61\x6e\x63\x65\x6c\x6c\x65\x64\x20\x64\x75\x65\x20\x74\x6f\x20\x64\x65\x74\x61\x63\x68\x20\x6f\x66\x20\x64\x65\x76\x69\x63\x65" "\n"
);}
if(lIlII->IIIlIIl.llIlIIlI){

if(unlikely(lIIIIll==lIIllll)){




IIlIIlll=lIlII->IIIlIIl.lllIIlIIl;IlIIIlI=lIlII->IIIlIIl.lIllIlIlI;
}else if(likely(status==(0xe4d+517-0x1052))){IIlIIlll=lIlII->IIIlIIl.lIIIIIlIl;
IlIIIlI=lIlII->IIIlIIl.IlIIlllII;
}else if(status==-EREMOTEIO){IIlIIlll=lIlII->IIIlIIl.IIlIIIlll;IlIIIlI=lIlII->
IIIlIIl.lIIllIlIl;
}else{IIlIIlll=lIlII->IIIlIIl.lllIllIlI;IlIIIlI=lIlII->IIIlIIl.IllIlIlll;
}if(unlikely(IIlIIlll==IIlIllIII)){lIlII->llIlIlI=(0x81d+531-0xa2f);}llIIllIll=
IlIIllllI(lIlII,IlIIIlI);
}
list_del(&lIlII->lIlIIl);
if(unlikely(lIlII->llIlIlI)){spin_unlock_irqrestore(&IlIlI->lIlllI,flags);
IIllIIl(lIlII);}else{spin_lock(&IlIlI->lllIIll);list_add_tail(&lIlII->lIlIIl,&
IlIlI->IIIIIIIl);spin_unlock(&IlIlI->lllIIll);spin_unlock_irqrestore(&IlIlI->
lIlllI,flags);llIlIlIII=(0x15f3+312-0x172a);}
if(llIIllIll){





IlIIlllI(llIIllIll,GFP_ATOMIC);}
if(likely(llIlIlIII))wake_up(&IlIlI->IIIIlI);








IlIllIl(IlIlI);}
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t IIIllIllI;extern atomic_t IIIIlllll;
#endif 

int lIlIIIIl(struct llIII*IlIlI){int i;int lIIIlIlI,llllllIl;struct usb_device*
IlIII=IlIlI->IIlll;lIIIlIlI=llllllIl=-(0x9af+6339-0x2271);
for(i=(0x613+2411-0xf7e);i<IlIII->actconfig->desc.bNumInterfaces;i++){struct 
usb_interface*interface=IlIII->actconfig->interface[i];if(interface==NULL)
continue;if(interface->cur_altsetting==NULL)continue;IlllI(
"\x44\x65\x74\x65\x63\x74\x65\x64\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x63\x6c\x61\x73\x73\x3d\x30\x78\x25\x30\x32\x78\x20\x73\x75\x62\x63\x6c\x61\x73\x73\x3d\x30\x78\x25\x30\x32\x78\x20\x70\x72\x6f\x74\x6f\x63\x6f\x6c\x3d\x30\x78\x25\x30\x32\x78" "\n"
,interface->cur_altsetting->desc.bInterfaceClass,interface->cur_altsetting->desc
.bInterfaceSubClass,interface->cur_altsetting->desc.bInterfaceProtocol);if(
interface->cur_altsetting->desc.bInterfaceClass==(0xf20+1132-0x1384)&&interface
->cur_altsetting->desc.bInterfaceProtocol==(0x1121+72-0x1119)){int IlIIII;
lIIIlIlI=llllllIl=-(0xde9+2546-0x17da);for(IlIIII=(0x12b5+4052-0x2289);IlIIII<
interface->cur_altsetting->desc.bNumEndpoints;IlIIII++){struct usb_host_endpoint
*endpoint=&interface->cur_altsetting->endpoint[IlIIII];if((endpoint->desc.
bmAttributes&USB_ENDPOINT_XFERTYPE_MASK)==USB_ENDPOINT_XFER_BULK){if(endpoint->
desc.bEndpointAddress&USB_ENDPOINT_DIR_MASK)lIIIlIlI=endpoint->desc.
bEndpointAddress;else llllllIl=endpoint->desc.bEndpointAddress;}}if(lIIIlIlI!=-
(0xb79+5553-0x2129)&&llllllIl!=-(0xa81+840-0xdc8)){unsigned long flags;IlllI(
"\x44\x65\x74\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x73\x20\x30\x78\x25\x30\x32\x78\x20\x61\x6e\x64\x20\x30\x78\x25\x30\x32\x78" "\n"
,lIIIlIlI,llllllIl);

spin_lock_irqsave(&IlIlI->lIIIll,flags);if(!IlIlI->Illllll&&IlIlI->IIlIII!=
IlIlIIl){IlIlI->lIlIlIlI=interface->cur_altsetting->desc.bInterfaceNumber;IlIlI
->IIlllIlI=lIIIlIlI;IlIlI->lIlIIlIl=llllllIl;IlIlI->IIlIII=llllIIII;IlIlI->
Illllll=(0x67d+7610-0x2436);
}else{
}spin_unlock_irqrestore(&IlIlI->lIIIll,flags);break;
}}}
return(0x59+6907-0x1b54);}void llIlIIIl(struct llIII*IlIlI){struct IIIllI*lIIII;
unsigned long flags;IlllI(
"\x21\x21\x21\x21\x20\x72\x65\x73\x65\x74\x20\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e" "\n"
);spin_lock_irqsave(&IlIlI->lIIIll,flags);if(IlIlI->IIlIII==IlIlIIl){


IlIlI->Illllll=(0x731+5914-0x1e4b);}else{IlIlI->IIlIII=llllIIII;}lIIII=IlIlI->
IIllIII;IlIlI->IIllIII=NULL;spin_unlock_irqrestore(&IlIlI->lIIIll,flags);if(
lIIII){usb_unlink_urb(lIIII->lIlll);IIIIlIl(lIIII);}}int lIllIIlIl(struct llIII*
IlIlI,lllIII lllIl){struct IIIllI*lIIII=NULL;unsigned long flags;IlllI(
"\x21\x21\x21\x21\x72\x65\x73\x65\x74\x20\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e\x20\x62\x79\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64" "\n"
);spin_lock_irqsave(&IlIlI->lIIIll,flags);if(IlIlI->IIllIII){if((IlIlI->IIllIII
->lIIIlllll==lllIl)||(IlIlI->IIllIII->llIlllIII==lllIl)||(IlIlI->IIllIII->
IllIIIlI==lllIl)){if(IlIlI->IIlIII==IlIlIIl){


IlIlI->Illllll=(0xbeb+3310-0x18d9);}else{IlIlI->IIlIII=llllIIII;}lIIII=IlIlI->
IIllIII;IlIlI->IIllIII=NULL;}}spin_unlock_irqrestore(&IlIlI->lIIIll,flags);if(
lIIII){usb_unlink_urb(lIIII->lIlll);IIIIlIl(lIIII);return(0x5af+7139-0x2191);}
return(0x420+1098-0x86a);}void lllIIlII(struct llIII*IlIlI,int llIlIlI,int 
llIIIIlI){struct IIIllI*lIIII;unsigned long flags;IlllI(
"\x21\x21\x21\x21\x20\x64\x69\x73\x61\x62\x6c\x65" "\n");spin_lock_irqsave(&
IlIlI->lIIIll,flags);IlIlI->Illllll=(0x324+8248-0x235c);IlIlI->IIlllIlI=-
(0x19cf+748-0x1cba);IlIlI->lIlIIlIl=-(0x14e1+3619-0x2303);IlIlI->lIlIlIlI=-
(0xc86+6065-0x2436);if(IlIlI->IIlIII!=IlIlIIl){IlIlI->IIlIII=IIIllIlI;}lIIII=
IlIlI->IIllIII;IlIlI->IIllIII=NULL;if(lIIII){



lIIII->llIlIlI=llIlIlI;


lIIII->lIllIIl=llIIIIlI;}spin_unlock_irqrestore(&IlIlI->lIIIll,flags);if(lIIII){



#if KERNEL_GT_EQ((0x119b+1042-0x15ab),(0xbb8+6842-0x266c),(0x1612+303-0x1725))


usb_poison_urb(lIIII->lIlll);
#else
usb_kill_urb(lIIII->lIlll);
#endif
IIIIlIl(lIIII);}}int IlIIIIlIl(struct IIlII*lIlII,gfp_t IlIIl){IllII IIlIl=(
IllII)(lIlII+(0x7c6+1280-0xcc5));struct llIII*IlIlI=lIlII->IlIlI;struct IIIllI*
lIIII;unsigned long flags;



if(lIlII->IIIlIIl.llIlIIlI)return-(0x12fa+2416-0x1c69);
if(!IlIlI->Illllll)return-(0xbfa+4756-0x1e8d);
if(lIlII->endpoint!=IlIlI->IIlllIlI&&lIlII->endpoint!=IlIlI->lIlIIlIl)return-
(0xc8b+5212-0x20e6);
spin_lock_irqsave(&IlIlI->lIIIll,flags);lIIII=IlIlI->IIllIII;if(IlIlI->IIlIII==
llllIIII){


if(IIlIIlIII(lIlII)){struct lllllIlI*IllIlll=lIlII->Illlll.IllIl;
if(lIIII==NULL){lIIII=llllllllI(IlIlI,IlIIl);IlIlI->IIllIII=lIIII;}else{
IIllIIllI(lIIII);}if(lIIII){lIIII->lIIIlllll=IIlIl->IIIlI.lIIlIl;lIIII->lIIlIlII
=IllIlll->IIlllIlII;lIIII->IlIllIlI=((IllIlll->IllIIIllI&(0x24c+4265-0x1275))?
(0x17a4+268-0x18b0):(0x1ca7+772-0x1faa));lIIlIllIl(lIIII,IllIlll);if(lIIII->
lIIlIlII){IlIlI->IIlIII=IIlIllllI;spin_unlock_irqrestore(&IlIlI->lIIIll,flags);}
else{IlIlI->IIlIII=lIllllll;IllIllIl(lIIII);spin_unlock_irqrestore(&IlIlI->
lIIIll,flags);IlIllIIII(lIIII,IlIIl);}IIlIl->IlIll.IlllII.lIlIl=sizeof(IIlIl->
IlIll);IIlIl->IlIll.IlllII.Status=(0x4a0+6756-0x1f04);
IIIIIl(lIlII,(0x119d+4608-0x239d));}else{spin_unlock_irqrestore(&IlIlI->lIIIll,
flags);lllIIII(lIlII,-ENOMEM,IlIIl);IIIIIl(lIlII,-ENOMEM);}return
(0x861+7062-0x23f6);
}else{IlllI(
"\x21\x21\x21\x21\x20\x53\x6b\x69\x70\x20\x6e\x6f\x6e\x2d\x43\x4f\x4d\x4d\x41\x4e\x44" "\n"
);




spin_unlock_irqrestore(&IlIlI->lIIIll,flags);return-(0x671+6665-0x2079);
}}else if(IlIlI->IIlIII==IIlIllllI){


if(llIlIllll(lIlII)){IlllI(
"\x21\x21\x21\x21\x20\x44\x41\x54\x41\x20\x64\x65\x74\x65\x63\x74\x65\x64" "\n")
;lIIII->llIlllIII=IIlIl->IIIlI.lIIlIl;lIIII->IllIIl=lIlII;IlIlI->IIlIII=lIllllll
;IllIllIl(lIIII);spin_unlock_irqrestore(&IlIlI->lIIIll,flags);
IlIllIIII(lIIII,IlIIl);return(0x2e8+6553-0x1c80);
}else{IlllI(
"\x21\x21\x21\x21\x20\x49\x6e\x76\x61\x6c\x69\x64\x20\x44\x41\x54\x41" "\n");
IlIlI->IIlIII=lIllllll;}}else if(IlIlI->IIlIII==lIllllll){if(lIIII->IllIIl==NULL
&&
lIIlIllll(lIlII)){IlllI(
"\x21\x21\x21\x21\x20\x53\x54\x41\x54\x55\x53\x20\x64\x65\x74\x65\x63\x74\x65\x64" "\n"
);lIIII->IllIIIlI=IIlIl->IIIlI.lIIlIl;lIIII->IlIllI=lIlII;if(lIIII->status!=-
EINPROGRESS){int status=lIIII->status;if(IlllllIIl(lIIII)){IlIlI->IIlIII=
llllIIII;}else{IlIlI->IIlIII=IlIlIIl;}lIIII->IlIllI=NULL;spin_unlock_irqrestore(
&IlIlI->lIIIll,flags);IIIIIl(lIlII,status);}else{IlIlI->IIlIII=lllIlIllI;
spin_unlock_irqrestore(&IlIlI->lIIIll,flags);}return(0x1865+1496-0x1e3c);
}else{IlllI(
"\x21\x21\x21\x21\x20\x49\x6e\x76\x61\x6c\x69\x64\x20\x53\x54\x41\x54\x55\x53" "\n"
);
IlIlI->IIlIII=IlIlIIl;}}else if(IlIlI->IIlIII==lllIlIllI){


IlIlI->IIlIII=IlIlIIl;}spin_unlock_irqrestore(&IlIlI->lIIIll,flags);lllIIII(
lIlII,-EPIPE,IlIIl);IIIIIl(lIlII,-EPIPE);return(0xd7a+2319-0x1688);
}int IIlIIlIII(struct IIlII*lIlII){struct llIII*IlIlI=lIlII->IlIlI;IllII IIlIl=(
IllII)(lIlII+(0x419+1509-0x9fd));struct lllllIlI*IllIlll;if(lIlII->lIIIII!=
lIllIll){
return(0x18d2+2091-0x20fd);}IllIlll=lIlII->Illlll.IllIl;if(IllIlll&&lIlII->
endpoint==IlIlI->lIlIIlIl&&IIlIl->IlIll.IIllI==sizeof(struct lllllIlI)&&
le32_to_cpu(IllIlll->lIIIlIIIl)==1128420181){return(0xb4f+6078-0x230c);}return
(0xdd0+4128-0x1df0);}int llIlIllll(struct IIlII*lIlII){struct llIII*IlIlI=lIlII
->IlIlI;IllII IIlIl=(IllII)(lIlII+(0x1aef+1579-0x2119));if((IIlIl->IlIll.IIllI>=
IlIlI->IIllIII->lIIlIlII)&&((IlIlI->IIllIII->IlIllIlI&&(lIlII->endpoint==IlIlI->
lIlIIlIl))||(!IlIlI->IIllIII->IlIllIlI&&(lIlII->endpoint==IlIlI->IIlllIlI)))){
return(0x454+1861-0xb98);}return(0x866+1270-0xd5c);}int lIIlIllll(struct IIlII*
lIlII){struct llIII*IlIlI=lIlII->IlIlI;IllII IIlIl=(IllII)(lIlII+
(0x17d9+1495-0x1daf));if((lIlII->endpoint==IlIlI->IIlllIlI)&&IIlIl->IlIll.IIllI
>=sizeof(struct llIIIIlIl)){return(0xad0+3918-0x1a1d);}return(0x6b2+5620-0x1ca6)
;}struct IIIllI*llllllllI(struct llIII*IlIlI,gfp_t IlIIl){struct IIIllI*lIIII=
lIlIlll(sizeof(*lIIII),IlIIl);if(lIIII){memset(lIIII,(0x2a3+9097-0x262c),sizeof(
*lIIII));kref_init(&lIIII->lIIlll);lIIII->IlIlI=IlIIlIII(IlIlI);lIIII->ep_in=
IlIlI->IIlllIlI;lIIII->ep_out=IlIlI->lIlIIlIl;lIIII->status=-EINPROGRESS;lIIII->
lIlll=lIlllIl((0x6c2+3552-0x14a2),IlIIl);if(likely(lIIII->lIlll)){lIIII->IllIl=
lIlIlll(lIlIIIIIl,IlIIl);if(likely(lIIII->IllIl)){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IIIllIllI);
#endif
return lIIII;}lIllIIlI(lIIII->lIlll);}IlIIIl(lIIII);}return NULL;}void IIllIIllI
(struct IIIllI*lIIII){lIIII->lIIIlllll=(0x118f+3429-0x1ef4);lIIII->llIlllIII=
(0x982+1474-0xf44);lIIII->IllIIIlI=(0x23c3+159-0x2462);lIIII->IllIIl=NULL;lIIII
->IlIllI=NULL;lIIII->lIIlIlII=(0x4ac+2277-0xd91);lIIII->IlIllIlI=
(0x33a+2069-0xb4f);lIIII->status=-EINPROGRESS;lIIII->IIlllllI=
(0x14cc+3247-0x217b);lIIII->llIlIlI=(0x499+5109-0x188e);lIIII->lIllIIl=
(0xf0f+2883-0x1a52);}void llllIlIII(struct kref*IIIIllI){struct IIIllI*lIIII=
container_of(IIIIllI,struct IIIllI,lIIlll);struct llIII*IlIlI=lIIII->IlIlI;if(
lIIII->IllIIl){IlllI(
"\x21\x21\x21\x21\x20\x66\x72\x65\x65\x3a\x20\x64\x61\x74\x61\x20\x65\x78\x69\x73\x74\x73" "\n"
);lIIII->IllIIl->llIlIlI=lIIII->llIlIlI;lIIII->IllIIl->lIllIIl=lIIII->lIllIIl;
lllIIII(lIIII->IllIIl,-ECONNRESET,GFP_ATOMIC);IIIIIl(lIIII->IllIIl,-ECONNRESET);
}if(lIIII->IlIllI){IlllI("!!!! free: ûtatus exists\n");lIIII->IlIllI->llIlIlI=
lIIII->llIlIlI;lIIII->IlIllI->lIllIIl=lIIII->lIllIIl;lllIIII(lIIII->IlIllI,-
ECONNRESET,GFP_ATOMIC);IIIIIl(lIIII->IlIllI,-ECONNRESET);}lIllIIlI(lIIII->lIlll)
;IlIIIl(lIIII->IllIl);IlIIIl(lIIII);IlIllIl(IlIlI);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IIIIlllll);
#endif
IlllI(
"\x21\x21\x21\x21\x20\x4d\x61\x73\x73\x53\x74\x6f\x72\x61\x67\x65\x46\x72\x65\x65\x54\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e" "\n"
);}static inline void IllIllIl(struct IIIllI*lIIII){kref_get(&lIIII->lIIlll);}
static inline void IIIIlIl(struct IIIllI*lIIII){kref_put(&lIIII->lIIlll,
llllIlIII);}void lIIlIllIl(struct IIIllI*lIIII,struct lllllIlI*IllIlll){struct 
llIII*IlIlI=lIIII->IlIlI;memcpy(lIIII->IllIl,IllIlll,sizeof(struct lllllIlI));
#if KERNEL_GT_EQ((0x5a7+2484-0xf59),(0x669+1477-0xc28),(0x1df6+2041-0x25d0))
lIIII->lIlll->sg=NULL;lIIII->lIlll->num_sgs=(0x494+2622-0xed2);
#endif
#if KERNEL_GT_EQ((0x1d0+8251-0x2208),(0xb98+3956-0x1b09),(0x78d+6678-0x21a3))
lIIII->lIlll->num_mapped_sgs=(0x1187+3707-0x2002);
#endif
lIIII->lIlll->transfer_dma=(0xec6+2704-0x1956);usb_fill_bulk_urb(lIIII->lIlll,
IlIlI->IIlll,usb_sndbulkpipe(IlIlI->IIlll,lIIII->ep_out&USB_ENDPOINT_NUMBER_MASK
),lIIII->IllIl,sizeof(struct lllllIlI),lIIlIIlII,lIIII);lIIII->lIlll->
transfer_flags&=~URB_SHORT_NOT_OK;}void lIllIIII(struct IIIllI*lIIII){struct 
llIII*IlIlI=lIIII->IlIlI;struct IIlII*lIlII=lIIII->IllIIl;IllII IIlIl=(IllII)(
lIlII+(0x134+942-0x4e1));int pipe=(IIlIl->IlIll.Flags&lIllII)?usb_rcvbulkpipe(
lIlII->IlIlI->IIlll,IIlIl->IlIll.Endpoint):usb_sndbulkpipe(lIlII->IlIlI->IIlll,
IIlIl->IlIll.Endpoint);
#if KERNEL_GT_EQ((0x824+6678-0x2238),(0x22f6+765-0x25ed),(0xb4a+692-0xddf))
lIIII->lIlll->sg=NULL;lIIII->lIlll->num_sgs=(0x12b+6320-0x19db);
#endif
#if KERNEL_GT_EQ((0xc7+468-0x298),(0xc9+7749-0x1f0b),(0x3e4+4782-0x1692))
lIIII->lIlll->num_mapped_sgs=(0xab4+2591-0x14d3);
#endif
lIIII->lIlll->transfer_dma=(0xf11+5158-0x2337);switch(lIlII->lIIIII){case 
lIllIll:usb_fill_bulk_urb(lIIII->lIlll,IlIlI->IIlll,pipe,lIlII->Illlll.IllIl,
IIlIl->IlIll.IIllI,IIIIlllI,lIIII);break;case IllIIlI:usb_fill_bulk_urb(lIIII->
lIlll,IlIlI->IIlll,pipe,lIlII->llllII.lIIIlI->IlllIl[lIIII->IIlllllI].
transfer_buffer,lIlII->llllII.lIIIlI->IlllIl[lIIII->IIlllllI].
transfer_buffer_length,IIIIlllI,lIIII);break;
#if KERNEL_GT_EQ((0xac9+3087-0x16d6),(0x1c9+678-0x469),(0x2304+982-0x26bb))
case llIllII:usb_fill_bulk_urb(lIIII->lIlll,IlIlI->IIlll,pipe,NULL,IIlIl->IlIll.
IIllI,IIIIlllI,lIIII);lIIII->lIlll->sg=lIlII->IIIIIIl.sg.lIIIlll;lIIII->lIlll->
num_sgs=lIlII->IIIIIIl.sg.num_sgs;break;
#endif
}if(IIlIl->IlIll.Flags&lIllII){if((IIlIl->IlIll.Flags&lllllII)==
(0x14e2+564-0x1716)){lIIII->lIlll->transfer_flags|=URB_SHORT_NOT_OK;}else{lIIII
->lIlll->transfer_flags&=~URB_SHORT_NOT_OK;}}}void lIlIIlll(struct IIIllI*lIIII)
{struct llIII*IlIlI=lIIII->IlIlI;
#if KERNEL_GT_EQ((0xa7b+2186-0x1303),(0x879+7518-0x25d1),(0x3ff+3218-0x1072))
lIIII->lIlll->sg=NULL;lIIII->lIlll->num_sgs=(0x752+3752-0x15fa);
#endif
#if KERNEL_GT_EQ((0xbd0+216-0xca5),(0x14d1+709-0x1793),(0x96b+2073-0x1184))
lIIII->lIlll->num_mapped_sgs=(0x411+8485-0x2536);
#endif
lIIII->lIlll->transfer_dma=(0x128+4668-0x1364);usb_fill_bulk_urb(lIIII->lIlll,
IlIlI->IIlll,usb_rcvbulkpipe(IlIlI->IIlll,lIIII->ep_in&USB_ENDPOINT_NUMBER_MASK)
,lIIII->IllIl,lIlIIIIIl,IIIlIIllI,lIIII);lIIII->lIlll->transfer_flags&=~
URB_SHORT_NOT_OK;}static inline void IlIllIIII(struct IIIllI*lIIII,gfp_t IlIIl){
int status=usb_submit_urb(lIIII->lIlll,IlIIl);if(status<(0x186c+933-0x1c11)){
IIIlIIIll(lIIII,status,IlIIl);IIIIlIl(lIIII);}}static inline void lllIlIIII(
struct IIIllI*lIIII,gfp_t IlIIl){int status=usb_submit_urb(lIIII->lIlll,IlIIl);
if(status<(0xe33+3782-0x1cf9)){lllllIIll(lIIII,status,IlIIl);IIIIlIl(lIIII);}}
static inline void llIIllIII(struct IIIllI*lIIII,gfp_t IlIIl){int status=
usb_submit_urb(lIIII->lIlll,IlIIl);if(status<(0x108a+2201-0x1923)){lIIlIllI(
lIIII,status,IlIIl);IIIIlIl(lIIII);}}void IIIlIIIll(struct IIIllI*lIIII,int 
status,gfp_t IlIIl){struct llIII*IlIlI=lIIII->IlIlI;unsigned long flags;
spin_lock_irqsave(&IlIlI->lIIIll,flags);if(IlIlI->IIllIII!=lIIII){



spin_unlock_irqrestore(&IlIlI->lIIIll,flags);IlllI(
"\x21\x21\x21\x21\x20\x43\x4f\x4d\x4d\x41\x4e\x44\x20\x63\x61\x6e\x63\x65\x6c\x6c\x65\x64" "\n"
);}else if(status==(0x1546+413-0x16e3)){





if(lIIII->lIIlIlII==(0x1138+3618-0x1f5a)){lIlIIlll(lIIII);IllIllIl(lIIII);}else{
lIllIIII(lIIII);IllIllIl(lIIII);}spin_unlock_irqrestore(&IlIlI->lIIIll,flags);if
(lIIII->lIIlIlII==(0x306+7719-0x212d)){llIIllIII(lIIII,IlIIl);}else{lllIlIIII(
lIIII,IlIIl);}}else
{struct IIlII*IllIIl;struct IIlII*IlIllI;

IllIIl=lIIII->IllIIl;lIIII->IllIIl=NULL;IlIllI=lIIII->IlIllI;lIIII->IlIllI=NULL;
if(IlIlI->IIlIII!=IlIlIIl){IlIlI->IIlIII=IIIllIlI;}spin_unlock_irqrestore(&IlIlI
->lIIIll,flags);if(IllIIl){lllIIII(IllIIl,status,IlIIl);IIIIIl(IllIIl,status);}
if(IlIllI){lllIIII(IlIllI,status,IlIIl);IIIIIl(IlIllI,status);}}}void lllllIIll(
struct IIIllI*lIIII,int status,gfp_t IlIIl){struct llIII*IlIlI=lIIII->IlIlI;
struct IIlII*IllIIl=lIIII->IllIIl;IllII IIIIllll=(IllII)(IllIIl+
(0x1346+3384-0x207d));unsigned long flags;
if(lIIII->IIlllllI==(0x108f+4754-0x2321)){IIIIllll->IlIll.IIllI=lIIII->lIlll->
actual_length;}else{IIIIllll->IlIll.IIllI+=lIIII->lIlll->actual_length;}
if(usb_pipein(lIIII->lIlll->pipe)){IIIIllll->IIIlI.lIlIl=sizeof(IIIIllll->IlIll)
+IIIIllll->IlIll.IIllI;}else{IIIIllll->IIIlI.lIlIl=sizeof(IIIIllll->IlIll);}
if(IllIIl->lIIIII==IllIIlI){IllIIl->llllII.lIIIlI->IlllIl[lIIII->IIlllllI].
actual_length=lIIII->lIlll->actual_length;}IIIIllll->IlIll.IlllII.Status=status;
spin_lock_irqsave(&IlIlI->lIIIll,flags);if(IlIlI->IIllIII!=lIIII){



IlllI(
"\x21\x21\x21\x21\x20\x44\x41\x54\x41\x20\x63\x61\x6e\x63\x65\x6c\x6c\x65\x64" "\n"
);spin_unlock_irqrestore(&IlIlI->lIIIll,flags);}else if(status==
(0x959+1713-0x100a)){




if(IllIIl->lIIIII==IllIIlI){lIIII->IIlllllI++;if((lIIII->lIlll->actual_length==
lIIII->lIlll->transfer_buffer_length)&&(lIIII->IIlllllI<IllIIl->llllII.lIIIlI->
llIIl)){
IllIIl=NULL;

lIllIIII(lIIII);IllIllIl(lIIII);}else{

lIIII->IllIIl=NULL;
lIlIIlll(lIIII);IllIllIl(lIIII);}}else{
lIIII->IllIIl=NULL;
lIlIIlll(lIIII);IllIllIl(lIIII);}spin_unlock_irqrestore(&IlIlI->lIIIll,flags);if
(IllIIl){
IIIIIl(IllIIl,(0x137+1594-0x771));
llIIllIII(lIIII,IlIIl);}else{lllIlIIII(lIIII,IlIIl);}}else
{
lIIII->IllIIl=NULL;if(IlIlI->IIlIII!=IlIlIIl){IlIlI->IIlIII=IIIllIlI;}
spin_unlock_irqrestore(&IlIlI->lIIIll,flags);if(IllIIl){
IIIIIl(IllIIl,status);}}}void lIIlIllI(struct IIIllI*lIIII,int status,gfp_t 
IlIIl){struct llIII*IlIlI=lIIII->IlIlI;unsigned long flags;spin_lock_irqsave(&
IlIlI->lIIIll,flags);if(IlIlI->IIllIII!=lIIII){



IlllI(
"\x21\x21\x21\x21\x20\x53\x54\x41\x54\x55\x53\x20\x63\x61\x6e\x63\x65\x6c\x6c\x65\x64" "\n"
);spin_unlock_irqrestore(&IlIlI->lIIIll,flags);}else{struct IIlII*IlIllI=NULL;





lIIII->status=status;

if(lIIII->IlIllI){if(IlllllIIl(lIIII)){if(IlIlI->IIlIII!=IlIlIIl){IlIlI->IIlIII=
llllIIII;}}else{IlIlI->IIlIII=IlIlIIl;}IlIllI=lIIII->IlIllI;lIIII->IlIllI=NULL;}
spin_unlock_irqrestore(&IlIlI->lIIIll,flags);if(IlIllI){IIIIIl(IlIllI,status);}}
}static void lIIlIIlII(struct urb*lIlll
#if KERNEL_LT((0xb10+4811-0x1dd9),(0x3cf+3393-0x110a),(0xa6c+2504-0x1421))
,struct pt_regs*IIlllIl
#endif
){struct IIIllI*lIIII=lIlll->context;IlllI(
"\x21\x21\x21\x21\x20\x43\x4f\x4d\x4d\x41\x4e\x44\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x2d\x20\x73\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,lIlll->status);
IIIlIIIll(lIIII,lIlll->status,GFP_ATOMIC);IIIIlIl(lIIII);}static void IIIIlllI(
struct urb*lIlll
#if KERNEL_LT((0xb82+5871-0x226f),(0x776+6384-0x2060),(0x9a1+3296-0x166e))
,struct pt_regs*IIlllIl
#endif
){struct IIIllI*lIIII=lIlll->context;IlllI(
"\x21\x21\x21\x21\x20\x44\x41\x54\x41\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x2d\x20\x73\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,lIlll->status);
lllllIIll(lIIII,lIlll->status,GFP_ATOMIC);IIIIlIl(lIIII);}static void IIIlIIllI(
struct urb*lIlll
#if KERNEL_LT((0xeea+2634-0x1932),(0x1135+1762-0x1811),(0x1d1b+2200-0x25a0))
,struct pt_regs*IIlllIl
#endif
){struct IIIllI*lIIII=lIlll->context;IlllI(
"\x21\x21\x21\x21\x20\x53\x54\x41\x54\x55\x53\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x2d\x20\x73\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,lIlll->status);
lIIlIllI(lIIII,lIlll->status,GFP_ATOMIC);IIIIlIl(lIIII);}int IlllllIIl(struct 
IIIllI*lIIII){IllII IIlIl=(IllII)(lIIII->IlIllI+(0xe68+1813-0x157c));
if(IIlIl->IlIll.IIllI>=lIIII->lIlll->actual_length){IIlIl->IlIll.IIllI=lIIII->
lIlll->actual_length;IIlIl->IlIll.IlllII.lIlIl=sizeof(IIlIl->IlIll)+IIlIl->IlIll
.IIllI;IIlIl->IlIll.IlllII.Status=lIIII->status;memcpy(lIIII->IlIllI->Illlll.
IllIl,lIIII->IllIl,lIIII->lIlll->actual_length);return(0x1435+3145-0x207d);}


IIlIl->IlIll.IlllII.lIlIl=sizeof(IIlIl->IlIll)+IIlIl->IlIll.IIllI;IIlIl->IlIll.
IlllII.Status=-EOVERFLOW;memcpy(lIIII->IlIllI->Illlll.IllIl,lIIII->IllIl,IIlIl->
IlIll.IIllI);return(0xf89+4104-0x1f91);}
#endif 

