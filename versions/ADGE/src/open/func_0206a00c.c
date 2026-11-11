#include "m2c.h"
s32 func_0206a00c(void) {
    s32 b = (*(volatile u16 *) 0x400000A & 0x3C) >> 2;
    s32 a = (*(volatile u32 *) 0x4000000 & 0x7000000) >> 0x18;

    return 0x6000000 + (a << 0x10) + (b << 0xE);
}
