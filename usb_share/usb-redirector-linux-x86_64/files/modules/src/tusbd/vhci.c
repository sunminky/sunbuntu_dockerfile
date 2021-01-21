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
#include <linux/platform_device.h>
#include <linux/dma-mapping.h>
#include <linux/kernel.h>
#include <linux/highmem.h>
#include <asm/page.h>
#include <asm/unaligned.h>
struct IIIIII*IIllllIl=NULL;struct usb_hcd*llIIIIl=NULL;
#if KERNEL_GT_EQ((0x14b2+3217-0x2141),(0x1326+1102-0x176e),(0x77c+1-0x756)) || \
RHEL_RELEASE_GT_EQ((0x178c+2370-0x20c8),(0x15cb+886-0x193e)) 
struct usb_hcd*IllIIII=NULL;
#define IlllIlI(IllIll) (((IllIll)->speed == HCD_USB3) ? "\x75\x73\x62\x33" : \
"\x75\x73\x62\x32")
#else
#define IlllIlI(IllIll) "\x55\x53\x42\x32"
#endif
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)
int IlllIIII=(0x297+1277-0x794);
#endif
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t lIlIllIII;extern atomic_t llIlIlIll;extern atomic_t IIIIIllII;
extern atomic_t llIIIlIl;extern atomic_t IlIlIllll;
#endif 


static int IIlllIIIl(struct platform_device*);static int IIIlIIlll(struct 
platform_device*);static void IllIlIlII(struct device*dev);static int lIllIIIll(
struct usb_hcd*llIlI);static int lIlIlllII(struct usb_hcd*llIlI);static void 
llIlIlIIl(struct usb_hcd*llIlI);static int lllllIIIl(struct usb_hcd*llIlI);
#if KERNEL_LT((0x7f1+2371-0x1132),(0x46f+7974-0x238f),(0x1a20+8-0x1a10))
static int IIllIIII(struct usb_hcd*llIlI,struct urb*urb);static int IIlllIIl(
struct usb_hcd*llIlI,struct usb_host_endpoint*ep,struct urb*urb,gfp_t IlIIl);
#else
static int IIllIIII(struct usb_hcd*llIlI,struct urb*urb,int status);static int 
IIlllIIl(struct usb_hcd*llIlI,struct urb*urb,gfp_t IlIIl);
#endif
static void IlIIIIIlI(struct usb_hcd*llIlI,struct usb_host_endpoint*ep);static 
int IllIIIlll(struct usb_hcd*llIlI,u16 IIIlIllll,u16 wValue,u16 wIndex,char*
IIIIl,u16 wLength);static int IIIlllIIl(struct usb_hcd*llIlI,char*IIIIl);static 
int IIlIIllIl(struct usb_hcd*llIlI);static int lIlIlIlll(struct usb_hcd*llIlI);
#if KERNEL_GT_EQ((0x864+1378-0xdc4),(0x1a69+1367-0x1fba),(0xaa6+4364-0x1b8b)) ||\
 RHEL_RELEASE_GT_EQ((0x109c+5282-0x2538),(0x80a+451-0x9ca)) 
static int llIlIIllI(struct usb_hcd*llIlI,struct usb_device*IlIII,struct 
usb_host_endpoint**lIIIIIIlI,unsigned int IIIIIlIlI,unsigned int lIllllllI,gfp_t
 IlIIl);static int llIIlIIll(struct usb_hcd*llIlI,struct usb_device*IlIII,struct
 usb_host_endpoint**lIIIIIIlI,unsigned int IIIIIlIlI,gfp_t IlIIl);
#endif
static int Illllllll(struct IIllIl*Illll,int lIIlI,int llIlIIl,int IIlIIII);
static int lIlllllII(struct IIllIl*Illll,int lIIlI,int llIlIIl);static void 
lIlIIlI(struct IIllIl*Illll,int lIIlI,int IlIlIII);static void IIlIlII(struct 
IIllIl*Illll,int lIIlI,int IIlllI,int IIlIIII);
#if KERNEL_GT_EQ((0xa42+2616-0x1478),(0xfe2+1110-0x1432),(0x3dc+4241-0x1446)) ||\
 RHEL_RELEASE_GT_EQ((0xc78+2816-0x1772),(0x451+5983-0x1bad)) 
static int llIlIIlII(struct IIllIl*Illll,int lIIlI,int llIlIIl,int IIlIIII);
static int llIIIIllI(struct IIllIl*Illll,int lIIlI,int llIlIIl);static void 
IllIlIl(struct IIllIl*Illll,int lIIlI,int IIlllI,int IIlIIII);static void 
llIIIlI(struct IIllIl*Illll,int lIIlI,int IlIlIII);static void llllIII(struct 
IIllIl*Illll,int lIIlI,int llIllIIll);
#endif
#define lllllIl(llIlI) ((struct IIllIl*)(llIlI->hcd_priv))
static struct platform_driver IllIllll={.probe=IIlllIIIl,.remove=IIIlIIlll,.
driver={.name=lllllll,.owner=THIS_MODULE,},};static struct platform_device 
lIIllllI={.name=lllllll,.id=-(0x2cb+4769-0x156b),.dev={
.release=IllIlIlII,},};static struct hc_driver lIllIIlll={.description=lllllll,.
product_desc=
"\x56\x69\x72\x74\x75\x61\x6c\x20\x55\x53\x42\x20\x48\x6f\x73\x74\x20\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72"
,.hcd_priv_size=sizeof(struct IIllIl),
#if KERNEL_GT_EQ((0x246b+268-0x2575),(0x1ba2+1630-0x21fa),(0xcff+3816-0x1bc0)) \
|| RHEL_RELEASE_GT_EQ((0x694+5568-0x1c4e),(0x1015+4539-0x21cd)) 
.flags=HCD_USB3|HCD_SHARED,
#else
.flags=HCD_USB2,
#endif
.reset=lIllIIIll,.start=lIlIlllII,.stop=llIlIlIIl,.urb_enqueue=IIlllIIl,.
urb_dequeue=IIllIIII,.endpoint_disable=IlIIIIIlI,.get_frame_number=lllllIIIl,.
hub_status_data=IIIlllIIl,.hub_control=IllIIIlll,.bus_suspend=IIlIIllIl,.
bus_resume=lIlIlIlll,
#if KERNEL_GT_EQ((0x661+1920-0xddf),(0x373+4267-0x1418),(0x1649+3212-0x22ae)) ||\
 RHEL_RELEASE_GT_EQ((0x974+4011-0x1919),(0x19c3+3151-0x260f)) 
.alloc_streams=llIlIIllI,.free_streams=llIIlIIll,
#endif
};static struct list_head lIIlIIl;static spinlock_t lIIIIl;
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)
#  if KERNEL_LT((0xaf5+3132-0x172f),(0x142c+1715-0x1ad9),(0x1653+1177-0x1ad4))
static u64 lIlIllIIl=DMA_32BIT_MASK;
#  else
static u64 lIlIllIIl=DMA_BIT_MASK((0xc99+1921-0x13fa));
#  endif
#endif
static int IIlllIIIl(struct platform_device*IlIlII){struct IIllIl*Illll;int 
IIIll=(0x10f+5938-0x1841);int i;IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x70\x72\x6f\x62\x65\x3a\x20\x2b\x2b" "\n"
);do{
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)
if(IlllIIII)IlIlII->dev.dma_mask=&lIlIllIIl;
#endif

llIIIIl=usb_create_hcd(&lIllIIlll,&IlIlII->dev,lIllll(&IlIlII->dev));if(llIIIIl
==NULL){IIIll=-ENOMEM;break;}
#if KERNEL_GT_EQ((0x19f9+1500-0x1fd3),(0x17ed+1365-0x1d3c),(0x33b+7635-0x20f4))
llIIIIl->has_tt=(0x1447+1646-0x1ab4);
#endif
Illll=lllllIl(llIIIIl);memset(Illll,(0x6ec+6723-0x212f),sizeof(*Illll));Illll->
llIlI=llIIIIl;spin_lock_init(&Illll->lock);for(i=(0xcbc+4791-0x1f73);i<lIIllII;i
++){IIlIlII(Illll,i,IlIlIIIl,(0xd1c+3950-0x1c8a));}IIIll=usb_add_hcd(llIIIIl,
(0x1092+2065-0x18a3),(0x4b+3038-0xc29));if(IIIll!=(0x21e5+102-0x224b)){break;}
#if KERNEL_GT_EQ((0xa47+5310-0x1f03),(0x660+6813-0x20f7),(0x452+496-0x61b)) || \
RHEL_RELEASE_GT_EQ((0x49c+211-0x569),(0x646+7840-0x24e3)) 

IllIIII=usb_create_shared_hcd(&lIllIIlll,&IlIlII->dev,lIllll(&IlIlII->dev),
llIIIIl);if(IllIIII==NULL){IIIll=-ENOMEM;break;}Illll=lllllIl(IllIIII);memset(
Illll,(0x8e9+1857-0x102a),sizeof(*Illll));Illll->llIlI=IllIIII;spin_lock_init(&
Illll->lock);for(i=(0x9f3+1573-0x1018);i<lIIllII;i++){IllIlIl(Illll,i,IlIlIIIl,
(0x7fc+2488-0x11b4));}IIIll=usb_add_hcd(IllIIII,(0xc82+3358-0x19a0),
(0x4b+8603-0x21e6));if(IIIll!=(0x208+155-0x2a3)){break;}lllllIl(llIIIIl)->
lIIIllll=IllIIII;lllllIl(IllIIII)->lIIIllll=llIIIIl;
#endif 
}while((0x2d1+3463-0x1058));if(IIIll!=(0x1a71+2808-0x2569)){if(llIIIIl){
usb_put_hcd(llIIIIl);llIIIIl=NULL;}
#if KERNEL_GT_EQ((0x1769+1631-0x1dc6),(0x1295+4204-0x22fb),(0x12c2+2802-0x1d8d))\
 || RHEL_RELEASE_GT_EQ((0x9d5+4944-0x1d1f),(0xf17+585-0x115d)) 
if(IllIIII){usb_put_hcd(IllIIII);IllIIII=NULL;}
#endif
}IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x70\x72\x6f\x62\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64" "\n"
,IIIll);return IIIll;}static int IIIlIIlll(struct platform_device*IlIlII){struct
 usb_hcd*llIlI=platform_get_drvdata(IlIlII);struct IIllIl*Illll=lllllIl(llIlI);
IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x72\x65\x6d\x6f\x76\x65\x5b\x25\x73\x5d\x3a\x20\x2b\x2b" "\n"
,IlllIlI(llIlI));if(Illll->lIIIllll){usb_remove_hcd(Illll->lIIIllll);usb_put_hcd
(Illll->lIIIllll);Illll->lIIIllll=NULL;}usb_remove_hcd(llIlI);usb_put_hcd(llIlI)
;IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x72\x65\x6d\x6f\x76\x65\x3a\x20\x2d\x2d" "\n"
);return(0x661+264-0x769);}static void IllIlIlII(struct device*dev){return;}
static int lIllIIIll(struct usb_hcd*llIlI){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x72\x65\x73\x65\x74\x5b\x25\x73\x5d" "\n"
,IlllIlI(llIlI));


#if KERNEL_GT_EQ((0x1c9c+491-0x1e85),(0x515+5701-0x1b54),(0x849+7583-0x25c1)) ||\
 RHEL_RELEASE_GT_EQ((0xcd0+3009-0x188b),(0xf75+2815-0x1a71)) 
if(usb_hcd_is_primary_hcd(llIlI)){
IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x72\x65\x73\x65\x74\x3a\x20\x73\x65\x74\x74\x69\x6e\x67\x20\x75\x70\x20\x55\x53\x42\x32\x20\x68\x63\x64" "\n"
);llIlI->speed=HCD_USB2;llIlI->self.root_hub->speed=USB_SPEED_HIGH;}
#endif
return(0xfe7+5855-0x26c6);}static int lIlIlllII(struct usb_hcd*llIlI){int i;
IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x73\x74\x61\x72\x74\x5b\x25\x73\x5d" "\n"
,IlllIlI(llIlI));llIlI->power_budget=(0x18b3+196-0x1977);llIlI->state=
HC_STATE_RUNNING;llIlI->uses_new_polling=(0x194+4683-0x13de);for(i=
(0x186d+2202-0x2107);i<lIIllII;i++){
#if KERNEL_GT_EQ((0x858+4472-0x19ce),(0xa1a+1169-0xea5),(0x1854+178-0x18df)) || \
RHEL_RELEASE_GT_EQ((0x8fd+949-0xcac),(0x12ed+4954-0x2644)) 
if(llIlI->speed==HCD_USB3){IllIlIl(lllllIl(llIlI),i,IIIlllll,(0x5a4+3250-0x1256)
);}else
#endif
{IIlIlII(lllllIl(llIlI),i,IIIlllll,(0x882+5410-0x1da4));}}return
(0x9d9+1560-0xff1);}static void llIlIlIIl(struct usb_hcd*llIlI){int i;IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x73\x74\x6f\x70\x5b\x25\x73\x5d" "\n",
IlllIlI(llIlI));for(i=(0xb0+2915-0xc13);i<lIIllII;i++){
#if KERNEL_GT_EQ((0x1c90+1644-0x22fa),(0x13f8+1414-0x1978),(0x6bc+2463-0x1034)) \
|| RHEL_RELEASE_GT_EQ((0xb6a+6297-0x23fd),(0x319+7532-0x2082)) 
if(llIlI->speed==HCD_USB3){IllIlIl(lllllIl(llIlI),i,lIllllIl,(0x1c2+2489-0xb7b))
;}else
#endif
{IIlIlII(lllllIl(llIlI),i,lIllllIl,(0xbb3+6832-0x2663));}}}static int lllllIIIl(
struct usb_hcd*llIlI){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x67\x65\x74\x5f\x66\x72\x61\x6d\x65\x5f\x6e\x75\x6d\x62\x65\x72\x5b\x25\x73\x5d" "\n"
,IlllIlI(llIlI));return(0xdb7+1633-0x1418);}int IlIlIlIIl(struct IlIlIl*lIllI,
struct llIIIl**IIlIlllI,struct urb*lIlll){IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x75\x72\x62\x3d\x25\x70" "\n"
,lIlll);if(*IIlIlllI){struct IlIIIll*llIIll;IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x65\x78\x69\x73\x74\x69\x6e\x67\x20\x70\x76\x72\x65\x71" "\n"
);llIIll=lIlIlll(sizeof(struct IlIIIll),GFP_ATOMIC);if(llIIll){llIIll->lIlll=
lIlll;list_add_tail(&llIIll->lIlIII,&(*IIlIlllI)->IIIllIl);}else{IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79\x20\x66\x6f\x72\x20\x75\x72\x62\x5f\x6c\x69\x73\x74" "\n"
);return-ENOMEM;}}else{IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x6e\x65\x77\x20\x70\x76\x72\x65\x71" "\n"
);*IIlIlllI=llIlllll(lIllI,GFP_ATOMIC);if(*IIlIlllI==NULL){IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79\x20\x66\x6f\x72\x20\x71\x75\x65\x75\x65\x5f\x65\x6e\x74\x72\x79" "\n"
);return-ENOMEM;}else{(*IIlIlllI)->urb.lIlll=lIlll;list_add_tail(&(*IIlIlllI)->
urb.lIlIII,&(*IIlIlllI)->IIIllIl);}}return(0x1502+607-0x1761);}
#if KERNEL_LT((0x127d+4313-0x2354),(0x921+7011-0x247e),(0x2167+277-0x2264))
static int IIlllIIl(struct usb_hcd*llIlI,struct usb_host_endpoint*ep,struct urb*
urb,gfp_t IlIIl)
#else
static int IIlllIIl(struct usb_hcd*llIlI,struct urb*urb,gfp_t IlIIl)
#endif
{int IIIll=-EINPROGRESS;struct IIllIl*Illll=lllllIl(llIlI);struct IlIlIl*lIllI=
NULL;struct llIIIl*lIIll=NULL;unsigned long flags;int llIlIlllI=
(0x4c3+2783-0xfa2);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x5b\x25\x73\x5d\x3a\x20\x2b\x2b\x20\x75\x72\x62\x3d\x30\x78\x25\x70\x20\x75\x73\x62\x5f\x64\x65\x76\x69\x63\x65\x3d\x30\x78\x25\x70\x20\x70\x61\x72\x65\x6e\x74\x3d\x30\x78\x25\x70\x20\x64\x65\x76\x6e\x75\x6d\x3d\x25\x64\x20\x6e\x75\x6d\x5f\x73\x67\x73\x3d\x25\x64" "\n"
,IlllIlI(llIlI),urb,urb->dev,urb->dev->dev.parent,urb->dev->devnum,
#if KERNEL_GT_EQ((0xc41+5623-0x2236),(0x143c+52-0x146a),(0xcfd+3240-0x1986))
urb->num_sgs);
#else
(0x2eb+106-0x355));
#endif
lIlIIlIIl(urb,(0x48d+8104-0x2435));do
{
#if KERNEL_GT_EQ((0x24+864-0x382),(0x21da+1193-0x267d),(0x4c7+1066-0x8d9))
struct usb_host_endpoint*ep=urb->ep;
#endif
spin_lock_irqsave(&Illll->lock,flags);
#if KERNEL_GT_EQ((0x1c47+1894-0x23ab),(0x13ec+22-0x13fc),(0x1ac3+2109-0x22e8))


IIIll=usb_hcd_link_urb_to_ep(llIlI,urb);
#else
spin_lock(&urb->lock);IIIll=(urb->status==-EINPROGRESS)?(0xe7f+3355-0x1b9a):urb
->status;spin_unlock(&urb->lock);
#endif
if(IIIll!=(0x1c94+2087-0x24bb)){spin_unlock_irqrestore(&Illll->lock,flags);IlllI
(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x75\x72\x62\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x75\x6e\x6c\x69\x6e\x6b\x65\x64" "\n"
);break;}
#if KERNEL_GT_EQ((0x528+7388-0x2202),(0xe40+5867-0x2525),(0x781+6558-0x20f8)) ||\
 RHEL_RELEASE_GT_EQ((0x18cc+815-0x1bf5),(0x5c3+3727-0x144f)) 








if(llIlI->speed==HCD_USB3){
lIllI=IIIIIIIII(llIlI,urb->dev->portnum);}else
#endif
{
lIllI=IlllIIlIl(llIlI,usb_pipedevice(urb->pipe));}if(lIllI==NULL){
#if KERNEL_GT_EQ((0x1fda+1272-0x24d0),(0xa40+2199-0x12d1),(0x1bcd+2363-0x24f0))
usb_hcd_unlink_urb_from_ep(llIlI,urb);
#endif
spin_unlock_irqrestore(&Illll->lock,flags);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x64\x65\x76\x69\x63\x65\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
);IIIll=-ENODEV;break;}if(usb_pipedevice(urb->pipe)==(0x1dea+1058-0x220c)&&
usb_pipetype(urb->pipe)==PIPE_CONTROL){struct usb_ctrlrequest*lIIllI=(struct 
usb_ctrlrequest*)urb->setup_packet;if(!lIIllI){
#if KERNEL_GT_EQ((0x5ed+628-0x85f),(0x1c14+2485-0x25c3),(0x583+4122-0x1585))
usb_hcd_unlink_urb_from_ep(llIlI,urb);
#endif
spin_unlock_irqrestore(&Illll->lock,flags);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x63\x6f\x6e\x74\x72\x6f\x6c\x20\x74\x72\x61\x6e\x73\x66\x65\x72\x20\x75\x72\x62" "\n"
);IIIll=-EINVAL;break;}if(lIIllI->bRequest==USB_REQ_SET_ADDRESS){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x55\x53\x42\x5f\x52\x45\x51\x5f\x53\x45\x54\x5f\x41\x44\x44\x52\x45\x53\x53\x20\x61\x64\x64\x72\x65\x73\x73\x3d\x25\x64" "\n"
,lIIllI->wValue);lIllI->llIIIll=le16_to_cpu(lIIllI->wValue);
#if KERNEL_GT_EQ((0x4da+3869-0x13f5),(0x567+7746-0x23a3),(0xb4c+2304-0x1434))
usb_hcd_unlink_urb_from_ep(llIlI,urb);
#endif
spin_unlock(&Illll->lock);
#if KERNEL_LT((0x1a9b+2570-0x24a3),(0x1d73+507-0x1f68),(0x1d00+939-0x2093))

