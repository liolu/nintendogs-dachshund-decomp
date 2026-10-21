#include "m2c.h"
void func_02025ec4(s32 arg0) {
    s32 *p;
    s32 v;

    p = (s32 *) M2C_FIELD(arg0, s32 *, 0x9E8);
    v = M2C_FIELD(p, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x240) = (s32) ((((s64) v << 5) + 0x800) >> 12);
    M2C_FIELD(arg0, s32 *, 0x244) = 0x200;
    M2C_FIELD(arg0, s32 *, 0x24C) = 0x99C;
}
