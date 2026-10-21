#include "m2c.h"
u32 func_0207ed9c(u32 arg0) {
    u32 old;
    u16 old_a = *(volatile u16 *)0x4000208;

    *(volatile u16 *)0x4000208 = 0;
    old = *(volatile u32 *)0x4000210;
    *(volatile u32 *)0x4000210 = old | arg0;
    (void)*(volatile u16 *)0x4000208;
    *(volatile u16 *)0x4000208 = old_a;
    return old;
}
