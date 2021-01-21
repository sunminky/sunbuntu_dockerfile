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
int lIlIlllI(struct lllIlI*llllI,struct urb*IIIIlIll);int lIIIIlllI(struct 
lllIlI*llllI,struct urb*IIIIlIll);void IlllIIIll(struct urb*lIlll
#if KERNEL_LT((0x1fab+1183-0x2448),(0xec7+2837-0x19d6),(0xf00+2685-0x196a))
,struct pt_regs*IIlllIl
#endif
);struct lllIlI*llIIIIIll(int pipe,int interval,int lIIIIIlI,int lllIlll,struct 
usb_device*IlIlII,struct llIIlIl*lIIIlI,void*context,urb_chain_complete_t 
complete,gfp_t IlIIl){struct lllIlI*llllI;int i,IIIll=(0x436+4813-0x1703);struct
 usb_host_endpoint*ep;IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2b\x2b" "\n");ep=
usb_pipein(pipe)?IlIlII->ep_in[usb_pipeendpoint(pipe)]:IlIlII->ep_out[
usb_pipeendpoint(pipe)];if(!ep){IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x69\x73\x20\x4e\x55\x4c\x4c" "\n"
);return NULL;}llllI=lIlIlll(sizeof(struct lllIlI)+sizeof(struct urb*)*lIIIlI->
llIIl,GFP_KERNEL);if(llllI==NULL){IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return NULL;}llllI->pipe=pipe;llllI->lIIIIIlI=lIIIIIlI;llllI->lllIlll=lllIlll;
llllI->IlIlII=IlIlII;llllI->llIIl=lIIIlI->llIIl;llllI->status=
(0x214+5497-0x178d);llllI->lllIlllll=(0x4f5+3103-0x1114);llllI->context=context;
llllI->complete=complete;atomic_set(&llllI->IlIlIllI,(0x2d6+9265-0x2707));
spin_lock_init(&llllI->lock);for(i=(0x44f+2505-0xe18);i<llllI->llIIl;i++){
if(IIIll<(0x7ff+7929-0x26f8)){break;}llllI->llllIl[i]=lIlllIl(lIIIlI->IlllIl[i].
number_of_packets,IlIIl);if(!llllI->llllIl[i]){IlIIlI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x61\x6e\x20\x75\x72\x62\x20\x2d\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79" "\n"
);IIIll=-ENOMEM;break;}llllI->llllIl[i]->transfer_flags|=URB_NO_INTERRUPT;switch
(usb_pipetype(pipe)){case PIPE_BULK:usb_fill_bulk_urb(llllI->llllIl[i],llllI->
IlIlII,pipe,lIIIlI->IlllIl[i].transfer_buffer,lIIIlI->IlllIl[i].
transfer_buffer_length,IlllIIIll,llllI);if(usb_pipein(pipe))llllI->llllIl[i]->
transfer_flags|=URB_SHORT_NOT_OK;break;case PIPE_ISOCHRONOUS:llllI->llllIl[i]->
dev=IlIlII;llllI->llllIl[i]->pipe=pipe;llllI->llllIl[i]->transfer_flags=
URB_ISO_ASAP;llllI->llllIl[i]->transfer_buffer=lIIIlI->IlllIl[i].transfer_buffer
;llllI->llllIl[i]->transfer_buffer_length=lIIIlI->IlllIl[i].
transfer_buffer_length;llllI->llllIl[i]->start_frame=-(0x1686+652-0x1911);llllI
->llllIl[i]->number_of_packets=lIIIlI->IlllIl[i].number_of_packets;llllI->llllIl
[i]->context=llllI;llllI->llllIl[i]->complete=IlllIIIll;if(interval){llllI->
llllIl[i]->interval=interval;}else{llllI->llllIl[i]->interval=ep?ep->desc.
bInterval:(0x2f6+8492-0x2421);llllI->llllIl[i]->interval=(0x1fb5+1605-0x25f9)<<(
llllI->llllIl[i]->interval-(0x35b+2716-0xdf6));}break;default:IlIIlI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x69\x70\x65\x20\x74\x79\x70\x65" "\n"
);IIIll=-EINVAL;break;}llllI->llllIl[i]->dev=NULL;
}if(IIIll<(0x76+2108-0x8b2)){
for(i--;i>=(0xac+5525-0x1641);i--){lIllIIlI(llllI->llllIl[i]);}IlIIIl(llllI);
IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return NULL;}
llllI->llllIl[llllI->llIIl-(0x943+1198-0xdf0)]->transfer_flags&=~
URB_NO_INTERRUPT;IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x73\x75\x63\x63\x65\x73\x73" "\n"
);return llllI;}