spin_lock(&urb->lock);if(urb->status==-EINPROGRESS)urb->status=
(0x310+5465-0x1869);spin_unlock(&urb->lock);
#else

#endif
#if KERNEL_LT((0x12e5+4836-0x25c7),(0xd28+4566-0x1ef8),(0x129d+645-0x150f))
usb_hcd_giveback_urb(lIllI->parent,urb,NULL);
#elif KERNEL_LT((0x1117+2834-0x1c27),(0x10bc+4167-0x20fd),(0xd26+5969-0x245f))
usb_hcd_giveback_urb(lIllI->parent,urb);
#else
usb_hcd_giveback_urb(lIllI->parent,urb,(0x16e4+2520-0x20bc));
#endif
local_irq_restore(flags);IIIll=(0x393+6587-0x1d4e);break;}}lIIll=ep->hcpriv;
IIIll=IlIlIlIIl(lIllI,&lIIll,urb);if(IIIll!=(0x152d+3496-0x22d5)){
#if KERNEL_GT_EQ((0xa66+1020-0xe60),(0x1d24+801-0x203f),(0xde8+2603-0x17fb))
usb_hcd_unlink_urb_from_ep(llIlI,urb);
#endif
spin_unlock_irqrestore(&Illll->lock,flags);break;}urb->hcpriv=lIIll;if((
usb_pipetype(urb->pipe)==PIPE_BULK)&&(urb->transfer_flags&URB_NO_INTERRUPT)&&((
usb_pipein(urb->pipe)&&(urb->transfer_flags&URB_SHORT_NOT_OK))||(usb_pipeout(urb
->pipe)&&!(urb->transfer_flags&URB_ZERO_PACKET)))){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x6d\x65\x72\x67\x65\x20\x73\x70\x6c\x69\x74\x74\x65\x64\x20\x75\x72\x62" "\n"
);if(ep->hcpriv==NULL){ep->hcpriv=lIIll;
spin_lock(&lIllI->IlIIll);list_add_tail(&lIIll->lIlIIl,&lIllI->IIlllII);
spin_unlock(&lIllI->IlIIll);}}else{spin_lock(&lIllI->IlIIll);if(ep->hcpriv){ep->
hcpriv=NULL;
list_del(&lIIll->lIlIIl);}list_add_tail(&lIIll->lIlIIl,&lIllI->IIIIlII);
llIlIlllI=(0x237d+839-0x26c3);spin_unlock(&lIllI->IlIIll);}
spin_unlock_irqrestore(&Illll->lock,flags);if(llIlIlllI){wake_up(&lIllI->IIIIlI)
;}IIIll=-EINPROGRESS;}while((0x1eb7+1094-0x22fd));if(lIllI){
IIlllIll(lIllI);}if(IIIll==-EINPROGRESS){
IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,(0x13b3+2039-0x1baa));return(0xdb+9262-0x2509);}IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}
#if KERNEL_LT((0xed7+3066-0x1acf),(0x14b7+2461-0x1e4e),(0x3f2+4509-0x1577))
static int IIllIIII(struct usb_hcd*llIlI,struct urb*urb)
#else
static int IIllIIII(struct usb_hcd*llIlI,struct urb*urb,int status)
#endif
{struct IIllIl*Illll=lllllIl(llIlI);struct llIIIl*lIIll;IllII IIlIl;int IIIll=
(0x1e03+1134-0x2271);int unlinked;unsigned long flags;IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x5b\x25\x73\x5d\x3a\x20\x2b\x2b\x20\x75\x72\x62\x3d\x30\x78\x25\x70" "\n"
,IlllIlI(llIlI),urb);do{spin_lock_irqsave(&Illll->lock,flags);
#if KERNEL_GT_EQ((0x11aa+2209-0x1a49),(0xf96+3261-0x1c4d),(0x129f+2296-0x1b7f))
IIIll=usb_hcd_check_unlink_urb(llIlI,urb,status);if(IIIll!=(0x10cb+4646-0x22f1))
{

spin_unlock_irqrestore(&Illll->lock,flags);break;}
#endif
lIIll=(struct llIIIl*)urb->hcpriv;if(!lIIll){

IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x3a\x20\x6e\x6f\x20\x64\x65\x76\x69\x63\x65\x21" "\n"
);spin_unlock_irqrestore(&Illll->lock,flags);break;}spin_lock(&lIIll->lIllI->
IlIIll);unlinked=IlIIllIII(lIIll);spin_unlock(&lIIll->lIllI->IlIIll);
spin_unlock_irqrestore(&Illll->lock,flags);if(unlinked){
#if KERNEL_LT((0x1944+1184-0x1de2),(0x1bc3+784-0x1ecd),(0x297+1888-0x9df))
IIIIlIlI(lIIll,-ECONNRESET);
#else
IIIIlIlI(lIIll,status);
#endif
IIlIl=lIlIlll(sizeof(IlIllIIll),GFP_ATOMIC);if(!IIlIl){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79\x20\x66\x6f\x72\x20\x75\x6e\x72\x62" "\n"
);IlIIIlll(lIIll);break;}IIlIl->IIIlI.lIIlIl=lIIll->lllIl;IIlIl->IIIlI.IllIIll=
(0x8a1+2818-0x13a3);IIlIl->IIIlI.lIlIl=sizeof(IlIllIIll);IIlIl->IIIlI.lIIlIII=
lIlIlIll;IIlIl->IIIlI.Status=(0x2f2+3334-0xff8);IIlIl->IIIlI.Context=
(0x46b+903-0x7f2);INIT_LIST_HEAD(&lIIll->IIIllIl);lIIll->urb.lIlll=NULL;lIIll->
IIlIl=IIlIl;spin_lock_irqsave(&lIIll->lIllI->IlIIll,flags);list_add_tail(&lIIll
->lIlIIl,&lIIll->lIllI->IIIIlII);spin_unlock_irqrestore(&lIIll->lIllI->IlIIll,
flags);wake_up(&lIIll->lIllI->IIIIlI);}else{

IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x3a\x20\x75\x72\x62\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64\x20\x69\x6e\x20\x71\x75\x65\x75\x65" "\n"
);}}while((0x1f40+402-0x20d2));IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}void IlIIIIIlI(struct usb_hcd*llIlI,struct 
usb_host_endpoint*ep){unsigned long flags;struct IIllIl*Illll=lllllIl(llIlI);
IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x5b\x25\x73\x5d\x3a\x20\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x65\x6e\x64\x70\x6f\x69\x6e\x74\x5f\x64\x69\x73\x61\x62\x6c\x65\x2b\x2b\x20\x65\x70\x3d\x25\x70" "\n"
,IlllIlI(llIlI),ep);spin_lock_irqsave(&Illll->lock,flags);if(ep->hcpriv){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x63\x6c\x65\x61\x6e\x69\x6e\x67\x20\x75\x70\x20\x68\x63\x70\x72\x69\x76" "\n"
);ep->hcpriv=NULL;}spin_unlock_irqrestore(&Illll->lock,flags);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x65\x6e\x64\x70\x6f\x69\x6e\x74\x5f\x64\x69\x73\x61\x62\x6c\x65\x2d\x2d" "\n"
);}
#if KERNEL_GT_EQ((0x3b+9498-0x2553),(0x5ca+2072-0xddc),(0x37a+8802-0x25b5)) || \
RHEL_RELEASE_GT_EQ((0x13a1+3238-0x2041),(0x771+7270-0x23d4)) 
#define IlIlllIII \
		( USB_PORT_STAT_C_CONNECTION \
		| USB_PORT_STAT_C_ENABLE \
		| USB_PORT_STAT_C_SUSPEND \
		| USB_PORT_STAT_C_OVERCURRENT \
		| USB_PORT_STAT_C_RESET \
		| USB_PORT_STAT_C_BH_RESET \
		| USB_PORT_STAT_C_LINK_STATE \
		| USB_PORT_STAT_C_CONFIG_ERROR )
#else
#define IlIlllIII \
		( USB_PORT_STAT_C_CONNECTION \
		| USB_PORT_STAT_C_ENABLE \
		| USB_PORT_STAT_C_SUSPEND \
		| USB_PORT_STAT_C_OVERCURRENT \
		| USB_PORT_STAT_C_RESET )
#endif
#if KERNEL_GT_EQ((0x1502+2238-0x1dbe),(0xa34+6132-0x2222),(0xac0+1058-0xebb)) ||\
 RHEL_RELEASE_GT_EQ((0x1690+161-0x172b),(0x158f+1855-0x1ccb)) 
size_t lIllIlIIl(void*IIIIl,size_t IIlIIl){struct{struct usb_bos_descriptor 
IIllIIlI;struct usb_ss_cap_descriptor ss_cap;}__packed lIllllI;memset(&lIllllI,
(0x8b2+303-0x9e1),sizeof(lIllllI));lIllllI.IIllIIlI.bLength=USB_DT_BOS_SIZE,
lIllllI.IIllIIlI.bDescriptorType=USB_DT_BOS,lIllllI.IIllIIlI.wTotalLength=
cpu_to_le16(sizeof(lIllllI)),lIllllI.IIllIIlI.bNumDeviceCaps=(0x25b+8522-0x23a4)
,lIllllI.ss_cap.bLength=USB_DT_USB_SS_CAP_SIZE,lIllllI.ss_cap.bDescriptorType=
USB_DT_DEVICE_CAPABILITY,lIllllI.ss_cap.bDevCapabilityType=USB_SS_CAP_TYPE,
lIllllI.ss_cap.wSpeedSupported=cpu_to_le16(USB_5GBPS_OPERATION),lIllllI.ss_cap.
bFunctionalitySupport=ilog2(USB_5GBPS_OPERATION),IIlIIl=min(sizeof(lIllllI),
IIlIIl);memcpy(IIIIl,&lIllllI,IIlIIl);return IIlIIl;}size_t IIllIIlIl(void*IIIIl
,size_t IIlIIl){struct usb_hub_descriptor desc;memset(&desc,(0x1439+4285-0x24f6)
,sizeof(desc));desc.bDescLength=(0x87f+7338-0x251d);desc.bDescriptorType=
(0x8a5+6304-0x211b);desc.bNbrPorts=lIIllII;
desc.wHubCharacteristics=cpu_to_le16((0xe1a+1044-0x122d));desc.u.ss.
bHubHdrDecLat=(0x3d0+139-0x457);
desc.u.ss.DeviceRemovable=cpu_to_le16(65534&(65535>>((0x125b+3530-0x2016)-
lIIllII)));IIlIIl=min((size_t)desc.bDescLength,IIlIIl);memcpy(IIIIl,&desc,IIlIIl
);return IIlIIl;}
#endif 
size_t IlllIlIll(void*IIIIl,size_t IIlIIl){__u8*lIIIlllI;struct 
usb_hub_descriptor desc;memset(&desc,(0x788+7266-0x23ea),sizeof(desc));desc.
bDescLength=(0x230+7118-0x1df7)+IlIIllII*(0x784+1674-0xe0c);desc.bDescriptorType
=(0x1355+1653-0x19a1);desc.bNbrPorts=lIIllII;desc.wHubCharacteristics=
cpu_to_le16((0x1da5+1931-0x252f));
#if KERNEL_GT_EQ((0x42+44-0x6c),(0x829+7498-0x256d),(0x226b+277-0x2359)) || \
RHEL_RELEASE_GT_EQ((0x456+2301-0xd4d),(0x6cb+3822-0x15b7))
lIIIlllI=desc.u.hs.DeviceRemovable;
#else
lIIIlllI=desc.DeviceRemovable;
#endif
memset(&lIIIlllI[(0x4b0+3941-0x1415)],(0x23a0+59-0x23db),IlIIllII);memset(&
lIIIlllI[IlIIllII],(0x8c4+6740-0x2219),IlIIllII);IIlIIl=min((size_t)desc.
bDescLength,IIlIIl);memcpy(IIIIl,&desc,IIlIIl);return IIlIIl;}static int 
IllIIIlll(struct usb_hcd*llIlI,u16 IIIlIllll,u16 wValue,u16 wIndex,char*IIIIl,
u16 wLength){struct IIllIl*Illll=lllllIl(llIlI);int IIIll=(0xc6+1566-0x6e4);int 
lIIlI=-(0xa8f+328-0xbd6);int IIlIIllll=(0x1f5+3684-0x1059);unsigned long flags;
IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x5b\x25\x73\x5d\x3a\x20\x2b\x2b" "\n"
,IlllIlI(llIlI));if(!test_bit(HCD_FLAG_HW_ACCESSIBLE,&llIlI->flags))return-
ETIMEDOUT;spin_lock_irqsave(&Illll->lock,flags);switch(IIIlIllll){case 
GetHubDescriptor:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x47\x65\x74\x48\x75\x62\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72" "\n"
);
#if KERNEL_GT_EQ((0x1d3a+1632-0x2398),(0x1d0+356-0x32e),(0x8cb+6486-0x21fa)) || \
RHEL_RELEASE_GT_EQ((0x1a7a+1182-0x1f12),(0x1ccf+1602-0x230e)) 
if(llIlI->speed==HCD_USB3){if((wValue>>(0x1063+1079-0x1492))!=USB_DT_SS_HUB){
IIIll=-EPIPE;break;}

IIllIIlIl(IIIIl,wLength);}else
#endif
{if((wValue>>(0x168b+51-0x16b6))!=USB_DT_HUB){IIIll=-EPIPE;break;}IlllIlIll(
IIIIl,wLength);}break;
#if KERNEL_GT_EQ((0x1b0d+1087-0x1f4a),(0x780+584-0x9c2),(0x187b+1283-0x1d57)) ||\
 RHEL_RELEASE_GT_EQ((0x665+5653-0x1c74),(0xbb+394-0x242)) 
