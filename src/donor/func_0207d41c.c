#include "m2c.h"
/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Mem_SetExpHeapGroupId from https://github.com/RonyxDumb/mkds src/arm9/020176b0_Mem_SetExpHeapGroupId.c (license: none),
 * reused by tools/donor_match.py */
M2C_UNK func_0205e15c(M2C_UNK, M2C_UNK);
extern void func_020cf19c();
u16 func_0207d41c(u32 arg0, u16 arg1) {
    u32 addr = arg0 + 0x24;
    u16 old = *(u16 *) (addr + 0x10);
    *(u16 *) (addr + 0x10) = arg1;
    return old;
}
