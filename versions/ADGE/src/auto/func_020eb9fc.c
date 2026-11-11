#include "engine.h"
#include "m2c.h"

extern s32 data_02159e70;

void func_020eb9fc(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((data_02159e70 + (arg0 << 0xB) + (arg1 * 0x10)), s32 *, 0x283C) = arg2;
}