case DeviceRequest|USB_REQ_GET_DESCRIPTOR:if(llIlI->speed!=HCD_USB3){IIIll=-
EPIPE;break;}if((wValue>>(0x463+1229-0x928))!=USB_DT_BOS){IIIll=-EPIPE;break;}
IIIll=lIllIlIIl(IIIIl,wLength);break;case GetPortErrorCount:
if(llIlI->speed!=HCD_USB3){IIIll=-EPIPE;break;}
*(__le16*)IIIIl=cpu_to_le16((0x469+8261-0x24ae));break;case SetHubDepth:
if(llIlI->speed!=HCD_USB3){IIIll=-EPIPE;break;}
break;
#endif
case GetHubStatus:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x47\x65\x74\x48\x75\x62\x53\x74\x61\x74\x75\x73" "\n"
);*(__le32*)IIIIl=cpu_to_le32((0x734+7830-0x25ca));break;case SetHubFeature:
IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x48\x75\x62\x46\x65\x61\x74\x75\x72\x65" "\n"
);
IIIll=-EPIPE;break;case ClearHubFeature:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x48\x75\x62\x46\x65\x61\x74\x75\x72\x65" "\n"
);
break;case GetPortStatus:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x47\x65\x74\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73" "\n"
);lIIlI=(wIndex&(0xc3a+3686-0x19a1))-(0x7d9+3119-0x1407);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x70\x6f\x72\x74\x3d\x25\x64" "\n"
,lIIlI);if(lIIlI<(0xed0+2364-0x180c)||lIIlI>=lIIllII){lIIlI=-(0x3c3+4968-0x172a)
;IIIll=-EPIPE;break;}

if(Illll->IlllIll[lIIlI]&&time_after_eq(jiffies,Illll->IlllIll[lIIlI])){if(Illll
->IlllIIll[lIIlI]==IlIllII){Illll->IIIlIII[lIIlI]->llIIIll=(0x17c+2562-0xb7e);}
#if KERNEL_GT_EQ((0x499+7944-0x239f),(0x367+6330-0x1c1b),(0x931+5796-0x1fae)) ||\
 RHEL_RELEASE_GT_EQ((0xf05+3095-0x1b16),(0x1c98+2100-0x24c9)) 
if(llIlI->speed==HCD_USB3){IllIlIl(Illll,lIIlI,llIllllI,(0x24f+5192-0x1697));}
else
#endif
{IIlIlII(Illll,lIIlI,llIllllI,(0x943+7137-0x2524));}}((__le16*)IIIIl)[
(0x8a6+71-0x8ed)]=cpu_to_le16(Illll->IIIllII[lIIlI]);((__le16*)IIIIl)[
(0x371+2669-0xddd)]=cpu_to_le16(Illll->IllllIl[lIIlI]);break;case SetPortFeature
:lIIlI=(wIndex&(0x70c+4323-0x16f0))-(0xaa8+2810-0x15a1);if(lIIlI<
(0x79f+3364-0x14c3)||lIIlI>=lIIllII){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x6f\x72\x74\x20\x6e\x75\x6d\x62\x65\x72\x20\x28\x25\x64\x29" "\n"
,lIIlI);lIIlI=-(0xca4+4404-0x1dd7);IIIll=-EPIPE;break;}
#if KERNEL_GT_EQ((0x1ad9+2290-0x23c9),(0x1564+855-0x18b5),(0x21d+2159-0xa65)) ||\
 RHEL_RELEASE_GT_EQ((0x1e2+308-0x310),(0x20e5+530-0x22f4)) 
if(llIlI->speed==HCD_USB3){IIIll=llIlIIlII(Illll,lIIlI,wValue,wIndex>>
(0x1145+3321-0x1e36));}else
#endif
{IIIll=Illllllll(Illll,lIIlI,wValue,wIndex>>(0x823+4189-0x1878));}break;case 
ClearPortFeature:lIIlI=(wIndex&(0x2b8+5931-0x18e4))-(0xaf3+970-0xebc);if(lIIlI<
(0x192a+1027-0x1d2d)||lIIlI>=lIIllII){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x6f\x72\x74\x20\x6e\x75\x6d\x62\x65\x72\x20\x28\x25\x64\x29" "\n"
,lIIlI);lIIlI=-(0xb23+2091-0x134d);IIIll=-EPIPE;break;}
#if KERNEL_GT_EQ((0x1c15+686-0x1ec1),(0x6ac+4365-0x17b3),(0xebb+6228-0x26e8)) ||\
 RHEL_RELEASE_GT_EQ((0x1012+2159-0x187b),(0xfd7+5809-0x2685)) 
if(llIlI->speed==HCD_USB3){IIIll=llIIIIllI(Illll,lIIlI,wValue);}else
#endif
{IIIll=lIlllllII(Illll,lIIlI,wValue);}break;default:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x52\x65\x71\x3d\x30\x78\x25\x30\x34\x58\x20\x56\x61\x6c\x75\x65\x3d\x30\x78\x25\x30\x34\x58\x20\x49\x6e\x64\x65\x78\x3d\x30\x78\x25\x30\x34\x58\x69\x20\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n"
,IIIlIllll,wValue,wIndex,wLength);
IIIll=-EPIPE;break;}
IIlIIllll=(lIIlI!=-(0xd1c+2636-0x1767))&&((Illll->IllllIl[lIIlI]&IlIlllIII)!=
(0x576+5178-0x19b0));spin_unlock_irqrestore(&Illll->lock,flags);if(IIlIIllll)
usb_hcd_poll_rh_status(llIlI);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64" "\n"
,IIIll);return IIIll;}static int Illllllll(struct IIllIl*Illll,int lIIlI,int 
llIlIIl,int IIlIIII){int IIIll=(0xaec+4408-0x1c24);switch(llIlIIl){case 
USB_PORT_FEAT_ENABLE:IlllI(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x45\x4e\x41\x42\x4c\x45\x29" "\n"
,lIIlI);


IIIll=-EPIPE;break;case USB_PORT_FEAT_SUSPEND:IlllI(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x53\x55\x53\x50\x45\x4e\x44\x29" "\n"
,lIIlI);




IIlIlII(Illll,lIIlI,lIlIlIIII,(0x207+7746-0x2049));break;case 
USB_PORT_FEAT_RESET:IlllI(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIIlI);





IIlIlII(Illll,lIIlI,IllIlIII,(0xfd5+5236-0x2449));if(Illll->IIIlIII[lIIlI]&&
Illll->IIIlIII[lIIlI]->llIIIll>(0x6c5+5351-0x1bac)){IlIlIlIl(Illll->IIIlIII[
lIIlI]);}break;case USB_PORT_FEAT_POWER:IlllI(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x50\x4f\x57\x45\x52\x29" "\n"
,lIIlI);


IIlIlII(Illll,lIIlI,llIIlIIl,(0x16d8+709-0x199d));break;case USB_PORT_FEAT_TEST:
IlllI(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x54\x45\x53\x54\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_INDICATOR:IlllI(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x49\x4e\x44\x49\x43\x41\x54\x4f\x52\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_CONNECTION:case USB_PORT_FEAT_OVER_CURRENT:case 
USB_PORT_FEAT_C_CONNECTION:case USB_PORT_FEAT_C_OVER_CURRENT:case 
USB_PORT_FEAT_C_RESET:case USB_PORT_FEAT_LOWSPEED:case USB_PORT_FEAT_C_ENABLE:
case USB_PORT_FEAT_C_SUSPEND:


break;default:
IlllI(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x20\x25\x64\x29" "\n"
,lIIlI,llIlIIl);IIIll=-EPIPE;break;}return IIIll;}static int lIlllllII(struct 
IIllIl*Illll,int lIIlI,int llIlIIl){int IIIll=(0x1477+1732-0x1b3b);switch(
llIlIIl){case USB_PORT_FEAT_ENABLE:IlllI(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x45\x4e\x41\x42\x4c\x45\x29" "\n"
,lIIlI);



IIlIlII(Illll,lIIlI,lIIlIlll,(0x5c9+3158-0x121f));break;case 
USB_PORT_FEAT_SUSPEND:IlllI(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x53\x55\x53\x50\x45\x4e\x44\x29" "\n"
,lIIlI);



IIlIlII(Illll,lIIlI,lIIllIIIl,(0x1a5f+1133-0x1ecc));break;case 
USB_PORT_FEAT_POWER:IlllI(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x50\x4f\x57\x45\x52\x29" "\n"
,lIIlI);

IIlIlII(Illll,lIIlI,llIIlllI,(0x10e9+4491-0x2274));break;case 
USB_PORT_FEAT_C_CONNECTION:IlllI(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x43\x4f\x4e\x4e\x45\x43\x54\x49\x4f\x4e\x29" "\n"
,lIIlI);IIlIlII(Illll,lIIlI,IlIlllII,(0xd63+5957-0x24a8));break;case 
USB_PORT_FEAT_C_ENABLE:IlllI(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x45\x4e\x41\x42\x4c\x45\x29" "\n"
,lIIlI);IIlIlII(Illll,lIIlI,IllIllIll,(0x15b5+1454-0x1b63));break;case 
USB_PORT_FEAT_C_SUSPEND:IlllI(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x53\x55\x53\x50\x45\x4e\x44\x29" "\n"
,lIIlI);IIlIlII(Illll,lIIlI,IIIlIIIlI,(0x8cb+1054-0xce9));break;case 
USB_PORT_FEAT_C_OVER_CURRENT:IlllI(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x4f\x56\x45\x52\x5f\x43\x55\x52\x52\x45\x4e\x54\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_C_RESET:IlllI(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIIlI);IIlIlII(Illll,lIIlI,IIIIllII,(0x9a+7930-0x1f94));break;case 
USB_PORT_FEAT_INDICATOR:IlllI(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x49\x4e\x44\x49\x43\x41\x54\x4f\x52\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_CONNECTION:case USB_PORT_FEAT_OVER_CURRENT:case 
USB_PORT_FEAT_RESET:case USB_PORT_FEAT_TEST:


break;default:IlllI(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x20\x25\x64\x29" "\n"
,lIIlI,llIlIIl);IIIll=-EPIPE;break;}return IIIll;}
#if KERNEL_GT_EQ((0x19e6+517-0x1be9),(0x13df+2248-0x1ca1),(0x1516+4262-0x2595)) \
|| RHEL_RELEASE_GT_EQ((0xd3d+6070-0x24ed),(0x9a7+1677-0x1031)) 
static int llIlIIlII(struct IIllIl*Illll,int lIIlI,int llIlIIl,int IIlIIII){int 
IIIll=(0x237+2079-0xa56);switch(llIlIIl){case USB_PORT_FEAT_BH_PORT_RESET:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x42\x48\x5f\x50\x4f\x52\x54\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIIlI);







case USB_PORT_FEAT_RESET:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIIlI);





IllIlIl(Illll,lIIlI,IllIlIII,(0x36b+8605-0x2508));if(Illll->IIIlIII[lIIlI]&&
Illll->IIIlIII[lIIlI]->llIIIll>(0x1095+4546-0x2257)){IlIlIlIl(Illll->IIIlIII[
lIIlI]);}break;case USB_PORT_FEAT_LINK_STATE:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x4c\x49\x4e\x4b\x5f\x53\x54\x41\x54\x45\x2c\x20\x30\x78\x25\x30\x34\x78\x29" "\n"
,lIIlI,IIlIIII);


IllIlIl(Illll,lIIlI,lIlllIIl,IIlIIII);break;case USB_PORT_FEAT_POWER:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x50\x4f\x57\x45\x52\x29" "\n"
,lIIlI);

IllIlIl(Illll,lIIlI,llIIlIIl,(0x845+6642-0x2237));break;case 
USB_PORT_FEAT_U1_TIMEOUT:case USB_PORT_FEAT_U2_TIMEOUT:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x55\x31\x2f\x55\x32\x5f\x54\x49\x4d\x45\x4f\x55\x54\x29" "\n"
,lIIlI);


break;case USB_PORT_FEAT_REMOTE_WAKE_MASK:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x52\x45\x4d\x4f\x54\x45\x5f\x57\x41\x4b\x45\x5f\x4d\x41\x53\x4b\x29" "\n"
,lIIlI);

break;case USB_PORT_FEAT_FORCE_LINKPM_ACCEPT:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x46\x4f\x52\x43\x45\x5f\x4c\x49\x4e\x4b\x50\x4d\x5f\x41\x43\x43\x45\x50\x54\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_CONNECTION:case USB_PORT_FEAT_OVER_CURRENT:case 
USB_PORT_FEAT_C_CONNECTION:case USB_PORT_FEAT_C_OVER_CURRENT:case 
USB_PORT_FEAT_C_RESET:case USB_PORT_FEAT_C_PORT_LINK_STATE:case 
USB_PORT_FEAT_C_PORT_CONFIG_ERROR:case USB_PORT_FEAT_C_BH_PORT_RESET:


break;default:
IlllI(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x20\x25\x64\x29" "\n"
,lIIlI,llIlIIl);IIIll=-EPIPE;break;}return IIIll;}static int llIIIIllI(struct 
IIllIl*Illll,int lIIlI,int llIlIIl){int IIIll=(0x1e58+1610-0x24a2);switch(
llIlIIl){case USB_PORT_FEAT_POWER:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x50\x4f\x57\x45\x52\x29" "\n"
,lIIlI);

IllIlIl(Illll,lIIlI,llIIlllI,(0x79+3624-0xea1));break;case 
USB_PORT_FEAT_C_CONNECTION:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x43\x4f\x4e\x4e\x45\x43\x54\x49\x4f\x4e\x29" "\n"
,lIIlI);IllIlIl(Illll,lIIlI,IlIlllII,(0x19a4+2922-0x250e));break;case 
USB_PORT_FEAT_C_OVER_CURRENT:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x4f\x56\x45\x52\x5f\x43\x55\x52\x52\x45\x4e\x54\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_C_RESET:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIIlI);IllIlIl(Illll,lIIlI,IIIIllII,(0x68c+2534-0x1072));break;case 
USB_PORT_FEAT_C_PORT_LINK_STATE:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x50\x4f\x52\x54\x5f\x4c\x49\x4e\x4b\x5f\x53\x54\x41\x54\x45\x29" "\n"
,lIIlI);IllIlIl(Illll,lIIlI,lIlIllIlI,(0xbef+3471-0x197e));break;case 
USB_PORT_FEAT_C_PORT_CONFIG_ERROR:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x50\x4f\x52\x54\x5f\x43\x4f\x4e\x46\x49\x47\x5f\x45\x52\x52\x4f\x52\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_C_BH_PORT_RESET:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x42\x48\x5f\x50\x4f\x52\x54\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIIlI);IllIlIl(Illll,lIIlI,IllllIlIl,(0x419+417-0x5ba));break;case 
USB_PORT_FEAT_FORCE_LINKPM_ACCEPT:IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x46\x4f\x52\x43\x45\x5f\x4c\x49\x4e\x4b\x50\x4d\x5f\x41\x43\x43\x45\x50\x54\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_CONNECTION:case USB_PORT_FEAT_OVER_CURRENT:case 
USB_PORT_FEAT_RESET:case USB_PORT_FEAT_LINK_STATE:case USB_PORT_FEAT_U1_TIMEOUT:
case USB_PORT_FEAT_U2_TIMEOUT:case USB_PORT_FEAT_REMOTE_WAKE_MASK:case 
USB_PORT_FEAT_BH_PORT_RESET:


