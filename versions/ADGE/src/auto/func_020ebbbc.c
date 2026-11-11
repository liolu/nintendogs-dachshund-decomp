#include "engine.h"
#include "m2c.h"

extern s32 data_02159e70;

void func_020ebbbc(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((data_02159e70 + (arg0 << 0xB) + (arg1 * 0x10)), s16 *, 0x2840) = (s16) arg2;
}
