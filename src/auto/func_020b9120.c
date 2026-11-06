#include "m2c.h"

extern s32 data_02153740;

void func_020b9120(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((M2C_FIELD(((arg0 * 0x294) + data_02153740), s32 *, 0xA64) + (arg1 * 8)), s32 *, 0xC) = arg2;
}
