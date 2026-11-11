#include "engine.h"
#include "m2c.h"

void func_02086528(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 0)   = arg1;
    M2C_FIELD(arg0, s16 *, 4)   = (s16) arg2;
    M2C_FIELD(arg0, s16 *, 6)   = (s16) arg3;
    M2C_FIELD(arg0, s16 *, 8)   = (s16) arg4;
    M2C_FIELD(arg0, s32 *, 0xC) = arg5;
}
