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

#if KERNEL_LT((0x975+4617-0x1b7c),(0x1a79+125-0x1af0),(0xcb8+1486-0x1277))
#error This module requires kernel version 2.6.15 or newer
#endif

#if !defined(CONFIG_USB) && !defined(CONFIG_USB_MODULE)
#error This module requires kernel to be compiled with USB support (CONFIG_USB)
#endif

#if KERNEL_LT((0x8d5+2803-0x13c5),(0xd1c+1847-0x144b),(0xf17+5960-0x265f)) && !\
defined(CONFIG_HOTPLUG)
#error\
 This module requires kernel to be compiled with hotplug support (CONFIG_HOTPLUG)
#endif

#if !defined(CONFIG_NET) && !defined(CONFIG_NET_MODULE)
#error\
 This module requires kernel to be compiled with networking support (CONFIG_NET)
#endif

#if KERNEL_LT_EQ((0x1109+3312-0x1df7),(0xa52+4638-0x1c6a),(0x73+4348-0x1160)) &&\
 !defined(CONFIG_KOBJECT_UEVENT)
#error\
 This module requires kernel to be compiled with uevent support (CONFIG_KOBJECT_UEVENT)
#endif

#if !defined(CONFIG_UNIX) && !defined(CONFIG_UNIX_MODULE)
#error\
 This module requires kernel to be compiled with Unix domain sockets support (CONFIG_UNIX)
#endif
#ifdef _USBD_DEBUG_MEMORY_
atomic_t IlIIIIlll=ATOMIC_INIT((0xe6b+361-0xfd4));atomic_t IlIlllIlI=ATOMIC_INIT
((0x1461+1707-0x1b0c));atomic_t lllIllIl=ATOMIC_INIT((0x13f4+4038-0x23ba));
atomic_t lllIlIlIl=ATOMIC_INIT((0x2e0+715-0x5ab));
#ifdef ATOMIC64_INIT
atomic64_t lIlIIIlI=ATOMIC64_INIT((0x528+6743-0x1f7f));
#endif
atomic_t lIlIllll=ATOMIC_INIT((0x1be3+2022-0x23c9));atomic_t lIlllIIll=
ATOMIC_INIT((0x2c0+5785-0x1959));atomic_t IIllllIII=ATOMIC_INIT(
(0x1e4c+1145-0x22c5));atomic_t IIIllIllI=ATOMIC_INIT((0x36d+5829-0x1a32));
atomic_t IIIIlllll=ATOMIC_INIT((0x5d4+3271-0x129b));atomic_t lIlIllIII=
ATOMIC_INIT((0x235+3157-0xe8a));atomic_t llIlIlIll=ATOMIC_INIT((0xcb5+518-0xebb)
);atomic_t IIlIlIIll=ATOMIC_INIT((0x7cf+4005-0x1774));atomic_t IlIIIIII=
ATOMIC_INIT((0xe31+498-0x1023));atomic_t IIIllllII=ATOMIC_INIT(
(0x144c+3480-0x21e4));atomic_t IIIIIllII=ATOMIC_INIT((0x107+5083-0x14e2));
atomic_t llIIIlIl=ATOMIC_INIT((0x3b7+2006-0xb8d));atomic_t IlIlIllll=ATOMIC_INIT
((0x13b+8253-0x2178));
#endif 