break;default:IlllI(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x20\x25\x64\x29" "\n"
,lIIlI,llIlIIl);IIIll=-EPIPE;break;}return IIIll;}
#endif 
static int IIIlllIIl(struct usb_hcd*llIlI,char*IIIIl){int IIIll=
(0x2b8+2009-0xa91);struct IIllIl*Illll=lllllIl(llIlI);u32*lIlllIlII=(u32*)IIIIl;
unsigned long flags;IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x73\x74\x61\x74\x75\x73\x5f\x64\x61\x74\x61\x5b\x25\x73\x5d\x2b\x2b" "\n"
,IlllIlI(llIlI));spin_lock_irqsave(&Illll->lock,flags);do
{int i;int IIlIlllIl=(0x13f+7921-0x2030);if(!test_bit(HCD_FLAG_HW_ACCESSIBLE,&
llIlI->flags))break;for(i=(0x1108+2028-0x18f4);i<lIIllII;i++){if(Illll->IllllIl[
i]&IlIlllIII){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x73\x74\x61\x74\x75\x73\x5f\x64\x61\x74\x61\x3a\x20\x70\x6f\x72\x74\x20\x25\x64\x20\x68\x61\x73\x20\x63\x68\x61\x6e\x67\x65\x64\x2e\x20\x77\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73\x3d\x30\x78\x25\x30\x34\x58\x20\x77\x50\x6f\x72\x74\x43\x68\x61\x6e\x67\x65\x3d\x30\x78\x25\x30\x34\x58" "\n"
,i,Illll->IIIllII[i],Illll->IllllIl[i]);if(IIlIlllIl==(0xe83+5559-0x243a))*
lIlllIlII=(0x1112+2056-0x191a);IIlIlllIl=(0x123a+4781-0x24e6);
*lIlllIlII|=(0x477+7834-0x2310)<<(i+(0xf2+7322-0x1d8b));}}if(IIlIlllIl){IIIll=
IlIIllII;if(Illll->llIlIIIIl){usb_hcd_resume_root_hub(llIlI);}}}while(
(0x9e8+6870-0x24be));spin_unlock_irqrestore(&Illll->lock,flags);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x73\x74\x61\x74\x75\x73\x5f\x64\x61\x74\x61\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64\x20\x6d\x61\x73\x6b\x20\x3d\x20\x30\x78\x25\x30\x38\x58" "\n"
,IIIll,(u32)*lIlllIlII);return IIIll;}static int IIlIIllIl(struct usb_hcd*llIlI)
{
struct IIllIl*Illll=lllllIl(llIlI);Illll->llIlIIIIl=(0x254+4550-0x1419);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x62\x75\x73\x5f\x73\x75\x73\x70\x65\x6e\x64\x5b\x25\x73\x5d" "\n"
,IlllIlI(llIlI));return(0x652+1801-0xd5b);}static int lIlIlIlll(struct usb_hcd*
llIlI){
struct IIllIl*Illll=lllllIl(llIlI);Illll->llIlIIIIl=(0x11d3+1297-0x16e4);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x62\x75\x73\x5f\x72\x65\x73\x75\x6d\x65\x5b\x25\x73\x5d" "\n"
,IlllIlI(llIlI));return(0x1172+5204-0x25c6);}
#if KERNEL_GT_EQ((0x15ab+2868-0x20dd),(0x127+3170-0xd83),(0x1fbb+1211-0x244f)) \
|| RHEL_RELEASE_GT_EQ((0x329+5644-0x192f),(0x1d50+2464-0x26ed)) 
static int llIlIIllI(struct usb_hcd*llIlI,struct usb_device*IlIII,struct 
usb_host_endpoint**lIIIIIIlI,unsigned int IIIIIlIlI,unsigned int lIllllllI,gfp_t
 IlIIl){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x61\x6c\x6c\x6f\x63\x5f\x73\x74\x72\x65\x61\x6d\x73\x5b\x25\x73\x5d" "\n"
,IlllIlI(llIlI));
return(0x16d8+1427-0x1c6b);}static int llIIlIIll(struct usb_hcd*llIlI,struct 
usb_device*IlIII,struct usb_host_endpoint**lIIIIIIlI,unsigned int IIIIIlIlI,
gfp_t IlIIl){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x66\x72\x65\x65\x5f\x73\x74\x72\x65\x61\x6d\x73\x5b\x25\x73\x5d" "\n"
,IlllIlI(llIlI));
return(0x601+4804-0x18c5);}
#endif 


int IlIlIlIll(void){int IIIll=(0x138a+212-0x145e);int IlIIllIIl=
(0x1161+2605-0x1b8e);int llIIIIIlI=(0x15b+3209-0xde4);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2b\x2b" "\n"
);do{struct sysinfo lllIIIl;INIT_LIST_HEAD(&lIIlIIl);spin_lock_init(&lIIIIl);
si_meminfo(&lllIIIl);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x74\x6f\x74\x61\x6c\x72\x61\x6d\x3d\x25\x6c\x75\x20\x62\x79\x74\x65\x73\x20\x74\x6f\x74\x61\x6c\x68\x69\x67\x68\x3d\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,lllIIIl.totalram*lllIIIl.mem_unit,lllIIIl.totalhigh*lllIIIl.mem_unit);
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)
























IlllIIII=(lllIIIl.totalhigh>(0xa0a+5763-0x208d));
#endif
IIIll=platform_driver_register(&IllIllll);if(IIIll!=(0x1b9+4131-0x11dc)){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x72\x65\x67\x69\x73\x74\x65\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}IlIIllIIl=(0x156c+2738-0x201d);IIIll=platform_device_register(&
lIIllllI);if(IIIll!=(0x3dc+1446-0x982)){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x65\x76\x69\x63\x65\x5f\x72\x65\x67\x69\x73\x74\x65\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}llIIIIIlI=(0x53b+7160-0x2132);IIllllIl=llllIIIII();if(IIllllIl==
NULL){IIIll=-ENOMEM;IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x61\x6c\x6c\x6f\x63\x20\x6d\x69\x6e\x6f\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}}while((0x21ca+845-0x2517));if(IIIll!=(0x1f5f+1407-0x24de)){if(
IIllllIl){llIllllII(IIllllIl);IIllllIl=NULL;}if(llIIIIIlI){
platform_device_unregister(&lIIllllI);}if(IlIIllIIl){platform_driver_unregister(
&IllIllll);}}IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64" "\n"
,IIIll);return IIIll;}void lIIllIlI(void){IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x64\x65\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2b\x2b" "\n"
);if(IIllllIl){llIllllII(IIllllIl);IIllllIl=NULL;}spin_lock(&lIIIIl);while(!
list_empty(&lIIlIIl)){struct IlIlIl*lIllI=(struct IlIlIl*)lIIlIIl.next;IIIlIlll(
lIllI);spin_unlock(&lIIIIl);IlIIlIll(lIllI);IIlllIll(lIllI);spin_lock(&lIIIIl);}
spin_unlock(&lIIIIl);platform_device_unregister(&lIIllllI);
platform_driver_unregister(&IllIllll);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x64\x65\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2d\x2d" "\n"
);}struct IlIlIl*lIIlIIIII(u16 vid,u16 IlIIlIl,u16 llIlllI,int speed){struct 
IlIlIl*lIllI=NULL;do{struct usb_hcd*parent;
#if KERNEL_GT_EQ((0x599+2992-0x1147),(0x168a+3028-0x2258),(0x47+9570-0x2582)) ||\
 RHEL_RELEASE_GT_EQ((0x138b+2820-0x1e89),(0xd32+3184-0x199f)) 
parent=(speed==USB_SPEED_SUPER)?IllIIII:llIIIIl;
#else
parent=llIIIIl;
#endif
if(parent==NULL){IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x76\x68\x63\x64\x20\x6e\x6f\x74\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x64\x2e" "\n"
);break;}lIllI=IIIlIll(sizeof(*lIllI),GFP_KERNEL);if(!lIllI){IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64\x2e" "\n"
);break;}if(lIIIllIlI(lIllI)<(0x10ff+2355-0x1a32)){IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x6d\x69\x6e\x6f\x72\x20\x66\x61\x69\x6c\x65\x64\x2e" "\n"
);break;}
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IIIIIllII);
#endif
init_waitqueue_head(&lIllI->IIIIlI);spin_lock_init(&lIllI->IlIIll);
INIT_LIST_HEAD(&lIllI->IIlllII);INIT_LIST_HEAD(&lIllI->IIIIlII);INIT_LIST_HEAD(&
lIllI->IIlIIlIl);kref_init(&lIllI->lIIlll);lIllI->vid=vid;lIllI->IlIIlIl=IlIIlIl
;lIllI->llIlllI=llIlllI;lIllI->speed=speed;lIllI->parent=parent;lIllI->lIIlI=-
(0x265+8271-0x22b3);spin_lock(&lIIIIl);list_add(&lIllI->lIlIII,&lIIlIIl);
spin_unlock(&lIIIIl);return lIllI;}while((0x2f2+3225-0xf8b));if(lIllI){IlIIllll(
lIllI);IlIIIl(lIllI);}return NULL;}void IlIIlIll(struct IlIlIl*lIllI){struct 
list_head*lllllIlIl;IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x72\x65\x6d\x6f\x76\x65\x2b\x2b" "\n"
);
spin_lock(&lIIIIl);list_for_each(lllllIlIl,&lIIlIIl){if(lllllIlIl==&lIllI->
lIlIII){list_del_init(&lIllI->lIlIII);break;}}spin_unlock(&lIIIIl);


if(lllllIlIl==&lIllI->lIlIII){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&llIIIlIl);
#endif


llIIlIIlI(lIllI);IIlllIll(lIllI);}IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x72\x65\x6d\x6f\x76\x65\x2d\x2d" "\n"
);}void llllIllIl(void){struct IlIlIl*lIllI;IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x72\x65\x6d\x6f\x76\x65\x5f\x61\x6c\x6c\x2b\x2b" "\n"
);spin_lock(&lIIIIl);while(!list_empty(&lIIlIIl)){lIllI=list_entry(lIIlIIl.next,
struct IlIlIl,lIlIII);list_del_init(&lIllI->lIlIII);spin_unlock(&lIIIIl);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&llIIIlIl);
#endif
llIIlIIlI(lIllI);IIlllIll(lIllI);spin_lock(&lIIIIl);}spin_unlock(&lIIIIl);IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x72\x65\x6d\x6f\x76\x65\x5f\x61\x6c\x6c\x2d\x2d" "\n"
);}int llllIllll(struct IlIlIl*lIllI){int IIIll;unsigned long flags;int lIIlI;
struct IIllIl*Illll;struct IIllIl*IIIIIllI;IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x6c\x75\x67\x3a\x20\x2b\x2b" "\n"
);IIIll=lIlIIllIl(lIllI);if(IIIll<(0x153+3529-0xf1c)){IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x6c\x75\x67\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}Illll=lllllIl(lIllI->parent);IIIIIllI=Illll->lIIIllll?
lllllIl(Illll->lIIIllll):NULL;spin_lock_irqsave(&Illll->lock,flags);if(IIIIIllI)
spin_lock(&IIIIIllI->lock);IIIll=-ENOENT;for(lIIlI=(0x65+8346-0x20ff);lIIlI<
lIIllII;lIIlI++){if((Illll->IIIlIII[lIIlI]==NULL)&&((IIIIIllI==NULL)||(IIIIIllI
->IIIlIII[lIIlI]==NULL))){IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x6c\x75\x67\x3a\x20\x66\x6f\x75\x6e\x64\x20\x66\x72\x65\x65\x20\x70\x6f\x72\x74\x20\x25\x64" "\n"
,lIIlI);IIIlIlll(lIllI);lIllI->lIIlI=lIIlI;lIllI->llIIIll=-(0x34+1624-0x68b);
Illll->IIIlIII[lIIlI]=lIllI;
#if KERNEL_GT_EQ((0xd53+2237-0x160e),(0x2672+74-0x26b6),(0x3ad+3989-0x131b)) || \
RHEL_RELEASE_GT_EQ((0x1b41+1869-0x2288),(0x1167+1500-0x1740)) 
if(lIllI->parent->speed==HCD_USB3){IllIlIl(Illll,lIIlI,lIllIIll,
(0x1725+2756-0x21e9));}else
#endif
{IIlIlII(Illll,lIIlI,lIllIIll,(0x195d+2623-0x239c));}IIIll=(0x48c+7757-0x22d9);
break;}}if(IIIIIllI)spin_unlock(&IIIIIllI->lock);spin_unlock_irqrestore(&Illll->
lock,flags);if(IIIll<(0x4ef+8007-0x2436)){
IlllIlll(lIllI);}else{
usb_hcd_poll_rh_status(lIllI->parent);}IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x6c\x75\x67\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}void llIIlIIlI(struct IlIlIl*lIllI){unsigned long flags;
struct IIllIl*Illll=lllllIl(lIllI->parent);IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x75\x6e\x70\x6c\x75\x67\x3a\x20\x2b\x2b" "\n"
);
IlllIlll(lIllI);spin_lock_irqsave(&Illll->lock,flags);if(lIllI->lIIlI!=-
(0x1e16+1281-0x2316)){IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x75\x6e\x70\x6c\x75\x67\x3a\x20\x75\x6e\x70\x6c\x75\x67\x67\x69\x6e\x67\x20\x76\x69\x72\x74\x75\x61\x6c\x20\x64\x65\x76\x69\x63\x65\x20\x61\x74\x20\x70\x6f\x72\x74\x20\x25\x64" "\n"
,lIllI->lIIlI);

