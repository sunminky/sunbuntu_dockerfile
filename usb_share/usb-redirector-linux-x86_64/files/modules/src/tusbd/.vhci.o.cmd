cmd_/home/sunbuntu/shells/Dockerfiles/usb_share/usb-redirector-linux-x86_64/files/modules/src/tusbd/vhci.o := gcc -Wp,-MD,/home/sunbuntu/shells/Dockerfiles/usb_share/usb-redirector-linux-x86_64/files/modules/src/tusbd/.vhci.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/9/include  -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -Iubuntu/include  -include ./include/linux/compiler_types.h -D__KERNEL__ -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Wno-format-security -std=gnu89 -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -DCONFIG_X86_X32_ABI -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_AVX512=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1 -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -fno-jump-tables -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 --param=allow-store-data-races=0 -Wframe-larger-than=1024 -fstack-protector-strong -Wno-unused-but-set-variable -Wimplicit-fallthrough -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -mrecord-mcount -mfentry -DCC_USING_FENTRY -flive-patching=inline-clone -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -fmacro-prefix-map=./= -fcf-protection=none -Wno-packed-not-aligned -D_USBD_HCD_H_INC_ -D_USBD_ENABLE_STUB_  -DMODULE  -DKBUILD_BASENAME='"vhci"' -DKBUILD_MODNAME='"tusbd"' -c -o /home/sunbuntu/shells/Dockerfiles/usb_share/usb-redirector-linux-x86_64/files/modules/src/tusbd/vhci.o /home/sunbuntu/shells/Dockerfiles/usb_share/usb-redirector-linux-x86_64/files/modules/src/tusbd/vhci.c

source_/home/sunbuntu/shells/Dockerfiles/usb_share/usb-redirector-linux-x86_64/files/modules/src/tusbd/vhci.o := /home/sunbuntu/shells/Dockerfiles/usb_share/usb-redirector-linux-x86_64/files/modules/src/tusbd/vhci.c

deps_/home/sunbuntu/shells/Dockerfiles/usb_share/usb-redirector-linux-x86_64/files/modules/src/tusbd/vhci.o := \
    $(wildcard include/config/x86/32.h) \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \

/home/sunbuntu/shells/Dockerfiles/usb_share/usb-redirector-linux-x86_64/files/modules/src/tusbd/vhci.o: $(deps_/home/sunbuntu/shells/Dockerfiles/usb_share/usb-redirector-linux-x86_64/files/modules/src/tusbd/vhci.o)

$(deps_/home/sunbuntu/shells/Dockerfiles/usb_share/usb-redirector-linux-x86_64/files/modules/src/tusbd/vhci.o):