size_t lIlllll=32768;static int lllllllI=(0xd15+3041-0x18f6);module_param(
lllllllI,int,(0x103f+5374-0x253d));static int __init IlIllllIl(void){int IIIll;
int llIIlllll=(0x232+7639-0x2009);
#ifdef _USBD_ENABLE_STUB_
int IlIIIIlII=(0x18d6+304-0x1a06);
#endif
#ifdef _USBD_ENABLE_VHCI_
int IIlllIIlI=(0x1ac4+2538-0x24ae);
#endif
IlllI("\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x2b\x2b" "\n");do{struct 
sysinfo lllIIIl;if(lllllllI){IlllI(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x70\x72\x6f\x62\x65\x2d\x6f\x6e\x6c\x79\x20\x6d\x6f\x64\x65" "\n"
);IIIll=(0x1ac9+1885-0x2226);break;}si_meminfo(&lllIIIl);


if(lllIIIl.totalram*lllIIIl.mem_unit<=1LL*1024LL*1024LL*1024LL)
{lIlllll=(0x189+8127-0x2128)*(0x145f+2455-0x19f6);}else if(lllIIIl.totalram*
lllIIIl.mem_unit<=2LL*1024LL*1024LL*1024LL)
{lIlllll=(0x654+4611-0x1827)*(0x1068+3533-0x1a35);}else if(lllIIIl.totalram*
lllIIIl.mem_unit<=4LL*1024LL*1024LL*1024LL)
{lIlllll=(0x526+3485-0x1283)*(0x432+5625-0x162b);}else
{lIlllll=(0x739+4573-0x1896)*(0x893+4810-0x175d);}IlllI(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x73\x75\x67\x67\x65\x73\x74\x65\x64\x20\x6d\x61\x78\x20\x61\x6c\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x20\x73\x69\x7a\x65\x20\x25\x6c\x75\x4b\x42" "\n"
,(unsigned long)lIlllll/(0x19a0+499-0x1793));IIIll=IIIlIllIl();if(IIIll!=
(0xe5f+3715-0x1ce2)){IlllI(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x75\x73\x62\x64\x5f\x63\x64\x65\x76\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}llIIlllll=(0x2fa+1818-0xa13);
#ifdef _USBD_ENABLE_STUB_
IIIll=lllIIIllI();if(IIIll!=(0x71f+4553-0x18e8)){IlllI(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}IlIIIIlII=(0x326+3534-0x10f3);
#endif
#ifdef _USBD_ENABLE_VHCI_
IIIll=IlIlIlIll();if(IIIll!=(0xba4+1678-0x1232)){IlllI(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}IIlllIIlI=(0x9b6+1864-0x10fd);
#endif
}while((0x4f0+5788-0x1b8c));if(IIIll!=(0x862+772-0xb66)){
#ifdef _USBD_ENABLE_VHCI_
if(IIlllIIlI)lIIllIlI();
#endif
#ifdef _USBD_ENABLE_STUB_
if(IlIIIIlII)lllllIIII();
#endif
if(llIIlllll)llllllII();}IlllI(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x2d\x2d" "\n");return IIIll;}
static void __exit usbd_exit(void){if(lllllllI){IlllI(
"\x75\x73\x62\x64\x5f\x65\x78\x69\x74\x3a\x20\x70\x72\x6f\x62\x65\x2d\x6f\x6e\x6c\x79\x20\x6d\x6f\x64\x65" "\n"
);return;}
#ifdef _USBD_ENABLE_VHCI_
lIIllIlI();
#endif
#ifdef _USBD_ENABLE_STUB_
lllllIIII();
#endif
llllllII();
#ifdef _USBD_DEBUG_MEMORY_
IlIIlI("\x73\x74\x61\x74\x73\x3a" "\n");IlIIlI(
"\x75\x72\x62\x20\x61\x6c\x6c\x6f\x63\x3a\x20\x25\x64" "\n",atomic_read(&
IlIIIIlll));IlIIlI("\x75\x72\x62\x20\x66\x72\x65\x65\x3a\x20\x25\x64" "\n",
atomic_read(&IlIlllIlI));IlIIlI(
"\x6d\x65\x6d\x20\x61\x6c\x6c\x6f\x63\x3a\x20\x25\x64" "\n",atomic_read(&
lllIllIl));IlIIlI("\x6d\x65\x6d\x20\x66\x72\x65\x65\x3a\x20\x25\x64" "\n",
atomic_read(&lllIlIlIl));
#ifdef ATOMIC64_INIT
IlIIlI("\x6d\x65\x6d\x20\x73\x69\x7a\x65\x3a\x20\x25\x6c\x6c\x64" "\n",(long 
long)atomic64_read(&lIlIIIlI));
#endif
IlIIlI("\x75\x72\x65\x71\x20\x63\x72\x65\x61\x74\x65\x3a\x20\x25\x64" "\n",
atomic_read(&lIlIllll));IlIIlI(
"\x75\x72\x65\x71\x20\x66\x72\x65\x65\x3a\x20\x25\x64" "\n",atomic_read(&
lIlllIIll));IlIIlI(
"\x75\x72\x65\x71\x20\x64\x65\x73\x74\x72\x6f\x79\x3a\x20\x25\x64" "\n",
atomic_read(&IIllllIII));IlIIlI(
"\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e\x20\x61\x6c\x6c\x6f\x63\x3a\x20\x25\x64" "\n"
,atomic_read(&IIIllIllI));IlIIlI(
"\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e\x20\x64\x65\x73\x74\x72\x6f\x79\x3a\x20\x25\x64" "\n"
,atomic_read(&IIIIlllll));IlIIlI(
"\x76\x72\x65\x71\x20\x63\x72\x65\x61\x74\x65\x3a\x20\x25\x64" "\n",atomic_read(
&lIlIllIII));IlIIlI("\x76\x72\x65\x71\x20\x66\x72\x65\x65\x3a\x20\x25\x64" "\n",
atomic_read(&llIlIlIll));IlIIlI(
"\x73\x74\x75\x62\x20\x63\x72\x65\x61\x74\x65\x3a\x20\x25\x64" "\n",atomic_read(
&IIlIlIIll));IlIIlI(
"\x73\x74\x75\x62\x20\x72\x65\x6d\x6f\x76\x65\x3a\x20\x25\x64" "\n",atomic_read(
&IlIIIIII));IlIIlI(
"\x73\x74\x75\x62\x20\x64\x65\x73\x74\x72\x6f\x79\x3a\x20\x25\x64" "\n",
atomic_read(&IIIllllII));IlIIlI(
"\x76\x73\x74\x75\x62\x20\x63\x72\x65\x61\x74\x65\x3a\x20\x25\x64" "\n",
atomic_read(&IIIIIllII));IlIIlI(
"\x76\x73\x74\x75\x62\x20\x72\x65\x6d\x6f\x76\x65\x3a\x20\x25\x64" "\n",
atomic_read(&llIIIlIl));IlIIlI(
"\x76\x73\x74\x75\x62\x20\x64\x65\x73\x74\x72\x6f\x79\x3a\x20\x25\x64" "\n",
atomic_read(&IlIlIllll));
#endif 
IlllI("\x75\x73\x62\x64\x5f\x65\x78\x69\x74" "\n");}module_init(IlIllllIl);
module_exit(usbd_exit);MODULE_LICENSE("\x47\x50\x4c");