Illll->IIIlIII[lIllI->lIIlI]=NULL;
#if KERNEL_GT_EQ((0xe2+5582-0x16ae),(0x4c9+7939-0x23c6),(0xe71+2909-0x19a7)) || \
RHEL_RELEASE_GT_EQ((0x1a9+2650-0xbfd),(0xf8+6332-0x19b1)) 
if(lIllI->parent->speed==HCD_USB3){IllIlIl(Illll,lIllI->lIIlI,llIIIlII,
(0x1436+4112-0x2446));}else
#endif
{IIlIlII(Illll,lIllI->lIIlI,llIIIlII,(0xbf0+1938-0x1382));}lIllI->lIIlI=-
(0x2fb+7948-0x2206);spin_unlock_irqrestore(&Illll->lock,flags);
usb_hcd_poll_rh_status(lIllI->parent);llllIllII(lIllI,-ENODEV);IIlllIll(lIllI);}
else{spin_unlock_irqrestore(&Illll->lock,flags);}IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x75\x6e\x70\x6c\x75\x67\x3a\x20\x2d\x2d" "\n"
);}struct IlIlIl*lIlllIlIl(int IIlllIIll){struct IlIlIl*lIllI;IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x31\x3a\x20\x2b\x2b" "\n"
);spin_lock(&lIIIIl);list_for_each_entry(lIllI,&lIIlIIl,lIlIII){if(IlllIlII(
lIllI->lllll)==IIlllIIll){IIIlIlll(lIllI);spin_unlock(&lIIIIl);IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x31\x3a\x20\x2d\x2d\x20\x66\x6f\x75\x6e\x64\x21" "\n"
);return lIllI;}}spin_unlock(&lIIIIl);IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x31\x3a\x20\x2d\x2d\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
);return NULL;}
struct IlIlIl*IlllIIlIl(struct usb_hcd*llIlI,int llIIIll){struct IIllIl*Illll=
lllllIl(llIlI);struct IlIlIl*lIllI=NULL;int lIIlI;IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x32\x28\x29\x3a\x20\x2b\x2b\x20\x61\x64\x64\x72\x65\x73\x73\x20\x3d\x20\x25\x64" "\n"
,llIIIll);if(Illll==NULL)return NULL;if(llIIIll<(0x1d+4101-0x1022))return NULL;
for(lIIlI=(0x3da+774-0x6e0);lIIlI<lIIllII;lIIlI++){if(Illll->IIIlIII[lIIlI]&&
Illll->IIIlIII[lIIlI]->llIIIll==llIIIll){lIllI=Illll->IIIlIII[lIIlI];IIIlIlll(
lIllI);break;}}IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x32\x3a\x20\x2d\x2d\x20\x25\x73" "\n"
,lIllI?"\x66\x6f\x75\x6e\x64":"\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64");return 
lIllI;}
struct IlIlIl*IIIIIIIII(struct usb_hcd*llIlI,int lIIlI){struct IIllIl*Illll=
lllllIl(llIlI);struct IlIlIl*lIllI=NULL;IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x33\x28\x29\x3a\x20\x2b\x2b\x20\x70\x6f\x72\x74\x20\x3d\x20\x25\x64" "\n"
,lIIlI);if(Illll==NULL)return NULL;if(lIIlI<=(0x1250+1908-0x19c4)||lIIlI>lIIllII
)return NULL;lIIlI--;
if(Illll->IIIlIII[lIIlI]){lIllI=Illll->IIIlIII[lIIlI];IIIlIlll(lIllI);}IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x33\x3a\x20\x2d\x2d\x20\x25\x73" "\n"
,lIllI?"\x66\x6f\x75\x6e\x64":"\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64");return 
lIllI;}void IlIlIlIl(struct IlIlIl*lIllI){IllII IIlIl;struct llIIIl*lIIll;
unsigned long flags;IIlIl=lIlIlll(sizeof(lIIlIIIll),GFP_ATOMIC);if(!IIlIl){IlllI
(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x73\x65\x6e\x64\x5f\x72\x65\x73\x65\x74\x5f\x70\x6f\x72\x74\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79" "\n"
);return;}lIIll=llIlllll(lIllI,GFP_ATOMIC);if(!lIIll){IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x73\x65\x6e\x64\x5f\x72\x65\x73\x65\x74\x5f\x70\x6f\x72\x74\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79" "\n"
);IlIIIl(IIlIl);return;}IIlIl->IIIlI.lIIlIl=lIIll->lllIl;IIlIl->IIIlI.IllIIll=
(0x117b+3516-0x1f37);IIlIl->IIIlI.lIlIl=sizeof(lIIlIIIll);IIlIl->IIIlI.lIIlIII=
lIllIIIl;IIlIl->IIIlI.Status=(0x9d1+4579-0x1bb4);IIlIl->IIIlI.Context=lIllI->
lIIlI;lIIll->IIlIl=IIlIl;spin_lock_irqsave(&lIllI->IlIIll,flags);list_add_tail(&
lIIll->lIlIIl,&lIllI->IIIIlII);spin_unlock_irqrestore(&lIllI->IlIIll,flags);
wake_up(&lIllI->IIIIlI);}struct llIIIl*llIlllll(struct IlIlIl*lIllI,gfp_t IlIIl)
{struct llIIIl*lIIll;lIIll=IIIlIll(sizeof(struct llIIIl),IlIIl);if(!lIIll){IlllI
(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79" "\n"
);return NULL;}
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&lIlIllIII);
#endif
INIT_LIST_HEAD(&lIIll->lIlIIl);INIT_LIST_HEAD(&lIIll->IIIllIl);INIT_LIST_HEAD(&
lIIll->urb.lIlIII);lIIll->lllIl=llIlIIIlI();lIIll->lIllI=IIIlIlll(lIllI);return 
lIIll;}void IlIIIlll(struct llIIIl*lIIll){


#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&llIlIlIll);
#endif
if(lIIll->lIllI)IIlllIll(lIIll->lIllI);IlIIIl(lIIll);}
int IlIIllIII(struct llIIIl*lIIll){struct usb_host_endpoint*ep;struct llIIIl*
IIlIIIl;if(!list_empty(&lIIll->IIIllIl)){struct IlIIIll*llIIll=list_entry(lIIll
->IIIllIl.next,struct IlIIIll,lIlIII);
#if KERNEL_LT((0x438+6980-0x1f7a),(0x339+2007-0xb0a),(0x143b+2977-0x1fc4))
ep=(usb_pipein(llIIll->lIlll->pipe)?llIIll->lIlll->dev->ep_in:llIIll->lIlll->dev
->ep_out)[usb_pipeendpoint(llIIll->lIlll->pipe)];
#else
ep=llIIll->lIlll->ep;
#endif

if(ep&&ep->hcpriv==lIIll){ep->hcpriv=NULL;

list_del_init(&lIIll->lIlIIl);return(0xc49+305-0xd79);}}
list_for_each_entry(IIlIIIl,&lIIll->lIllI->IIlllII,lIlIIl){if(IIlIIIl==lIIll){
list_del_init(&lIIll->lIlIIl);return(0x98f+4494-0x1b1c);}}
list_for_each_entry(IIlIIIl,&lIIll->lIllI->IIlIIlIl,lIlIIl){if(IIlIIIl==lIIll){
list_del_init(&lIIll->lIlIIl);return(0xe24+3291-0x1afe);}}
list_for_each_entry(IIlIIIl,&lIIll->lIllI->IIIIlII,lIlIIl){if(IIlIIIl==lIIll){
list_del_init(&lIIll->lIlIIl);return(0x367+1105-0x7b7);}}return
(0xd7+3987-0x106a);}int lIIlIlIl(struct llIIIl*lIIll){struct IlIIIll*llIIll;
list_for_each_entry(llIIll,&lIIll->IIIllIl,lIlIII){
#if KERNEL_LT((0x34c+5283-0x17ed),(0x13fb+1528-0x19ed),(0x1cec+1994-0x249e))
spin_lock(&llIIll->lIlll->lock);if(llIIll->lIlll->status!=-EINPROGRESS){
spin_unlock(&llIIll->lIlll->lock);return(0xd17+3006-0x18d4);}spin_unlock(&llIIll
->lIlll->lock);
#else
if(llIIll->lIlll->unlinked)return(0xbf1+302-0xd1e);
#endif
}return(0x582+4626-0x1794);}void llllIllII(struct IlIlIl*lIllI,int status){
unsigned long flags;struct list_head llIlIIII;struct llIIIl*lIIll;INIT_LIST_HEAD
(&llIlIIII);spin_lock_irqsave(&lllllIl(lIllI->parent)->lock,flags);spin_lock(&
lIllI->IlIIll);list_for_each_entry(lIIll,&lIllI->IIlllII,lIlIIl){struct IlIIIll*
llIIII;list_for_each_entry(llIIII,&lIIll->IIIllIl,lIlIII){struct 
usb_host_endpoint*ep;
#if KERNEL_LT((0x845+1192-0xceb),(0x60b+1120-0xa65),(0x853+3156-0x148f))
ep=(usb_pipein(llIIII->lIlll->pipe)?llIIII->lIlll->dev->ep_in:llIIII->lIlll->dev
->ep_out)[usb_pipeendpoint(llIIII->lIlll->pipe)];
#else
ep=llIIII->lIlll->ep;
#endif
if(ep)ep->hcpriv=NULL;}}list_splice_init(&lIllI->IIlllII,&llIlIIII);
list_splice_init(&lIllI->IIIIlII,&llIlIIII);list_splice_init(&lIllI->IIlIIlIl,&
llIlIIII);spin_unlock(&lIllI->IlIIll);spin_unlock_irqrestore(&lllllIl(lIllI->
parent)->lock,flags);while(!list_empty(&llIlIIII)){struct llIIIl*lIIll=
list_entry(llIlIIII.next,struct llIIIl,lIlIIl);list_del_init(&lIIll->lIlIIl);
IIIIlIlI(lIIll,status);IlIIIlll(lIIll);}}void IIIIlIlI(struct llIIIl*lIIll,int 
status){struct IlIlIl*lIllI=lIIll->lIllI;
#if KERNEL_GT_EQ((0x139f+3731-0x2230),(0x26f+6099-0x1a3c),(0x94f+2373-0x127c))
struct IIllIl*Illll=lllllIl(lIllI->parent);
#endif
unsigned long flags;int lIIIllIIl=(0x2fa+1539-0x8fd);IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x67\x69\x76\x65\x62\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x72\x65\x71\x75\x65\x73\x74\x20\x30\x78\x25\x70\x20\x73\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,lIIll,status);local_irq_save(flags);while(!list_empty(&lIIll->IIIllIl)){struct 
IlIIIll*llIIll=list_entry(lIIll->IIIllIl.next,struct IlIIIll,lIlIII);if(llIIll->
lIlll){int IIIlllII=status;

if(usb_pipetype(llIIll->lIlll->pipe)==PIPE_BULK||usb_pipetype(llIIll->lIlll->
pipe)==PIPE_INTERRUPT){






switch(lIIIllIIl){case(0xb22+2419-0x1495):if(llIIll->lIlll->actual_length<llIIll
->lIlll->transfer_buffer_length){if((status==(0x2159+926-0x24f7))&&(llIIll->
lIlll->transfer_flags&URB_SHORT_NOT_OK)){IIIlllII=-EREMOTEIO;}else{IIIlllII=
status;}lIIIllIIl=(0x21a7+765-0x24a3);}else if(llIIll->lIlIII.next==&lIIll->
IIIllIl){IIIlllII=status;lIIIllIIl=(0x1b4+2751-0xc72);}else{IIIlllII=
(0x10af+2471-0x1a56);}break;case(0x935+3557-0x1719):IIIlllII=-ECONNRESET;break;}
}IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x67\x69\x76\x65\x62\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x67\x69\x76\x65\x62\x61\x63\x6b\x20\x75\x72\x62\x20\x30\x78\x25\x70\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,llIIll->lIlll,IIIlllII);
#if KERNEL_LT((0x10c1+756-0x13b3),(0x18+3199-0xc91),(0x1d15+1398-0x2273))


spin_lock(&llIIll->lIlll->lock);if(llIIll->lIlll->status==-EINPROGRESS)llIIll->
lIlll->status=IIIlllII;spin_unlock(&llIIll->lIlll->lock);
#else


spin_lock(&Illll->lock);usb_hcd_unlink_urb_from_ep(lIllI->parent,llIIll->lIlll);
spin_unlock(&Illll->lock);
#endif



llIIll->lIlll->hcpriv=NULL;
#if KERNEL_LT((0x527+1257-0xa0e),(0x446+7009-0x1fa1),(0x1841+3040-0x240e))
usb_hcd_giveback_urb(lIllI->parent,llIIll->lIlll,NULL);
#elif KERNEL_LT((0x1242+4426-0x238a),(0x3e6+1209-0x899),(0x146a+4738-0x26d4))
usb_hcd_giveback_urb(lIllI->parent,llIIll->lIlll);
#else
usb_hcd_giveback_urb(lIllI->parent,llIIll->lIlll,IIIlllII);
#endif
}list_del_init(&llIIll->lIlIII);if(llIIll!=&lIIll->urb)IlIIIl(llIIll);}
local_irq_restore(flags);if(lIIll->IIlIl){if(lIIll->IIlIl->IIIlI.lIIlIII==
lIllIIIl){IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x67\x69\x76\x65\x62\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x72\x65\x73\x65\x74\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64" "\n"
);lIllI->IlIIlIlI=(0x19aa+2045-0x21a7);wake_up(&lIllI->IIIIlI);}IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x67\x69\x76\x65\x62\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x66\x72\x65\x65\x69\x6e\x67\x20\x75\x6e\x72\x62" "\n"
);IlIIIl(lIIll->IIlIl);lIIll->IIlIl=NULL;}}int IlIllllll(struct IlIlIl*lIllI,
struct llIIIl*lIIll,void*IllIl,size_t IIlIll){int IIIll=(0xa47+5180-0x1e83);if(!
list_empty(&lIIll->IIIllIl)){IIIll=IlllllIII(&lIIll->IIIllIl,lIIll->lllIl,IllIl,
IIlIll);}else if(lIIll->IIlIl){if(IIlIll<lIIll->IIlIl->IIIlI.lIlIl){IIIll=-
EMSGSIZE;}else{memcpy(IllIl,lIIll->IIlIl,lIIll->IIlIl->IIIlI.lIlIl);if(lIIll->
IIlIl->IIIlI.lIIlIII==lIllIIIl){lIllI->IlIIlIlI=(0x1745+1426-0x1cd6);}}}else{
IIIll=-EIO;}IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64" "\n"
,IIIll);return IIIll;}int llIlllllI(struct IlIlIl*lIllI,struct llIIIl*lIIll,
IllII IIlIl,int*status){int IIIll;if(!list_empty(&lIIll->IIIllIl)){IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x6e\x70\x61\x63\x6b\x69\x6e\x67\x20\x75\x72\x62" "\n"
);IIIll=llllIIlIl(IIlIl,&lIIll->IIIllIl,status);}else{*status=llllIlIl(IIlIl->
IIIlI.Status);IIIll=(0x184c+3397-0x2591);}return IIIll;}void lIlIlIlII(struct 
kref*IIIIllI){struct IlIlIl*lIllI=container_of(IIIIllI,struct IlIlIl,lIIlll);
IlllI(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x64\x65\x73\x74\x72\x6f\x79\x28\x70\x76\x73\x74\x75\x62\x3d\x30\x78\x25\x70\x29" "\n"
,lIllI);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IlIlIllll);
#endif
IlIIllll(lIllI);IlIIIl(lIllI);}
static inline size_t IIIIllIll(struct urb*lIlll,void*IllIl){int i;void*IIllII;if
(!lIlll->transfer_buffer)return(0xb86+5815-0x223d);IIllII=IllIl;for(i=
(0x5a5+2167-0xe1c);i<lIlll->number_of_packets;i++){memcpy(lIlll->transfer_buffer
+lIlll->iso_frame_desc[i].offset,IIllII,lIlll->iso_frame_desc[i].actual_length);
IIllII+=lIlll->iso_frame_desc[i].actual_length;}return(size_t)(IIllII-IllIl);}
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)






int IIlIlIII(void*IllIl,struct urb*lIlll,int llIIl){
if(llIIl==(0x21b7+1121-0x2618))return(0x789+7474-0x24bb);if(IlllIIII&&((lIlll->
transfer_buffer==NULL)||(lIlll->transfer_flags&URB_NO_TRANSFER_DMA_MAP))&&(lIlll
->transfer_dma!=(0xe33+621-0x10a0))&&(lIlll->transfer_dma!=~(dma_addr_t)
(0x1456+4202-0x24c0))){IIIllllIl(IllIl,lIlll->transfer_dma,llIIl);}else if(lIlll
->transfer_buffer){memcpy(IllIl,lIlll->transfer_buffer,llIIl);}else return-
EINVAL;return llIIl;}





int lIllIlll(struct urb*lIlll,void*IllIl,int llIIl){
if(llIIl==(0x85f+6899-0x2352))return(0x1e87+309-0x1fbc);if(IlllIIII&&((lIlll->
transfer_buffer==NULL)||(lIlll->transfer_flags&URB_NO_TRANSFER_DMA_MAP))&&(lIlll
->transfer_dma!=(0xff6+1716-0x16aa))&&(lIlll->transfer_dma!=~(dma_addr_t)
(0x112b+2015-0x190a))){lllllllll(lIlll->transfer_dma,IllIl,llIIl);}else if(lIlll
->transfer_buffer){memcpy(lIlll->transfer_buffer,IllIl,llIIl);}else return-
EINVAL;return llIIl;}





int llIIIllII(void*IllIl,struct urb*lIlll,int llIIl){
if(llIIl==(0x1342+1905-0x1ab3))return(0xe2+3013-0xca7);
#if KERNEL_LT_EQ((0x180b+1985-0x1fca),(0x1032+4893-0x2349),(0x125c+603-0x1495))
if(IlllIIII&&((lIlll->setup_packet==NULL)||(lIlll->transfer_flags&
URB_NO_SETUP_DMA_MAP))&&(lIlll->setup_dma!=(0xaba+7212-0x26e6))&&(lIlll->
setup_dma!=~(dma_addr_t)(0x775+837-0xaba))){IIIllllIl(IllIl,lIlll->setup_dma,
llIIl);}else
#endif
if(lIlll->setup_packet){memcpy(IllIl,lIlll->setup_packet,llIIl);}else return-
EINVAL;return llIIl;}





int llllIlIll(struct urb*lIlll,void*IllIl,int llIIl){
if(llIIl==(0x7f7+763-0xaf2))return(0xfc9+5759-0x2648);
#if KERNEL_LT_EQ((0x785+7-0x78a),(0xb6d+6634-0x2551),(0x658+265-0x73f))
if(IlllIIII&&((lIlll->setup_packet==NULL)||(lIlll->transfer_flags&
URB_NO_SETUP_DMA_MAP))&&(lIlll->setup_dma!=(0x4ed+681-0x796))&&(lIlll->setup_dma
!=~(dma_addr_t)(0x1764+731-0x1a3f))){lllllllll(lIlll->setup_dma,IllIl,llIIl);}
else
#endif
if(lIlll->setup_packet){memcpy(lIlll->setup_packet,IllIl,llIIl);}else return-
EINVAL;return llIIl;}


