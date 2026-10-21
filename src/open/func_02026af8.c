#include "m2c.h"
void func_02026af8(void *arg0) {
    s32 x;
    s32 v;

    x = M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), s32 *, 0xC);
    v = (s32) (((s64) x * 0x1B + 0x800) >> 12);
    M2C_FIELD(arg0, s32 *, 0x240) = v;
    M2C_FIELD(arg0, s32 *, 0x244) = 0x100;
    M2C_FIELD(arg0, s32 *, 0x24C) = 0xE6A;
}
