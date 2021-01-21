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

#ifndef IllllIllI
#define IllllIllI

#ifdef __KERNEL__
#include <linux/types.h>
#else
#include <stdint.h>
#endif
typedef int8_t lIllIIlIlI;typedef int16_t IlIlIIllll;typedef int32_t lllIIllII;
typedef int64_t IlIIIllllI;typedef uint8_t IIIlll;typedef uint16_t lIlIlI;
typedef uint32_t lllII;typedef uint64_t lllIII;typedef int BOOL;
#ifndef __KERNEL__
#include <semaphore.h>
typedef sem_t*IIlIllllIl;
#endif
#ifndef TRUE
#define TRUE (0x15a7+2951-0x212d)
#endif
#ifndef FALSE
#define FALSE (0x1368+4278-0x241e)
#endif
#ifndef __KERNEL__
#include <endian.h>
#include <byteswap.h>
#if __BYTE_ORDER == __BIG_ENDIAN
#define IllllIIII(IllIll) lIlIIlllI((IllIll))
#define IllIIIIll(IllIll) IIllIllll((IllIll))
#define IIllIIIlI(IllIll) IllIIllll((IllIll))
#define lIIIlIlll(IllIll) lIlIIlllI((IllIll))
#define llllIlIlI(IllIll) IIllIllll((IllIll))
#define lIlIlIllI(IllIll) IllIIllll((IllIll))
#else
#define IllllIIII(IllIll) (IllIll)
#define IllIIIIll(IllIll) (IllIll)
#define IIllIIIlI(IllIll) (IllIll)
#define lIIIlIlll(IllIll) (IllIll)
#define llllIlIlI(IllIll) (IllIll)
#define lIlIlIllI(IllIll) (IllIll)
#endif
# endif
#endif 