static inline size_t IlIIlIlll(void*IllIl,struct urb*lIlll){if(IlllIIII&&((lIlll
->transfer_buffer==NULL)||(lIlll->transfer_flags&URB_NO_TRANSFER_DMA_MAP))&&(
lIlll->transfer_dma!=(0xa84+5880-0x217c))&&(lIlll->transfer_dma!=~(dma_addr_t)
(0x24d+2921-0xdb6))){int i;void*lllIllI=IllIl;dma_addr_t IIllII;void*lllIIl;
unsigned long flags;unsigned long IIIllll,IIlIIl;unsigned long lIlIIIl,IIIIlll,
IIlllll,lIIIIlI;IIlllll=(0x8ef+5489-0x1e60);lllIIl=NULL;local_irq_save(flags);
for(i=(0xa42+4981-0x1db7);i<lIlll->number_of_packets;i++){IIlIIl=lIlll->
iso_frame_desc[i].length;IIllII=lIlll->transfer_dma+lIlll->iso_frame_desc[i].
offset;while(IIlIIl){lIIIIlI=IIllII>>PAGE_SHIFT;if(lIIIIlI!=IIlllll){if(IIlllll)
#if KERNEL_GT_EQ((0x1466+1601-0x1aa5),(0x566+4076-0x154c),(0x344+599-0x576))
kunmap_atomic(lllIIl);
#else
kunmap_atomic(lllIIl,KM_IRQ0);
#endif
IIlllll=lIIIIlI;
#if KERNEL_GT_EQ((0x1161+2129-0x19b0),(0x6bc+903-0xa3d),(0x459+560-0x664))
lllIIl=kmap_atomic(pfn_to_page(lIIIIlI));
#else
lllIIl=kmap_atomic(pfn_to_page(lIIIIlI),KM_IRQ0);
#endif
}lIlIIIl=IIllII&(PAGE_SIZE-(0xd2+7515-0x1e2c));IIIIlll=PAGE_SIZE-lIlIIIl;IIIllll
=(IIIIlll<IIlIIl)?IIIIlll:IIlIIl;memcpy(lllIllI,lllIIl+lIlIIIl,IIIllll);IIllII+=
IIIllll;lllIllI+=IIIllll;IIlIIl-=IIIllll;}}if(IIlllll)
#if KERNEL_GT_EQ((0xa69+5793-0x2108),(0x2f+2320-0x939),(0xe93+1158-0x12f4))
kunmap_atomic(lllIIl);
#else
kunmap_atomic(lllIIl,KM_IRQ0);
#endif
local_irq_restore(flags);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x61\x63\x6b\x5f\x69\x73\x6f\x63\x68\x5f\x62\x75\x66\x3a\x20\x70\x61\x63\x6b\x65\x64\x3d\x25\x6c\x75" "\n"
,(unsigned long)(lllIllI-IllIl));return(size_t)(lllIllI-IllIl);}else if(lIlll->
transfer_buffer){return IllIlIlI(lIlll->iso_frame_desc,lIlll->number_of_packets,
IllIl,lIlll->transfer_buffer,(0x326+4159-0x1365));}IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x61\x63\x6b\x5f\x69\x73\x6f\x63\x68\x5f\x62\x75\x66\x3a\x20\x6e\x6f\x20\x62\x75\x66\x66\x65\x72" "\n"
);return(0x1f4+2126-0xa42);}static inline size_t lllIIIlIl(struct urb*lIlll,void
*IllIl){if(IlllIIII&&((lIlll->transfer_buffer==NULL)||(lIlll->transfer_flags&
URB_NO_TRANSFER_DMA_MAP))&&(lIlll->transfer_dma!=(0x1a62+1007-0x1e51))&&(lIlll->
transfer_dma!=~(dma_addr_t)(0x12d1+2854-0x1df7))){int i;void*IIllII=IllIl;
dma_addr_t lllIllI;void*lllIIl;unsigned long flags;unsigned long IIIllll,IIlIIl;
unsigned long lIlIIIl,IIIIlll,IIlllll,lIIIIlI;IIlllll=(0x8a9+7063-0x2440);lllIIl
=NULL;local_irq_save(flags);for(i=(0x124+9608-0x26ac);i<lIlll->number_of_packets
;i++){IIlIIl=lIlll->iso_frame_desc[i].actual_length;lllIllI=lIlll->transfer_dma+
lIlll->iso_frame_desc[i].offset;while(IIlIIl){lIIIIlI=lllIllI>>PAGE_SHIFT;if(
lIIIIlI!=IIlllll){if(IIlllll)
#if KERNEL_GT_EQ((0x459+6643-0x1e4a),(0x358+5101-0x173f),(0x2f7+1342-0x810))
kunmap_atomic(lllIIl);
#else
kunmap_atomic(lllIIl,KM_IRQ0);
#endif
IIlllll=lIIIIlI;
#if KERNEL_GT_EQ((0x9a7+2559-0x13a4),(0x1cb+5987-0x1928),(0x46a+5890-0x1b47))
lllIIl=kmap_atomic(pfn_to_page(lIIIIlI));
#else
lllIIl=kmap_atomic(pfn_to_page(lIIIIlI),KM_IRQ0);
#endif
}lIlIIIl=lllIllI&(PAGE_SIZE-(0x6a1+7922-0x2592));IIIIlll=PAGE_SIZE-lIlIIIl;
IIIllll=(IIIIlll<IIlIIl)?IIIIlll:IIlIIl;memcpy(lllIIl+lIlIIIl,IIllII,IIIllll);
IIllII+=IIIllll;lllIllI+=IIIllll;IIlIIl-=IIIllll;}}if(IIlllll)
#if KERNEL_GT_EQ((0x106f+2820-0x1b71),(0x2bb+2779-0xd90),(0x23c+3903-0x1156))
kunmap_atomic(lllIIl);
#else
kunmap_atomic(lllIIl,KM_IRQ0);
#endif
local_irq_restore(flags);IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x69\x73\x6f\x63\x68\x5f\x62\x75\x66\x3a\x20\x70\x61\x63\x6b\x65\x64\x3d\x25\x6c\x75" "\n"
,(unsigned long)(IIllII-IllIl));return(size_t)(IIllII-IllIl);}else if(lIlll->
transfer_buffer){return IIIIllIll(lIlll,IllIl);}IlllI(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x69\x73\x6f\x63\x68\x5f\x62\x75\x66\x3a\x20\x6e\x6f\x20\x62\x75\x66\x66\x65\x72" "\n"
);return(0xb14+6701-0x2541);}
#else 

static inline int lIllIlll(struct urb*lIlll,void*IllIl,int llIIl){if(!llIIl)
return(0x1d9+4136-0x1201);if(!lIlll->transfer_buffer)return-EINVAL;memcpy(lIlll
->transfer_buffer,IllIl,llIIl);return llIIl;}static inline int IIlIlIII(void*
IllIl,struct urb*lIlll,int llIIl){if(!llIIl)return(0x63c+5529-0x1bd5);if(!lIlll
->transfer_buffer)return-EINVAL;memcpy(IllIl,lIlll->transfer_buffer,llIIl);
return llIIl;}static inline int llllIlIll(struct urb*lIlll,void*IllIl,int llIIl)
{if(!llIIl)return(0x8a4+7544-0x261c);if(!lIlll->setup_packet)return-EINVAL;
memcpy(lIlll->setup_packet,IllIl,llIIl);return llIIl;}static inline int 
llIIIllII(void*IllIl,struct urb*lIlll,int llIIl){if(!llIIl)return
(0x12a8+4669-0x24e5);if(!lIlll->setup_packet)return-EINVAL;memcpy(IllIl,lIlll->
setup_packet,llIIl);return llIIl;}static inline size_t IlIIlIlll(void*IllIl,
struct urb*lIlll){if(!lIlll->transfer_buffer)return(0x1b5+6065-0x1966);return 
IllIlIlI(lIlll->iso_frame_desc,lIlll->number_of_packets,IllIl,lIlll->
transfer_buffer,(0xc+9496-0x2524));}

static inline size_t lllIIIlIl(struct urb*lIlll,void*IllIl){return IIIIllIll(
lIlll,IllIl);}
#endif 