void IIIIIlIII(struct lllIlI*llllI){int i;IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x66\x72\x65\x65" "\n");for(i=
(0x707+3848-0x160f);i<llllI->llIIl;i++)if(llllI->llllIl[i])lIllIIlI(llllI->
llllIl[i]);IlIIIl(llllI);}void IlllIIIll(struct urb*lIlll
#if KERNEL_LT((0x109f+1042-0x14af),(0x415+4077-0x13fc),(0xe4f+316-0xf78))
,struct pt_regs*IIlllIl
#endif
){struct lllIlI*llllI=lIlll->context;








if(lIlll->status&&lIlll->status!=-ECONNRESET&&lIlll->status!=-ENOENT){int abort=
(0x130b+987-0x16e6);spin_lock(&llllI->lock);if(llllI->status==
(0xd3c+5459-0x228f))
{
if(lIlll->status==-EREMOTEIO&&llllI->lIIIIIlI){llllI->status=(0xa0+6777-0x1b19);
IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x3a\x20\x73\x68\x6f\x72\x74\x20\x74\x72\x61\x6e\x73\x66\x65\x72\x20\x64\x65\x74\x65\x63\x74\x65\x64\x20\x61\x6e\x64\x20\x69\x73\x20\x6f\x6b\x2e\x20\x61\x63\x74\x75\x61\x6c\x5f\x6c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n"
,lIlll->actual_length);}else{llllI->status=lIlll->status;IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x3a\x20\x65\x61\x72\x6c\x79\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIlll->status);}abort=(0x1877+2556-0x2272);}spin_unlock(&llllI->lock);if(abort)
lIlIlllI(llllI,lIlll);}
#if defined(_USBD_USE_EHCI_FIX_) && KERNEL_GT_EQ((0xbf5+1686-0x1289),\
(0xc92+111-0xcfb),(0x1f8f+661-0x220b)) && KERNEL_LT_EQ((0x1a0+6004-0x1912),\
(0x5f6+3278-0x12be),(0x1d0+7989-0x20e9))
if(llllI->lllIlll&&usb_pipeisoc(lIlll->pipe)&&lIlll->status==(0x30d+5876-0x1a01)
){if(atomic_read(&lIlll->kref.refcount)>(0x1ae9+2582-0x24fe))usb_put_urb(lIlll);
}
#endif
lIlll->dev=NULL;
llllI->lllIlllll+=lIlll->actual_length;
if(atomic_dec_and_test(&llllI->IlIlIllI)){IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x3a\x20\x61\x6c\x6c\x20\x75\x72\x62\x73\x20\x66\x69\x6e\x69\x73\x68\x65\x64\x20\x2d\x20\x63\x6f\x6d\x70\x6c\x65\x74\x69\x6e\x67\x20\x74\x68\x65\x20\x63\x68\x61\x69\x6e" "\n"
);llllI->complete(llllI);}}int IlIIIllll(struct lllIlI*llllI){int i,IlIIII,IIIll
=(0x1ff+6147-0x1a02);unsigned long flags;IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x2b\x2b" "\n")
;atomic_set(&llllI->IlIlIllI,llllI->llIIl);spin_lock_irqsave(&llllI->lock,flags)
;for(i=(0x1453+3038-0x2031),IlIIII=(0xd61+398-0xeef);i<llllI->llIIl;i++){if(
llllI->status!=(0x1a22+350-0x1b80))break;llllI->llllIl[i]->dev=llllI->IlIlII;
IIIll=usb_submit_urb(llllI->llllIl[i],GFP_ATOMIC);
if(IIIll!=(0x5ba+7559-0x2341))llllI->llllIl[i]->dev=NULL;
spin_unlock_irqrestore(&llllI->lock,flags);if(IIIll==-ENXIO||IIIll==-EAGAIN||
IIIll==-ENOMEM){IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x72\x65\x74\x72\x79\x69\x6e\x67\x20\x66\x61\x69\x6c\x65\x64\x20\x75\x72\x62" "\n"
);
if(IlIIII++<(0x1844+850-0x1b8c)){i--;IIIll=(0xb52+5119-0x1f51);yield();}}else{
cpu_relax();IlIIII=(0x1b05+1007-0x1ef4);}spin_lock_irqsave(&llllI->lock,flags);
if(IIIll!=(0x3a3+2543-0xd92)){IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x73\x75\x62\x6d\x69\x74\x20\x66\x61\x69\x6c\x65\x64" "\n"
);llllI->status=-(0xc13+5900-0x231e);break;}}spin_unlock_irqrestore(&llllI->lock
,flags);
if(IIIll<(0x8cf+4205-0x193c))lIlIlllI(llllI,NULL);else{int IIIlllIlI=llllI->
llIIl-i;
if(IIIlllIlI>(0x1567+2837-0x207c)&&atomic_sub_and_test(IIIlllIlI,&llllI->
IlIlIllI)){IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x69\x6f\x63\x6f\x6e\x74\x20\x69\x73\x20\x30\x2c\x20\x63\x61\x6c\x6c\x69\x6e\x67\x20\x63\x6f\x6d\x70\x6c\x65\x74\x69\x6f\x6e" "\n"
);llllI->complete(llllI);}}IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}int IIIlIIlII(struct lllIlI*llllI){int i;for(i=
(0x2d9+3187-0xf4c);i<llllI->llIIl;i++)usb_get_urb(llllI->llllIl[i]);return
(0x493+7313-0x2124);}int lIllIllll(struct lllIlI*llllI){int i;for(i=
(0xa1c+6377-0x2305);i<llllI->llIIl;i++)usb_put_urb(llllI->llllIl[i]);return
(0x1567+3128-0x219f);}int IIlIlllll(struct lllIlI*llllI){unsigned long flags;int
 abort=(0x863+1152-0xce3);IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x6e\x6c\x69\x6e\x6b\x3a\x20\x2b\x2b" "\n")
;spin_lock_irqsave(&llllI->lock,flags);if(llllI->status==(0x93c+2261-0x1211)){
llllI->status=-ECONNRESET;abort=(0xd48+248-0xe3f);}spin_unlock_irqrestore(&llllI
->lock,flags);if(abort)lIlIlllI(llllI,NULL);IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x6e\x6c\x69\x6e\x6b\x3a\x20\x2d\x2d" "\n")
;return(0x1901+2075-0x211c);}int lIlIIlIlI(struct lllIlI*llllI){unsigned long 
flags;IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x6b\x69\x6c\x6c\x3a\x20\x2b\x2b" "\n");
spin_lock_irqsave(&llllI->lock,flags);if(llllI->status==(0xba3+1438-0x1141)){
llllI->status=-ECONNRESET;}spin_unlock_irqrestore(&llllI->lock,flags);lIIIIlllI(
llllI,NULL);IlllI(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x6b\x69\x6c\x6c\x3a\x20\x2d\x2d" "\n");return
(0x133c+4003-0x22df);}int lIIIIlllI(struct lllIlI*llllI,struct urb*IIIIlIll){int
 i,IIIlIIll=(0x2a3+4689-0x14f4);for(i=(0x16a2+218-0x177c);i<llllI->llIIl;i++){if
(!IIIlIIll&&IIIIlIll){if(llllI->llllIl[i]==IIIIlIll)IIIlIIll=
(0x1485+1652-0x1af8);}else{if(llllI->llllIl[i]&&llllI->llllIl[i]->dev){
#if KERNEL_GT_EQ((0x1a93+743-0x1d78),(0x17ec+492-0x19d2),(0x319+1617-0x94e))


usb_poison_urb(llllI->llllIl[i]);
#else
usb_kill_urb(llllI->llllIl[i]);
#endif
}}}return(0x284+1535-0x883);}int lIlIlllI(struct lllIlI*llllI,struct urb*
IIIIlIll){int i,IIIlIIll=(0x19e8+397-0x1b75);for(i=(0xc56+3610-0x1a70);i<llllI->
llIIl;i++){if(!IIIlIIll&&IIIIlIll){if(llllI->llllIl[i]==IIIIlIll)IIIlIIll=
(0x15f0+2934-0x2165);}else{if(llllI->llllIl[i]&&llllI->llllIl[i]->dev)
usb_unlink_urb(llllI->llllIl[i]);}}return(0xb5f+1264-0x104f);}int lIlIIIIll(
struct lllIlI*llllI,struct urb*lIlll){int i;for(i=(0x1fc5+31-0x1fe4);i<llllI->
llIIl;i++)if(llllI->llllIl[i]==lIlll)break;return(i==llllI->llIIl)?-
(0x648+4090-0x1641):i;}





struct llIIlIl*IIIIIIlIl(size_t length,int lllIIllI){struct llIIlIl*llllI;size_t
 IllIIlll;size_t lIlIIIIII;size_t llIIl;int i;IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2b\x2b" "\n");if(
unlikely(lllIIllI==(0x2f+5272-0x14c7))){IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72" "\n"
);return NULL;}if(unlikely(length==(0x1537+3746-0x23d9))){IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x7a\x65\x72\x6f\x2d\x6c\x65\x6e\x67\x74\x68\x20\x62\x75\x66\x66\x65\x72" "\n"
);return NULL;}
IllIIlll=lIlllll-(lIlllll%lllIIllI);lIlIIIIII=length%IllIIlll;llIIl=(length-
(0xad4+2310-0x13d9))/IllIIlll+(0x1f46+867-0x22a8);IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x70\x61\x72\x74\x73\x69\x7a\x65\x3d\x25\x6c\x75\x20\x63\x6f\x75\x6e\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IllIIlll,(unsigned long)llIIl);llllI=lIlIlll(sizeof(struct 
llIIlIl)+sizeof(((struct llIIlIl*)(0xc3d+3989-0x1bd2))->IlllIl[
(0x1425+2719-0x1ec4)])*llIIl,GFP_KERNEL);if(unlikely(llllI==NULL)){IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return NULL;}llllI->llIIl=llIIl;
for(i=(0xa65+1600-0x10a5);i<llIIl;i++){
size_t IlllllI=(i==llIIl-(0x22da+757-0x25ce))?lIlIIIIII:IllIIlll;IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x61\x6c\x6c\x6f\x63\x61\x74\x69\x6e\x67\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,(unsigned long)IlllllI);llllI->IlllIl[i].transfer_buffer=lIlIlll(IlllllI,
GFP_KERNEL);llllI->IlllIl[i].transfer_buffer_length=IlllllI;llllI->IlllIl[i].
actual_length=(0x246+3878-0x116c);llllI->IlllIl[i].number_of_packets=
(0x57a+2786-0x105c);if(!llllI->IlllIl[i].transfer_buffer){IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);break;}}
if(i<llIIl){for(i--;i>=(0x7c0+4684-0x1a0c);i--){IlIIIl(llllI->IlllIl[i].
transfer_buffer);}IlIIIl(llllI);IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72" "\n"
);return NULL;}IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x73\x75\x63\x63\x65\x73\x73\x2c\x20\x62\x63\x3d\x30\x78\x25\x70" "\n"
,llllI);return llllI;}


