#include "m2c.h"

extern s32 data_02153740;

void func_020b8b0c(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((data_02153740 + (arg0 << 0xB) + (arg1 * 0x10)), s32 *, 0x14AC) = arg2;
}