static inline int IlIIlllIl(struct list_head*lIllIlI,lllIII lllIl,void*IllIl,
size_t IIlIll){int IIIll=(0x856+7171-0x2459);int llIIIII=sizeof(IlIIIlIlI);IllII
 IIlIl=IllIl;struct IlIIIll*llIIII;IIlIl->IIIlI.lIIlIl=lllIl;IIlIl->IIIlI.
IllIIll=(0x1bf9+2463-0x2598);IIlIl->IIIlI.lIlIl=llIIIII;IIlIl->IIIlI.lIIlIII=
IIlIlIll;IIlIl->IIIlI.Status=(0x161+6188-0x198d);IIlIl->IIIlI.Context=
(0x25c4+103-0x262b);if(IIlIll<IIlIl->IIIlI.lIlIl){return-EMSGSIZE;}llIIII=
list_entry(lIllIlI->prev,struct IlIIIll,lIlIII);IIlIl->IlIll.IIllI=
(0x904+4947-0x1c57);IIlIl->IlIll.Endpoint=usb_pipeendpoint(llIIII->lIlll->pipe);
IIlIl->IlIll.Flags=usb_pipein(llIIII->lIlll->pipe)?lIllII:(0x18e9+108-0x1955);
if(usb_pipein(llIIII->lIlll->pipe)&&!(llIIII->lIlll->transfer_flags&
URB_SHORT_NOT_OK)){IIlIl->IlIll.Flags|=lllllII;}


list_for_each_entry(llIIII,lIllIlI,lIlIII){if(usb_pipeout(llIIII->lIlll->pipe)){
if(IIlIll>=(IIlIl->IIIlI.lIlIl+llIIII->lIlll->transfer_buffer_length)){if(
IIlIlIII((char*)IllIl+IIlIl->IIIlI.lIlIl,llIIII->lIlll,llIIII->lIlll->
transfer_buffer_length)<(0x2550+113-0x25c1))return-EINVAL;}IIlIl->IIIlI.lIlIl+=
llIIII->lIlll->transfer_buffer_length;}IIlIl->IlIll.IIllI+=llIIII->lIlll->
transfer_buffer_length;}if(IIlIll<IIlIl->IIIlI.lIlIl){return-EMSGSIZE;}return 
IIIll;}static inline int IlIIIIllI(struct urb*lIlll,lllIII lllIl,void*IllIl,
size_t IIlIll){int IIIll=(0x333+5855-0x1a12);int llIIIII=sizeof(IIlIlIIIl);IllII
 IIlIl=IllIl;IIlIl->IIIlI.lIIlIl=lllIl;IIlIl->IIIlI.IllIIll=(0x12ca+2544-0x1cba)
;IIlIl->IIIlI.lIlIl=llIIIII;IIlIl->IIIlI.lIIlIII=llIIIIIl;IIlIl->IIIlI.Status=
(0x69c+7591-0x2443);IIlIl->IIIlI.Context=(0x92+5166-0x14c0);if(IIlIll<IIlIl->
IIIlI.lIlIl){return-EMSGSIZE;}IIlIl->lIllIl.IIllI=lIlll->transfer_buffer_length;
IIlIl->lIllIl.Interval=lIlll->interval;IIlIl->lIllIl.Endpoint=usb_pipeendpoint(
lIlll->pipe);IIlIl->lIllIl.Flags=usb_pipein(lIlll->pipe)?lIllII:
(0x15ab+96-0x160b);IIlIl->lIllIl.Flags|=(lIlll->transfer_flags&URB_SHORT_NOT_OK)
?(0xf6d+1329-0x149e):lllllII;if(usb_pipeout(lIlll->pipe)){if(IIlIll>=(IIlIl->
IIIlI.lIlIl+lIlll->transfer_buffer_length)){if(IIlIlIII((char*)IllIl+IIlIl->
IIIlI.lIlIl,lIlll,lIlll->transfer_buffer_length)<(0x252+876-0x5be))return-EINVAL
;}IIlIl->IIIlI.lIlIl+=lIlll->transfer_buffer_length;}if(IIlIll<IIlIl->IIIlI.
lIlIl){return-EMSGSIZE;}return IIIll;}static inline int IllIIIIII(struct urb*
lIlll,lllIII lllIl,void*IllIl,size_t IIlIll){int IIIll=(0x19c+3112-0xdc4);IllII 
IIlIl=IllIl;int i;int llIIIII=sizeof(IlIlIIll)-sizeof(lllllIll)+sizeof(lllllIll)
*lIlll->number_of_packets;IIlIl->IIIlI.lIIlIl=lllIl;IIlIl->IIIlI.IllIIll=
(0x134c+4142-0x237a);IIlIl->IIIlI.lIlIl=llIIIII;IIlIl->IIIlI.lIIlIII=IllllllI;
IIlIl->IIIlI.Status=(0xc20+3292-0x18fc);IIlIl->IIIlI.Context=(0x5ec+2657-0x104d)
;if(IIlIll<IIlIl->IIIlI.lIlIl){return-EMSGSIZE;}IIlIl->lIIIl.Endpoint=
usb_pipeendpoint(lIlll->pipe);IIlIl->lIIIl.Flags=usb_pipein(lIlll->pipe)?lIllII:
(0x16d1+930-0x1a73);IIlIl->lIIIl.Flags|=(lIlll->transfer_flags&URB_SHORT_NOT_OK)
?(0x1ba0+1298-0x20b2):lllllII;


























IIlIl->lIIIl.Flags|=IlIllllII;
IIlIl->lIIIl.IIllI=lIlll->transfer_buffer_length;IIlIl->lIIIl.Interval=lIlll->
interval;IIlIl->lIIIl.IIIlIIIl=(0x1543+1533-0x1b40);
IIlIl->lIIIl.lIlIllII=(0xa30+4613-0x1c35);IIlIl->lIIIl.lIllIII=lIlll->
number_of_packets;for(i=(0x453+6460-0x1d8f);i<lIlll->number_of_packets;i++){
IIlIl->lIIIl.llIIlII[i].Offset=lIlll->iso_frame_desc[i].offset;IIlIl->lIIIl.
llIIlII[i].Length=lIlll->iso_frame_desc[i].length;IIlIl->lIIIl.llIIlII[i].Status
=(0xbf0+6462-0x252e);}if(usb_pipeout(lIlll->pipe)){if(IIlIll>=(IIlIl->IIIlI.
lIlIl+lIlll->transfer_buffer_length)){IIlIl->IIIlI.lIlIl+=IlIIlIlll((char*)IllIl
+IIlIl->IIIlI.lIlIl,lIlll);}else{
IIlIl->IIIlI.lIlIl+=lIlll->transfer_buffer_length;}}if(IIlIll<IIlIl->IIIlI.lIlIl
){return-EMSGSIZE;}return IIIll;}static inline int IIIIllllI(struct urb*lIlll,
lllIII lllIl,struct usb_ctrlrequest*IIIIIll,void*IllIl,size_t IIlIll){int IIIll=
(0x635+7501-0x2382);IllII IIlIl=IllIl;int llIIIII=sizeof(llllllIIl);IIlIl->IIIlI
.lIIlIl=lllIl;IIlIl->IIIlI.IllIIll=(0x1656+3958-0x25cc);IIlIl->IIIlI.lIlIl=
llIIIII;IIlIl->IIIlI.lIIlIII=IlllIIIl;IIlIl->IIIlI.Status=(0x12ac+3274-0x1f76);
IIlIl->IIIlI.Context=(0xbf9+5769-0x2282);if(IIlIll<IIlIl->IIIlI.lIlIl){return-
EMSGSIZE;}IIlIl->llIlII.Endpoint=usb_pipeendpoint(lIlll->pipe);IIlIl->llIlII.
Flags=usb_pipein(lIlll->pipe)?lIllII:(0x83a+4508-0x19d6);if(usb_pipein(lIlll->
pipe))IIlIl->llIlII.Flags|=(lIlll->transfer_flags&URB_SHORT_NOT_OK)?
(0x345+1013-0x73a):lllllII;IIlIl->llIlII.IIllIlI=IIIIIll->bRequestType;IIlIl->
llIlII.IIlIIlII=IIIIIll->bRequest;IIlIl->llIlII.llllIllI=le16_to_cpu(IIIIIll->
wValue);IIlIl->llIlII.IIlIllIlI=le16_to_cpu(IIIIIll->wIndex);IIlIl->llIlII.IIllI
=lIlll->transfer_buffer_length;if(usb_pipeout(lIlll->pipe)){if(IIlIll>=(IIlIl->
IIIlI.lIlIl+lIlll->transfer_buffer_length)){if(IIlIlIII((char*)IllIl+llIIIII,
lIlll,lIlll->transfer_buffer_length)<(0xe1a+4304-0x1eea))return-EINVAL;}IIlIl->
IIIlI.lIlIl+=lIlll->transfer_buffer_length;}if(IIlIll<IIlIl->IIIlI.lIlIl){return
-EMSGSIZE;}return IIIll;}static inline int IIlIlIlII(struct urb*lIlll,lllIII 
lllIl,struct usb_ctrlrequest*IIIIIll,int IlIIlIIl,void*IllIl,size_t IIlIll){int 
IIIll=(0x7ed+4610-0x19ef);IllII IIlIl=IllIl;int llIIIII=sizeof(IIlllIllI);IIlIl
->IIIlI.lIIlIl=lllIl;IIlIl->IIIlI.IllIIll=(0x1a46+1623-0x209d);IIlIl->IIIlI.
lIlIl=llIIIII;IIlIl->IIIlI.lIIlIII=IlIIlIIl?lIlIllIl:lIIIIIIl;IIlIl->IIIlI.
Status=(0x18f5+1996-0x20c1);IIlIl->IIIlI.Context=(0xbbf+6988-0x270b);if(IIlIll<
IIlIl->IIIlI.lIlIl){return-EMSGSIZE;}IIlIl->lIlIll.IIIIIlII=le16_to_cpu(IIIIIll
->wIndex);IIlIl->lIlIll.IIllI=lIlll->transfer_buffer_length;IIlIl->lIlIll.
lllIlIII=(le16_to_cpu(IIIIIll->wValue)>>(0x6d3+1608-0xd13))&(0x3d6+8355-0x237a);
IIlIl->lIlIll.llIllIII=le16_to_cpu(IIIIIll->wValue)&(0x678+8229-0x259e);switch(
IIIIIll->bRequestType&USB_TYPE_MASK){case USB_TYPE_STANDARD:IIlIl->lIlIll.
IIllIlI=IIllIllII;break;case USB_TYPE_CLASS:IIlIl->lIlIll.IIllIlI=lIIlIlIIl;
break;case USB_TYPE_VENDOR:IIlIl->lIlIll.IIllIlI=IIllIllIl;break;case 
USB_TYPE_RESERVED:IIlIl->lIlIll.IIllIlI=lIlIlIIll;break;default:IIlIl->lIlIll.
IIllIlI=(0xe96+3154-0x1ae8);}switch(IIIIIll->bRequestType&USB_RECIP_MASK){case 
USB_RECIP_DEVICE:IIlIl->lIlIll.IlIIIIll=IIllIlIll;break;case USB_RECIP_INTERFACE
:IIlIl->lIlIll.IlIIIIll=IllIIlllI;break;case USB_RECIP_ENDPOINT:IIlIl->lIlIll.
IlIIIIll=lllIIlIII;break;case USB_RECIP_OTHER:IIlIl->lIlIll.IlIIIIll=IllIIIIlI;
break;default:IIlIl->lIlIll.IIllIlI=(0x4b5+2615-0xeec);}if(!IlIIlIIl){if(IIlIll
>=(IIlIl->IIIlI.lIlIl+lIlll->transfer_buffer_length)){if(IIlIlIII((char*)IllIl+
llIIIII,lIlll,lIlll->transfer_buffer_length)<(0x1d4f+2247-0x2616))return-EINVAL;
}IIlIl->IIIlI.lIlIl+=lIlll->transfer_buffer_length;}if(IIlIll<IIlIl->IIIlI.lIlIl
){return-EMSGSIZE;}return IIIll;}static inline int llIIllllI(struct urb*lIlll,
lllIII lllIl,struct usb_ctrlrequest*IIIIIll,void*IllIl,size_t IIlIll){int IIIll=
(0x116d+2480-0x1b1d);IllII IIlIl=IllIl;int IIIlIIlI=sizeof(IIIIIllIl);IIlIl->
IIIlI.lIIlIl=lllIl;IIlIl->IIIlI.IllIIll=(0x6d2+7598-0x2480);IIlIl->IIIlI.lIlIl=
IIIlIIlI;IIlIl->IIIlI.lIIlIII=llIlllIl;IIlIl->IIIlI.Status=(0x144f+698-0x1709);
IIlIl->IIIlI.Context=(0x1d6+4294-0x129c);if(IIlIll<IIlIl->IIIlI.lIlIl){return-
EMSGSIZE;}IIlIl->lIIlIlI.IllllII=(IIIlll)le16_to_cpu(IIIIIll->wIndex);IIlIl->
lIIlIlI.IlIlllI=(IIIlll)le16_to_cpu(IIIIIll->wValue);return IIIll;}static inline
 int lllIIIIlI(struct urb*lIlll,lllIII lllIl,struct usb_ctrlrequest*IIIIIll,void
*IllIl,size_t IIlIll){int IIIll=(0x16e4+3016-0x22ac);IllII IIlIl=IllIl;int 
IIIlIIlI=sizeof(llIllIllI)-sizeof(IIlIl->IlIlIll.lIIIIIl[(0x394+6209-0x1bd5)]);
IIlIl->IIIlI.lIIlIl=lllIl;IIlIl->IIIlI.IllIIll=(0x1b06+739-0x1de9);IIlIl->IIIlI.
lIlIl=IIIlIIlI;IIlIl->IIIlI.lIIlIII=IllIllII;IIlIl->IIIlI.Status=
(0x5f9+2678-0x106f);IIlIl->IIIlI.Context=(0xec2+293-0xfe7);if(IIlIll<IIlIl->
IIIlI.lIlIl){return-EMSGSIZE;}IIlIl->IlIlIll.lllllIII=(IIIlll)le16_to_cpu(
IIIIIll->wValue);IIlIl->IlIlIll.IIlIlIlI=(0x1f51+831-0x2290);return IIIll;}
static inline int lIIIlIIII(struct urb*lIlll,lllIII lllIl,struct usb_ctrlrequest
*IIIIIll,void*IllIl,size_t IIlIll){int IIIll=(0x15a+1565-0x777);IllII IIlIl=
IllIl;int IIIlIIlI=sizeof(IIIIlIlIl);IIlIl->IIIlI.lIIlIl=lllIl;IIlIl->IIIlI.
IllIIll=(0xcd0+1022-0x10ce);IIlIl->IIIlI.lIlIl=IIIlIIlI;IIlIl->IIIlI.lIIlIII=
llIIllll;IIlIl->IIIlI.Status=(0x777+1013-0xb6c);IIlIl->IIIlI.Context=
(0xca5+27-0xcc0);if(IIlIll<IIlIl->IIIlI.lIlIl){return-EMSGSIZE;}IIlIl->IIlIIll.
Endpoint=IIIIIll->wIndex&(0x133+8649-0x22ed);
IIlIl->IIlIIll.Flags=(IIIIIll->wIndex&USB_DIR_IN)?lIllII:(0x943+4438-0x1a99);
return IIIll;}int IlllllIII(struct list_head*lIllIlI,lllIII lllIl,void*IllIl,
size_t IIlIll){int IIIll=-EINVAL;do
{struct usb_ctrlrequest lIIllI;struct urb*lIlll;struct IlIIIll*llIIII;llIIII=
list_entry(lIllIlI->next,struct IlIIIll,lIlIII);lIlll=llIIII->lIlll;if(!lIlll){
IlllI(
"\x75\x73\x62\x64\x5f\x70\x61\x63\x6b\x5f\x75\x72\x62\x5f\x6c\x69\x73\x74\x3a\x20\x70\x75\x72\x62\x20\x69\x73\x20\x6e\x75\x6c\x6c\x28\x30\x78\x25\x70\x29\x2c\x20\x70\x76\x75\x72\x62\x3d\x30\x78\x25\x70\x20\x70\x75\x72\x62\x5f\x6c\x69\x73\x74\x3d\x30\x78\x25\x70" "\n"
,lIlll,llIIII,lIllIlI);break;}switch(usb_pipetype(lIlll->pipe)){case PIPE_BULK:
IIIll=IlIIlllIl(lIllIlI,lllIl,IllIl,IIlIll);break;case PIPE_INTERRUPT:IIIll=
IlIIIIllI(lIlll,lllIl,IllIl,IIlIll);break;case PIPE_ISOCHRONOUS:IIIll=IllIIIIII(
lIlll,lllIl,IllIl,IIlIll);break;case PIPE_CONTROL:IIIll=llIIIllII(&lIIllI,lIlll,
sizeof(lIIllI));if(IIIll<(0x535+1752-0xc0d))break;if(IIIll!=sizeof(lIIllI)){
IIIll=-EINVAL;break;}if(lIIllI.bRequestType==(USB_DIR_IN|USB_TYPE_STANDARD|
USB_RECIP_DEVICE)&&lIIllI.bRequest==USB_REQ_GET_DESCRIPTOR){
IIIll=IIlIlIlII(lIlll,lllIl,&lIIllI,(0x409+1107-0x85b),IllIl,IIlIll);}else if(
lIIllI.bRequestType==(USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_DEVICE)&&lIIllI.
bRequest==USB_REQ_SET_DESCRIPTOR){
IIIll=IIlIlIlII(lIlll,lllIl,&lIIllI,(0x633+2386-0xf85),IllIl,IIlIll);}else if(
lIIllI.bRequestType==(USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_DEVICE)&&lIIllI.
bRequest==USB_REQ_SET_CONFIGURATION){
IIIll=lllIIIIlI(lIlll,lllIl,&lIIllI,IllIl,IIlIll);}else if(lIIllI.bRequestType==
(USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_INTERFACE)&&lIIllI.bRequest==
USB_REQ_SET_INTERFACE){
IIIll=llIIllllI(lIlll,lllIl,&lIIllI,IllIl,IIlIll);}else if(lIIllI.bRequestType==
(USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_ENDPOINT)&&lIIllI.bRequest==
USB_REQ_CLEAR_FEATURE&&lIIllI.wValue==USB_ENDPOINT_HALT){
IIIll=lIIIlIIII(lIlll,lllIl,&lIIllI,IllIl,IIlIll);}else{
IIIll=IIIIllllI(lIlll,lllIl,&lIIllI,IllIl,IIlIll);}break;default:IlIIlI(
"\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x70\x69\x70\x65\x20\x74\x79\x70\x65\x20\x25\x64\x20\x69\x6e\x20\x75\x72\x62" "\n"
,usb_pipetype(lIlll->pipe));IIIll=-EINVAL;break;}}while((0x142a+3465-0x21b3));if
(IIIll<(0x1635+3751-0x24dc)&&IIIll!=-EMSGSIZE){IlIIlI(
"\x62\x72\x6f\x6b\x65\x6e\x20\x75\x72\x62\x20\x64\x65\x74\x65\x63\x74\x65\x64\x2c\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x64\x65\x20\x25\x64" "\n"
,IIIll);}return IIIll;}



