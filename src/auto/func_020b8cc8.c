#include "m2c.h"

extern s32 data_02153740;

void func_020b8cc8(s32 arg0, s32 arg1, s16 arg2) {
    M2C_FIELD((data_02153740 + (arg0 << 0xB) + (arg1 * 0x10)), s16 *, 0x14B0) = arg2;
}
