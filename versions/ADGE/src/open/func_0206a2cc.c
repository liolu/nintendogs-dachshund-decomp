#include "m2c.h"
s32 func_0206a2cc(void) {
    s32 b = (*(volatile u16 *) 0x400000A & 0x1F00) >> 8;
    s32 a = (*(volatile u32 *) 0x4000000 & 0x38000000) >> 0x1B;

    return 0x6000000 + (a << 0x10) + (b << 0xB);
}