static inline int lIIIIlIll(IllII IIlIl,struct urb*lIlll,int IlIIlIIl){int IIIll
=(0x7f+3376-0xdaf);lIlll->actual_length=min((lllII)lIlll->transfer_buffer_length
,IIlIl->lIlIll.IIllI);if(IlIIlIIl){lIllIlll(lIlll,(char*)IIlIl+sizeof(IIlIl->
lIlIll),lIlll->actual_length);}return IIIll;}static inline int lIIIIIllI(IllII 
IIlIl,struct list_head*lIllIlI){int IIIll=(0x4f1+6920-0x1ff9);struct IlIIIll*
llIIII;unsigned long llIIIlIIl;unsigned char*IllIl;llIIIlIIl=IIlIl->IlIll.IIllI;
IllIl=(unsigned char*)IIlIl+sizeof(IIlIl->IlIll);


list_for_each_entry(llIIII,lIllIlI,lIlIII){llIIII->lIlll->actual_length=min((
unsigned long)llIIII->lIlll->transfer_buffer_length,llIIIlIIl);if(usb_pipein(
llIIII->lIlll->pipe)){IlllI(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x5f\x62\x75\x6c\x6b\x3a\x20\x63\x6f\x70\x79\x20\x25\x64\x20\x62\x79\x74\x65\x73\x20\x74\x6f\x20\x75\x72\x62\x20\x25\x70" "\n"
,llIIII->lIlll->actual_length,llIIII->lIlll);lIllIlll(llIIII->lIlll,IllIl,llIIII
->lIlll->actual_length);}llIIIlIIl-=llIIII->lIlll->actual_length;IllIl+=llIIII->
lIlll->actual_length;}return IIIll;}static inline int lllIIIlll(IllII IIlIl,
struct urb*lIlll){int i;int IIIll=(0x3d3+8019-0x2326);IIIlll*lIllllIII=(IIIlll*)
IIlIl+llllllll(IIlIl);if(IIlIl->lIIIl.lIllIII!=lIlll->number_of_packets)return-
EINVAL;lIlll->start_frame=IIlIl->lIIIl.IIIlIIIl;lIlll->error_count=IIlIl->lIIIl.
lIlIllII;lIlll->actual_length=(0x176c+401-0x18fd);for(i=(0xdc7+4785-0x2078);i<
lIlll->number_of_packets;i++){lIlll->iso_frame_desc[i].status=llllIlIl(IIlIl->
lIIIl.llIIlII[i].Status);lIlll->iso_frame_desc[i].actual_length=IIlIl->lIIIl.
llIIlII[i].Length;lIlll->actual_length+=lIlll->iso_frame_desc[i].actual_length;}
if(usb_pipein(lIlll->pipe))lllIIIlIl(lIlll,lIllllIII);return IIIll;}static 
inline int lIllIlIII(IllII IIlIl,struct urb*lIlll){int IIIll=
(0x10fc+5533-0x2699);lIlll->actual_length=min((lllII)lIlll->
transfer_buffer_length,IIlIl->llIlII.IIllI);if(usb_pipein(lIlll->pipe)){lIllIlll
(lIlll,(char*)IIlIl+sizeof(IIlIl->llIlII),lIlll->actual_length);}return IIIll;}
static inline int llIIIllIl(IllII IIlIl,struct urb*lIlll){int IIIll=
(0x1a7d+943-0x1e2c);lIlll->actual_length=min((lllII)lIlll->
transfer_buffer_length,IIlIl->lIllIl.IIllI);if(usb_pipein(lIlll->pipe)){lIllIlll
(lIlll,(char*)IIlIl+sizeof(IIlIl->lIllIl),lIlll->actual_length);}return IIIll;}
int llllIIlIl(IllII IIlIl,struct list_head*lIllIlI,int*status){int IIIll=
(0x1f0f+1782-0x2605);struct IlIIIll*llIIII=list_entry(lIllIlI->next,struct 
IlIIIll,lIlIII);struct urb*lIlll=llIIII->lIlll;*status=llllIlIl(IIlIl->IIIlI.
Status);switch(IIlIl->IIIlI.lIIlIII){case lIlIllIl:IlllI(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x47\x65\x74\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72" "\n"
);IIIll=lIIIIlIll(IIlIl,lIlll,(0x680+5421-0x1bac));break;case lIIIIIIl:IlllI(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x53\x65\x74\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72" "\n"
);IIIll=lIIIIlIll(IIlIl,lIlll,(0x1b12+1937-0x22a3));break;case IllIllII:IlllI(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x53\x65\x6c\x65\x63\x74\x43\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e" "\n"
);IIIll=(0x2263+873-0x25cc);break;case llIlllIl:IlllI(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x53\x65\x6c\x65\x63\x74\x49\x6e\x74\x65\x72\x66\x61\x63\x65" "\n"
);IIIll=(0x1915+1838-0x2043);break;case IlllIIIl:IlllI(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x43\x6f\x6e\x74\x72\x6f\x6c\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IIIll=lIllIlIII(IIlIl,lIlll);break;case IIlIlIll:IlllI(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x42\x75\x6c\x6b\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IIIll=lIIIIIllI(IIlIl,lIllIlI);break;case IllllllI:IlllI(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x49\x73\x6f\x63\x68\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IIIll=lllIIIlll(IIlIl,lIlll);break;case llIIIIIl:IlllI(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x49\x6e\x74\x65\x72\x72\x75\x70\x74\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IIIll=llIIIllIl(IIlIl,lIlll);break;case llIIllll:IlllI(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x43\x6c\x65\x61\x72\x53\x74\x61\x6c\x6c" "\n"
);IIIll=(0x81+1695-0x720);break;case lIllIIIl:IlllI(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x52\x65\x73\x65\x74\x50\x6f\x72\x74" "\n"
);IIIll=(0xb22+1300-0x1036);break;default:IlllI(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e" "\n"
);IIIll=-EINVAL;break;}return IIIll;}void IllIlllII(struct IlIlIl*lIllI,lllII*
busnum,lllII*devnum){if(busnum)*busnum=lIllI->parent->self.busnum;
if(devnum)*devnum=lIllI->llIIIll;}
























































void IIlIlII(struct IIllIl*Illll,int lIIlI,int IIlllI,int IIlIIII){
switch(IIlllI){case IlIlIIIl:case IIIlllll:case lIllllIl:lIlIIlI(Illll,lIIlI,
IllIIIII);break;case llIIlllI:lIlIIlI(Illll,lIIlI,IllIIIII);break;case IlIlllII:
Illll->IllllIl[lIIlI]&=~USB_PORT_STAT_C_CONNECTION;break;case IllIllIll:Illll->
IllllIl[lIIlI]&=~USB_PORT_STAT_C_ENABLE;break;case IIIlIIIlI:Illll->IllllIl[
lIIlI]&=~USB_PORT_STAT_C_SUSPEND;break;case IIIIllII:Illll->IllllIl[lIIlI]&=~
USB_PORT_STAT_C_RESET;break;}
switch(Illll->IlllIIll[lIIlI]){case IllIIIII:if(IIlllI==llIIlIIl)lIlIIlI(Illll,
lIIlI,IIIlIlI);break;case IIIlIlI:if(IIlllI==lIllIIll)lIlIIlI(Illll,lIIlI,
IlllIIl);break;case IlllIIl:if(IIlllI==llIIIlII)lIlIIlI(Illll,lIIlI,IIIlIlI);if(
IIlllI==IllIlIII)lIlIIlI(Illll,lIIlI,IlIllII);break;case IlIllII:if(IIlllI==
llIIIlII)lIlIIlI(Illll,lIIlI,IIIlIlI);if(IIlllI==lIIlIlll)lIlIIlI(Illll,lIIlI,
IlllIIl);if(IIlllI==llIllllI)lIlIIlI(Illll,lIIlI,IlIllll);break;case IlIllll:if(
IIlllI==llIIIlII)lIlIIlI(Illll,lIIlI,IIIlIlI);if(IIlllI==lIIlIlll)lIlIIlI(Illll,
lIIlI,IlllIIl);if(IIlllI==IllIlIII)lIlIIlI(Illll,lIIlI,IlIllII);if(IIlllI==
lIlIlIIII)lIlIIlI(Illll,lIIlI,IIlIlIlll);break;case IIlIlIlll:if(IIlllI==
llIIIlII)lIlIIlI(Illll,lIIlI,IIIlIlI);if(IIlllI==lIIlIlll)lIlIIlI(Illll,lIIlI,
IlllIIl);if(IIlllI==IllIlIII)lIlIIlI(Illll,lIIlI,IlIllII);if(IIlllI==lIIllIIIl||
IIlllI==IIIlllIII)lIlIIlI(Illll,lIIlI,IIIIIIII);break;case IIIIIIII:if(IIlllI==
llIIIlII)lIlIIlI(Illll,lIIlI,IIIlIlI);if(IIlllI==lIIlIlll)lIlIIlI(Illll,lIIlI,
IlllIIl);if(IIlllI==IllIlIII)lIlIIlI(Illll,lIIlI,IlIllII);if(IIlllI==llIllllI)
lIlIIlI(Illll,lIIlI,IlIllll);break;}}static inline int llIllIlI(int speed){
switch(speed){case USB_SPEED_HIGH:return USB_PORT_STAT_HIGH_SPEED;case 
USB_SPEED_LOW:return USB_PORT_STAT_LOW_SPEED;case USB_SPEED_FULL:return
(0xcb3+3492-0x1a57);}return(0x1746+3723-0x25d1);}
void lIlIIlI(struct IIllIl*Illll,int lIIlI,int IlIlIII){
int llllIlll=Illll->IlllIIll[lIIlI];if(IlIlIII==llllIlll)return;Illll->IlllIIll[
lIIlI]=IlIlIII;Illll->IlllIll[lIIlI]=(0x119a+622-0x1408);if(llllIlll==IlIllII)
Illll->IllllIl[lIIlI]|=USB_PORT_STAT_C_RESET;if(llllIlll==IIIIIIII)Illll->
IllllIl[lIIlI]|=USB_PORT_STAT_C_SUSPEND;switch(IlIlIII){case IllIIIII:Illll->
IIIllII[lIIlI]=(0x220+7483-0x1f5b);Illll->IllllIl[lIIlI]=(0x1219+5196-0x2665);
break;case IIIlIlI:Illll->IIIllII[lIIlI]=USB_PORT_STAT_POWER;if(llllIlll!=
IllIIIII)Illll->IllllIl[lIIlI]|=USB_PORT_STAT_C_CONNECTION;
if(Illll->IIIlIII[lIIlI]){lIlIIlI(Illll,lIIlI,IlllIIl);}break;case IlllIIl:Illll
->IIIllII[lIIlI]=USB_PORT_STAT_POWER|USB_PORT_STAT_CONNECTION;if(llllIlll==
IIIlIlI)Illll->IllllIl[lIIlI]|=USB_PORT_STAT_C_CONNECTION;break;case IlIllII:
Illll->IIIllII[lIIlI]=USB_PORT_STAT_POWER|USB_PORT_STAT_CONNECTION|
USB_PORT_STAT_RESET;
Illll->IlllIll[lIIlI]=jiffies+msecs_to_jiffies((0x1402+4635-0x25eb));
Illll->IlllIll[lIIlI]+=Illll->IlllIll[lIIlI]?(0x36a+3905-0x12ab):
(0xd32+727-0x1008);break;case IlIllll:Illll->IIIllII[lIIlI]=USB_PORT_STAT_POWER|
USB_PORT_STAT_CONNECTION|USB_PORT_STAT_ENABLE|llIllIlI(Illll->IIIlIII[lIIlI]->
speed);break;case IIlIlIlll:Illll->IIIllII[lIIlI]=USB_PORT_STAT_POWER|
USB_PORT_STAT_CONNECTION|USB_PORT_STAT_ENABLE|USB_PORT_STAT_SUSPEND|llIllIlI(
Illll->IIIlIII[lIIlI]->speed);break;case IIIIIIII:Illll->IIIllII[lIIlI]=
USB_PORT_STAT_POWER|USB_PORT_STAT_CONNECTION|USB_PORT_STAT_ENABLE|
USB_PORT_STAT_SUSPEND|llIllIlI(Illll->IIIlIII[lIIlI]->speed);
Illll->IlllIll[lIIlI]=jiffies+msecs_to_jiffies((0xaba+410-0xc40));
Illll->IlllIll[lIIlI]+=Illll->IlllIll[lIIlI]?(0x19c7+964-0x1d8b):
(0x2e4+3168-0xf43);break;default:IlIIlI(
"\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x65\x77\x20\x70\x6f\x72\x74\x20\x73\x74\x61\x74\x65" "\n"
);break;}}
#if KERNEL_GT_EQ((0x1224+1057-0x1643),(0x5c7+4332-0x16ad),(0x1007+5783-0x2677)) \
|| RHEL_RELEASE_GT_EQ((0x2343+790-0x2653),(0x3f1+4931-0x1731)) 

























void IllIlIl(struct IIllIl*Illll,int lIIlI,int IIlllI,int IIlIIII){
switch(IIlllI){case IlIlIIIl:case lIllllIl:llIIIlI(Illll,lIIlI,IllIIIII);return;
case IlIlllII:Illll->IllllIl[lIIlI]&=~USB_PORT_STAT_C_CONNECTION;return;case 
IIIIllII:Illll->IllllIl[lIIlI]&=~USB_PORT_STAT_C_RESET;return;case IllllIlIl:
Illll->IllllIl[lIIlI]&=~USB_PORT_STAT_C_BH_RESET;return;case lIlIllIlI:Illll->
IllllIl[lIIlI]&=~USB_PORT_STAT_C_LINK_STATE;return;case lIlllIIl:if(IIlIIII==
(0x1ad+4580-0x138d)){
llIIIlI(Illll,lIIlI,IlllIIl);return;}break;}
switch(Illll->IlllIIll[lIIlI]){case IllIIIII:if(IIlllI==IIIlllll)llIIIlI(Illll,
lIIlI,IIIlIlI);break;case IlIIIIlI:if(IIlllI==llIIlIIl)llIIIlI(Illll,lIIlI,
IIIlIlI);if(IIlllI==IllIlIII)llIIIlI(Illll,lIIlI,IlIllII);break;case IIIlIlI:if(
IIlllI==llIIlllI)llIIIlI(Illll,lIIlI,IlIIIIlI);if(IIlllI==lIllIIll)llIIIlI(Illll
,lIIlI,IlIllll);break;case IlllIIl:if(IIlllI==llIIlllI)llIIIlI(Illll,lIIlI,
IlIIIIlI);if(IIlllI==IllIlIII)llIIIlI(Illll,lIIlI,IlIllII);if(IIlllI==lIlllIIl&&
IIlIIII==(0x11+1803-0x717)){


llIIIlI(Illll,lIIlI,IIIlIlI);}break;case IlIllll:if(IIlllI==llIIlllI)llIIIlI(
Illll,lIIlI,IlIIIIlI);if(IIlllI==llIIIlII)llIIIlI(Illll,lIIlI,IIIlIlI);if(IIlllI
==IllIlIII)llIIIlI(Illll,lIIlI,IlIllII);if(IIlllI==lIlllIIl&&IIlIIII==
(0x1bb7+298-0x1ce1)){
if(Illll->lIlIllI[lIIlI]==USB_SS_PORT_LS_U3){

Illll->IllllIl[lIIlI]|=USB_PORT_STAT_C_LINK_STATE;}llllIII(Illll,lIIlI,
USB_SS_PORT_LS_U0);}if(IIlllI==lIlllIIl&&IIlIIII==(0x102c+340-0x117f)){

if(Illll->lIlIllI[lIIlI]==USB_SS_PORT_LS_U0){llllIII(Illll,lIIlI,
USB_SS_PORT_LS_U1);}}if(IIlllI==lIlllIIl&&IIlIIII==(0x646+2689-0x10c5)){

if(Illll->lIlIllI[lIIlI]==USB_SS_PORT_LS_U0){llllIII(Illll,lIIlI,
USB_SS_PORT_LS_U2);}}if(IIlllI==lIlllIIl&&IIlIIII==(0xefb+2821-0x19fd)){

if(Illll->lIlIllI[lIIlI]==USB_SS_PORT_LS_U0||Illll->lIlIllI[lIIlI]==
USB_SS_PORT_LS_U1||Illll->lIlIllI[lIIlI]==USB_SS_PORT_LS_U2){

if(Illll->lIlIllI[lIIlI]!=USB_SS_PORT_LS_U0){llllIII(Illll,lIIlI,
USB_SS_PORT_LS_U0);}llllIII(Illll,lIIlI,USB_SS_PORT_LS_U3);}}break;case IlIllII:
if(IIlllI==llIIlllI)llIIIlI(Illll,lIIlI,IlIIIIlI);if(IIlllI==llIIIlII)llIIIlI(
Illll,lIIlI,IIIlIlI);if(IIlllI==llIllllI)llIIIlI(Illll,lIIlI,IlIllll);break;}}
static inline int lIIIlIlIl(int speed){switch(speed){case USB_SPEED_SUPER:return
 USB_PORT_STAT_SPEED_5GBPS;default:return(0x1e5+4965-0x154a);}return
(0x6ef+549-0x914);}
void llIIIlI(struct IIllIl*Illll,int lIIlI,int IlIlIII){int IIllllll=Illll->
IIIllII[lIIlI];int llllIlll=Illll->IlllIIll[lIIlI];if(IlIlIII==llllIlll)return;
Illll->IlllIIll[lIIlI]=IlIlIII;Illll->IlllIll[lIIlI]=(0x802+1762-0xee4);switch(
IlIlIII){case IllIIIII:llllIII(Illll,lIIlI,USB_SS_PORT_LS_SS_DISABLED);Illll->
IIIllII[lIIlI]=Illll->lIlIllI[lIIlI];Illll->IllllIl[lIIlI]=(0x15d+1167-0x5ec);
break;case IlIIIIlI:llllIII(Illll,lIIlI,USB_SS_PORT_LS_RX_DETECT);Illll->IIIllII
[lIIlI]=Illll->lIlIllI[lIIlI];Illll->IllllIl[lIIlI]=(0x798+3132-0x13d4);
break;case IlllIIl:llllIII(Illll,lIIlI,USB_SS_PORT_LS_SS_DISABLED);Illll->
IIIllII[lIIlI]=Illll->lIlIllI[lIIlI]|USB_SS_PORT_STAT_POWER;if(IIllllll&
USB_PORT_STAT_CONNECTION)Illll->IllllIl[lIIlI]|=USB_PORT_STAT_C_CONNECTION;
break;case IIIlIlI:llllIII(Illll,lIIlI,USB_SS_PORT_LS_RX_DETECT);Illll->IIIllII[
lIIlI]=Illll->lIlIllI[lIIlI]|USB_SS_PORT_STAT_POWER;if(IIllllll&
USB_PORT_STAT_CONNECTION)Illll->IllllIl[lIIlI]|=USB_PORT_STAT_C_CONNECTION;

if(Illll->IIIlIII[lIIlI]){llIIIlI(Illll,lIIlI,IlIllll);}break;case IlIllll:
llllIII(Illll,lIIlI,USB_SS_PORT_LS_U0);Illll->IIIllII[lIIlI]=Illll->lIlIllI[
lIIlI]|USB_SS_PORT_STAT_POWER|USB_PORT_STAT_CONNECTION|USB_PORT_STAT_ENABLE|
lIIIlIlIl(Illll->IIIlIII[lIIlI]->speed);if(llllIlll==IlIllII)Illll->IllllIl[
lIIlI]|=USB_PORT_STAT_C_RESET;
if(llllIlll==IIIlIlI)Illll->IllllIl[lIIlI]|=USB_PORT_STAT_C_CONNECTION;
break;case IlIllII:Illll->IIIllII[lIIlI]=Illll->lIlIllI[lIIlI]|
USB_SS_PORT_STAT_POWER|USB_PORT_STAT_RESET|(IIllllll&USB_PORT_STAT_CONNECTION);

Illll->IlllIll[lIIlI]=jiffies+msecs_to_jiffies((0x1012+4748-0x226c));
Illll->IlllIll[lIIlI]+=Illll->IlllIll[lIIlI]?(0x18df+1604-0x1f23):
(0x11bf+353-0x131f);break;default:IlllI(
"\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x6f\x72\x74\x20\x73\x74\x61\x74\x65" "\n")
;break;}}
void llllIII(struct IIllIl*Illll,int lIIlI,int llIllIIll){switch(llIllIIll){case
 USB_SS_PORT_LS_U0:IlllI(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x55\x30" "\n"
);
Illll->lIlIllI[lIIlI]=USB_SS_PORT_LS_U0;break;case USB_SS_PORT_LS_U1:IlllI(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x55\x31" "\n"
);
Illll->lIlIllI[lIIlI]=USB_SS_PORT_LS_U1;break;case USB_SS_PORT_LS_U2:IlllI(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x55\x32" "\n"
);
Illll->lIlIllI[lIIlI]=USB_SS_PORT_LS_U2;break;case USB_SS_PORT_LS_U3:IlllI(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x55\x33" "\n"
);
Illll->lIlIllI[lIIlI]=USB_SS_PORT_LS_U3;break;case USB_SS_PORT_LS_SS_DISABLED:
IlllI(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x53\x53\x5f\x44\x49\x53\x41\x42\x4c\x45\x44" "\n"
);
Illll->lIlIllI[lIIlI]=USB_SS_PORT_LS_SS_DISABLED;break;case 
USB_SS_PORT_LS_RX_DETECT:IlllI(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x52\x58\x5f\x44\x45\x54\x45\x43\x54" "\n"
);
Illll->lIlIllI[lIIlI]=USB_SS_PORT_LS_RX_DETECT;break;}Illll->IIIllII[lIIlI]&=~
USB_PORT_STAT_LINK_STATE;Illll->IIIllII[lIIlI]|=Illll->lIlIllI[lIIlI];}
#endif 
#endif 

