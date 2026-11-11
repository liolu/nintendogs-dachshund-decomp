#include "engine.h"
#include "m2c.h"

void func_020d5a48(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg1, s32 *, 0)   = arg0;
    M2C_FIELD(arg1, s16 *, 4)   = (s16) arg2;
    M2C_FIELD(arg1, s32 *, 8)   = arg3;
    M2C_FIELD(arg1, s32 *, 0xC) = arg4;
}
