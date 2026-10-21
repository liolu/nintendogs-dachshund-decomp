#include "m2c.h"
void func_02026a9c(void *arg0) {
    s32 x;
    s32 v;

    x = M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), s32 *, 0xC);
    v = (s32) (((s64) x * 0xBA + 0x800) >> 12);
    M2C_FIELD(arg0, s32 *, 0x240) = v;
    M2C_FIELD(arg0, s32 *, 0x244) = 0x180;
    M2C_FIELD(arg0, s32 *, 0x24C) = 0xCD0;
}
