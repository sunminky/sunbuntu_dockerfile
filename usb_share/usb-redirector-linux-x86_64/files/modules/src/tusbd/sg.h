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

#ifndef lIIllIlII
#define lIIllIlII
#if KERNEL_GT_EQ((0xab6+1333-0xfe9),(0x2ea+7954-0x21f6),(0xa16+2713-0x1490))
#include <linux/scatterlist.h>
struct IIlIlIl{
#if KERNEL_LT_EQ((0x6ba+4730-0x1932),(0x22b+762-0x51f),(0x66a+1849-0xd81)) 
struct usb_sg_request*lIIIlll;
#else
struct scatterlist*lIIIlll;
#endif
struct scatterlist*sg;int num_sgs;};int IlIIlIIIl(struct IIlIlIl*sg,size_t 
length,int lllIIllI);void llIIlIIIl(struct IIlIlIl*sg);size_t lIIIIIIIl(struct 
IIlIlIl*sg,const void __user*IIIIl,size_t length);size_t IlIlIIIlI(struct 
IIlIlIl*sg,void __user*IIIIl,size_t length);
#endif 
#endif 

