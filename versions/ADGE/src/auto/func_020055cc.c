#include "engine.h"
#include "m2c.h"

void func_020055cc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) arg1;
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) arg3;
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) arg4;
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) arg2;
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) arg5;
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) arg6;
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16) arg7;
}