struct llIIlIl*llIIIIlII(size_t length,lllllIll*lIIlllII,lllII lIlllIlI){struct 
llIIlIl*llllI;int i;size_t llIIl;void*lIIIIlll;size_t IlllllI;size_t llIllIll;
size_t llllIIll;IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2b\x2b\x20\x6c\x65\x6e\x67\x74\x68\x3d\x25\x6c\x75\x20\x6e\x75\x6d\x70\x61\x63\x6b\x65\x74\x73\x3d\x25\x64" "\n"
,(unsigned long)length,lIlllIlI);if(unlikely(length==(0x19f1+326-0x1b37))){IlllI
(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x7a\x65\x72\x6f\x2d\x6c\x65\x6e\x67\x74\x68\x20\x62\x75\x66\x66\x65\x72\x28\x31\x29" "\n"
);return NULL;}if(unlikely(lIlllIlI==(0x2441+474-0x261b))){IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x7a\x65\x72\x6f\x2d\x6c\x65\x6e\x67\x74\x68\x20\x62\x75\x66\x66\x65\x72\x28\x32\x29" "\n"
);return NULL;}



llIIl=(length-(0x1ed+3994-0x1186))/lIlllll+(0xe53+1855-0x1591);llllI=lIlIlll(
sizeof(struct llIIlIl)+sizeof(struct IIIIl)*llIIl,GFP_KERNEL);if(unlikely(llllI
==NULL)){IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return NULL;}llllI->llIIl=(0x730+6273-0x1fb1);
IlllllI=(0xca9+1797-0x13ae);llIllIll=(0x2c5+4701-0x1522);llllIIll=
(0xa81+6757-0x24e6);for(i=(0x2500+62-0x253e);i<lIlllIlI;i++){IlllllI+=lIIlllII[i
].Length;llIllIll++;

if(llllIIll>lIIlllII[i].Offset){IlIIlI(
"\x45\x52\x52\x4f\x52\x21\x21\x21\x20\x4e\x6f\x6e\x2d\x6c\x69\x6e\x65\x61\x72\x20\x69\x73\x6f\x63\x68\x72\x6f\x6e\x6f\x75\x73\x20\x62\x75\x66\x66\x65\x72\x20\x64\x65\x74\x65\x63\x74\x65\x64\x2e\x20\x50\x6c\x65\x61\x73\x65\x20\x72\x65\x70\x6f\x72\x74\x20\x74\x68\x69\x73\x2e" "\n"
);IlllI(
"\x5b\x25\x64\x5d\x20\x6c\x61\x73\x74\x5f\x6f\x66\x66\x73\x65\x74\x3d\x30\x78\x25\x6c\x78\x20\x6f\x66\x66\x73\x65\x74\x3d\x30\x78\x25\x6c\x78"
,i,(unsigned long)llllIIll,(unsigned long)lIIlllII[i].Offset);break;}llllIIll=
lIIlllII[i].Offset;


if(((lIlllIlI-i)==(0xa64+3150-0x16b1))||(IlllllI>=lIlllll&&llIllIll>=
(0x5b8+6631-0x1f9d)&&lIIlllII[i+(0xc8+9217-0x24c8)].Length>(0x540+1100-0x98c)&&(
lIlllIlI-i)>(0x73+4393-0x119a))){if(unlikely(llllI->llIIl>=llIIl)){IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x62\x75\x66\x66\x65\x72\x20\x73\x69\x7a\x65" "\n"
);break;}if(unlikely(length<IlllllI)){IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x69\x73\x6f\x20\x62\x75\x66\x66\x65\x72" "\n"
);break;}lIIIIlll=lIlIlll(IlllllI,GFP_KERNEL);if(unlikely(!lIIIIlll)){IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);break;}llllI->IlllIl[llllI->llIIl].transfer_buffer=lIIIIlll;llllI->IlllIl[
llllI->llIIl].transfer_buffer_length=IlllllI;llllI->IlllIl[llllI->llIIl].
actual_length=(0xa0d+2373-0x1352);llllI->IlllIl[llllI->llIIl].number_of_packets=
llIllIll;llllI->llIIl++;length-=IlllllI;IlllllI=(0xdd9+3830-0x1ccf);llIllIll=
(0x513+6120-0x1cfb);}}
if(i<lIlllIlI){for(i=(0xc6+5557-0x167b);i<llllI->llIIl;i++){IlIIIl(llllI->IlllIl
[i].transfer_buffer);}IlIIIl(llllI);IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72" "\n"
);return NULL;}IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x73\x75\x63\x63\x65\x73\x73\x2c\x20\x62\x63\x3d\x30\x78\x25\x70" "\n"
,llllI);return llllI;}size_t IIIIlIllI(struct llIIlIl*llllI,const void*IIIIl,
size_t length){int i;size_t IIllll,IIIll=(0x24f+5146-0x1669);IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x63\x6f\x70\x79\x5f\x66\x72\x6f\x6d\x5f\x75\x73\x65\x72\x3a\x20\x63\x6f\x75\x6e\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)llllI->llIIl);for(i=(0x116c+5410-0x268e);i<llllI->llIIl&&length>
(0x52f+1815-0xc46);i++){IIllll=min(length,llllI->IlllIl[i].
transfer_buffer_length);if(__copy_from_user(llllI->IlllIl[i].transfer_buffer,
IIIIl,IIllll)!=(0xaaf+4950-0x1e05)){IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x63\x6f\x70\x79\x5f\x66\x72\x6f\x6d\x5f\x75\x73\x65\x72\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72" "\n"
);break;}llllI->IlllIl[i].actual_length=IIllll;IIIIl+=IIllll;length-=IIllll;
IIIll+=IIllll;}return IIIll;}size_t lIIIlIIlI(struct llIIlIl*llllI,void*IIIIl,
size_t length){int i;size_t IIllll,IIIll=(0x2396+487-0x257d);IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x63\x6f\x70\x79\x5f\x74\x6f\x5f\x75\x73\x65\x72\x3a\x20\x63\x6f\x75\x6e\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)llllI->llIIl);for(i=(0x13ed+2978-0x1f8f);i<llllI->llIIl&&length>
(0x1155+299-0x1280);i++){IIllll=min(length,llllI->IlllIl[i].actual_length);if(
__copy_to_user(IIIIl,llllI->IlllIl[i].transfer_buffer,IIllll)!=
(0x975+1069-0xda2)){IlllI(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x63\x6f\x70\x79\x5f\x74\x6f\x5f\x75\x73\x65\x72\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72" "\n"
);break;}IIIIl+=IIllll;length-=IIllll;IIIll+=IIllll;}return IIIll;}void 
llllllIll(struct llIIlIl*llllI){int i;for(i=(0x40c+332-0x558);i<llllI->llIIl;i++
){if(llllI->IlllIl[i].transfer_buffer){IlIIIl(llllI->IlllIl[i].transfer_buffer);
}}IlIIIl(llllI);}
#endif 

