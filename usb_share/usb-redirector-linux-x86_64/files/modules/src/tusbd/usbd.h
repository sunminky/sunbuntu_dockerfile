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

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <linux/ioctl.h>
#include <linux/usb.h>
#include <linux/types.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/poll.h>
#include <linux/spinlock.h>
#include <linux/list.h>
#include <linux/version.h>
#include <linux/kref.h>
#include <linux/device.h>
#include <linux/compat.h>
#include <linux/mm.h>
#include <linux/vmalloc.h>
#include <linux/module.h>
#include <asm/uaccess.h>
#define KERNEL_GT(IIIIIII,IlIlll,IllIIIll)			(LINUX_VERSION_CODE > \
KERNEL_VERSION((IIIIIII),(IlIlll),(IllIIIll)))
#define KERNEL_LT(IIIIIII,IlIlll,IllIIIll)			(LINUX_VERSION_CODE < \
KERNEL_VERSION((IIIIIII),(IlIlll),(IllIIIll)))
#define KERNEL_EQ(IIIIIII,IlIlll,IllIIIll)			(LINUX_VERSION_CODE == \
KERNEL_VERSION((IIIIIII),(IlIlll),(IllIIIll)))
#define KERNEL_GT_EQ(IIIIIII,IlIlll,IllIIIll)			(LINUX_VERSION_CODE >= \
KERNEL_VERSION((IIIIIII),(IlIlll),(IllIIIll)))
#define KERNEL_LT_EQ(IIIIIII,IlIlll,IllIIIll)			(LINUX_VERSION_CODE <= \
KERNEL_VERSION((IIIIIII),(IlIlll),(IllIIIll)))
#if defined(RHEL_RELEASE_CODE) 
#define RHEL_RELEASE_GT(IIIIIII,IlIlll) 		(RHEL_RELEASE_CODE > \
RHEL_RELEASE_VERSION((IIIIIII),(IlIlll)))
#define RHEL_RELEASE_LT(IIIIIII,IlIlll)		(RHEL_RELEASE_CODE < \
RHEL_RELEASE_VERSION((IIIIIII),(IlIlll)))
#define RHEL_RELEASE_EQ(IIIIIII,IlIlll)		(RHEL_RELEASE_CODE == \
RHEL_RELEASE_VERSION((IIIIIII),(IlIlll)))
#define RHEL_RELEASE_GT_EQ(IIIIIII,IlIlll)		(RHEL_RELEASE_CODE >= \
RHEL_RELEASE_VERSION((IIIIIII),(IlIlll)))
#define RHEL_RELEASE_LT_EQ(IIIIIII,IlIlll)		(RHEL_RELEASE_CODE <= \
RHEL_RELEASE_VERSION((IIIIIII),(IlIlll)))
#else
#define RHEL_RELEASE_GT(IIIIIII,IlIlll) 		(0x517+8133-0x24dc)
#define RHEL_RELEASE_LT(IIIIIII,IlIlll)		(0x658+1857-0xd99)
#define RHEL_RELEASE_EQ(IIIIIII,IlIlll)		(0xa1a+7060-0x25ae)
#define RHEL_RELEASE_GT_EQ(IIIIIII,IlIlll)		(0x2b7+2859-0xde2)
#define RHEL_RELEASE_LT_EQ(IIIIIII,IlIlll)		(0x2f6+4516-0x149a)
#endif

#ifndef BUS_ID_SIZE
#define BUS_ID_SIZE (0x14a+9665-0x26f7)
#endif
#include "../public/pubstt2.h"
#include "../public/apitypes.h"
#include "../public/pubuniprotocol.h"
#include "../public/interface.h"
#include "../public/public_devices.h"
#include "utils.h"
#include "driver.h"
#include "cdev.h"
#include "stub.h"
#include "vhci.h"
#include "minor_loader.h"
#include "minor_stub.h"
#include "minor_vbus.h"
#include "minor_vstub.h"
#include "urb_chain.h"
#include "sg.h"

#if KERNEL_LT_EQ((0x1f3+2850-0xd13),(0x1af2+237-0x1bd9),(0x10b2+1768-0x178b))
#define IlllIIlll __stringify(KBUILD_MODNAME)
#else
#define IlllIIlll KBUILD_MODNAME
#endif

#ifndef CONFIG_PRINTK_TIME
#define llIIIIll(lIlIlIl, IlIlIlI...) printk(KERN_DEBUG \
"\x5b\x25\x30\x39\x75\x5d\x20\x25\x73\x3a\x20" lIlIlIl, jiffies_to_msecs(jiffies\
), IlllIIlll, ## IlIlIlI)
#else
#define llIIIIll(lIlIlIl, IlIlIlI...) printk(KERN_DEBUG "\x25\x73\x3a\x20" \
lIlIlIl, IlllIIlll, ## IlIlIlI)
#endif

#ifdef _USBD_DEBUG_
#define IlllI(lIlIlIl, IlIlIlI...) llIIIIll(lIlIlIl, ##IlIlIlI)
#define llIll(lIlIlIl, IlIlIlI...) llIIIIll("\x25\x73\x3a\x20" lIlIlIl, __func__\
, ##IlIlIlI)
#else
#define IlllI(lIlIlIl, IlIlIlI...) do {} while((0x184f+2981-0x23f4))
#define llIll(lIlIlIl, IlIlIlI...) do {} while((0x10ef+3043-0x1cd2))
#endif

#define IlIIlI(lIlIlIl, IlIlIlI...) llIIIIll(lIlIlIl, ##IlIlIlI)
extern size_t lIlllll;
#if KERNEL_LT_EQ((0xbb1+2974-0x174d),(0x2fc+3559-0x10dd),(0x13c4+2838-0x1ec3))
typedef unsigned long uintptr_t;
#endif
#if KERNEL_LT_EQ((0xd57+164-0xdf9),(0x1774+1579-0x1d99),(0x5d6+1288-0xacf))
#define atomic_xchg(IlIlIllIl, new) (xchg(&((IlIlIllIl)->counter), new))
#endif
#if KERNEL_LT((0x1a2a+1262-0x1f15),(0x408+1908-0xb6a),(0x1157+4698-0x23b1))




#undef strncasecmp
#define strncasecmp strnicmp
#endif

