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
#if KERNEL_GT_EQ((0xab4+5702-0x20f8),(0xd4d+792-0x105f),(0x579+4921-0x1893))
int IlIIlIIIl(struct IIlIlIl*IllIlI,size_t length,int lllIIllI){int i;size_t 
IIlIIIll=lIlllll-(lIlllll%lllIIllI);int num_sgs=(length+IIlIIIll-
(0x1948+3001-0x2500))/IIlIIIll;struct scatterlist*sg;
#if KERNEL_LT_EQ((0x20dc+926-0x2478),(0x137f+433-0x152a),(0x131c+4829-0x25d7)) 

int IIIlIlllI=((PAGE_SIZE-sizeof(*IllIlI->lIIIlll))&~((0x1e47+307-0x1f72)-
(0x2405+475-0x25df)))/sizeof(*IllIlI->sg);
#else

int IIIlIlllI=PAGE_SIZE/sizeof(*IllIlI->sg);
#endif
if(num_sgs>IIIlIlllI){IlllI(
"\x75\x73\x62\x64\x5f\x73\x67\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x74\x6f\x6f\x20\x6c\x61\x72\x67\x65" "\n"
);return-EOVERFLOW;}IllIlI->num_sgs=num_sgs;
#if KERNEL_LT_EQ((0xffb+1309-0x1516),(0x1ad0+3133-0x2707),(0x2dd+1011-0x6ae)) 

IllIlI->sg=IIIlIll(ALIGN(num_sgs*sizeof(*IllIlI->sg),sizeof(void*))+sizeof(*
IllIlI->lIIIlll),GFP_KERNEL);IllIlI->lIIIlll=(struct usb_sg_request*)((char*)
IllIlI->sg+ALIGN(num_sgs*sizeof(*IllIlI->sg),(0x50c+7229-0x2141)));IllIlI->
lIIIlll->sg=IllIlI->sg;
#else

IllIlI->sg=IIIlIll(num_sgs*sizeof(*IllIlI->lIIIlll),GFP_KERNEL);IllIlI->lIIIlll=
IllIlI->sg;
#endif
if(IllIlI->sg==NULL){IlllI(
"\x75\x73\x62\x64\x5f\x73\x67\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x73\x67\x20\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64\x28\x31\x29" "\n"
);return-ENOMEM;}sg_init_table(IllIlI->sg,IllIlI->num_sgs);for_each_sg(IllIlI->
sg,sg,IllIlI->num_sgs,i){size_t IlllllI=min(length,IIlIIIll);void*IIlIlIlIl=
lIlIlll(IlllllI,GFP_KERNEL);if(IIlIlIlIl==NULL)break;sg_set_buf(sg,IIlIlIlIl,
IlllllI);length-=IlllllI;}if(i<IllIlI->num_sgs){IlllI(
"\x75\x73\x62\x64\x5f\x61\x6c\x6c\x6f\x63\x5f\x6e\x5f\x63\x6f\x70\x79\x5f\x70\x61\x72\x74\x69\x6f\x74\x69\x6f\x6e\x65\x64\x5f\x75\x6e\x72\x62\x3a\x20\x73\x67\x20\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64\x28\x32\x29" "\n"
);IllIlI->num_sgs=i;llIIlIIIl(IllIlI);return-ENOMEM;}return(0x161+4869-0x1466);}
void llIIlIIIl(struct IIlIlIl*IllIlI){if(IllIlI->sg){int i;struct scatterlist*sg
;for_each_sg(IllIlI->sg,sg,IllIlI->num_sgs,i){IlIIIl(sg_virt(sg));}IlIIIl(IllIlI
->sg);}IllIlI->sg=NULL;IllIlI->lIIIlll=NULL;IllIlI->num_sgs=(0x6a9+5041-0x1a5a);
}size_t lIIIIIIIl(struct IIlIlIl*IllIlI,const void __user*IIIIl,size_t length){
int i;size_t IIIll=(0x24f3+164-0x2597);struct scatterlist*sg;for_each_sg(IllIlI
->sg,sg,IllIlI->num_sgs,i){size_t IlIIlll;if(length==(0x224f+1096-0x2697))break;
IlIIlll=min((size_t)sg->length,length);if(__copy_from_user(sg_virt(sg),IIIIl,
IlIIlll)){break;}length-=IlIIlll;IIIIl+=IlIIlll;IIIll+=IlIIlll;}return IIIll;}
size_t IlIlIIIlI(struct IIlIlIl*IllIlI,void __user*IIIIl,size_t length){int i;
size_t IIIll=(0x917+5784-0x1faf);struct scatterlist*sg;for_each_sg(IllIlI->sg,sg
,IllIlI->num_sgs,i){size_t IlIIlll;if(length==(0x1362+1474-0x1924))break;IlIIlll
=min((size_t)sg->length,length);if(__copy_to_user(IIIIl,sg_virt(sg),IlIIlll)){
break;}length-=IlIIlll;IIIIl+=IlIIlll;IIIll+=IlIIlll;}return IIIll;}
#endif 

