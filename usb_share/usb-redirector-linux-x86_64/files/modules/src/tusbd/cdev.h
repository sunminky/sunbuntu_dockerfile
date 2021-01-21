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

#ifndef IlIlIlllI
#define IlIlIlllI
struct IlIllIIl;struct IIIIII{struct{ssize_t(*read)(void*,char __user*,size_t);
ssize_t(*write)(void*,const char __user*,size_t);long(*unlocked_ioctl)(void*,
unsigned int,unsigned long);long(*compat_ioctl)(void*,unsigned int,unsigned long
);int(*open)(void*,int);int(*release)(void*,int);unsigned int(*poll)(void*,
struct file*lllIll,poll_table*);int(*mmap)(void*,struct vm_area_struct*IIllllI);
void(*IIIllIIl)(void*);void(*lIIllIII)(void*);}ops;int llllll;int lIlIIll;struct
 mutex mutex;
#if KERNEL_GT_EQ((0x28f+8180-0x2281),(0x1156+2464-0x1af0),(0x1e16+282-0x1f16)) 
struct device*dev;
#else 
struct class_device*dev;
#endif
struct IlIllIIl*llllIlII;void*context;};

struct IlIllIIl{const char*name;const char*IlIIIlIl;const char*(*IlIIIlII)(void*
);
};int IIIlIllIl(void);int llllllII(void);int lIIIIllI(struct IIIIII*lllll,int 
lllIllII,int lIlIIIll);void IIIIlIII(struct IIIIII*lllll);dev_t llIIIlIll(struct
 IIIIII*lllll);int IlllIlII(struct IIIIII*lllll);void lIIIIIlll(struct IIIIII*
lllll);void lIlIlIIIl(struct IIIIII*lllll);
#endif 

