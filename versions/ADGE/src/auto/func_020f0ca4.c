#include "engine.h"
#include "m2c.h"

void func_020f0ca4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4, u16 arg5, s32 arg6, s16 arg7, s16 arg8, s16 arg9,
                   s16 argA) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s16 *, 4)    = (s16) arg2;
    M2C_FIELD(arg0, s32 *, 8)    = arg3;
    M2C_FIELD(arg0, u16 *, 0xC)  = arg4;
    M2C_FIELD(arg0, u16 *, 0xE)  = arg5;
    M2C_FIELD(arg0, s32 *, 0x10) = arg6;
    M2C_FIELD(arg0, s16 *, 0x14) = arg7;
    M2C_FIELD(arg0, s16 *, 0x16) = arg8;
    M2C_FIELD(arg0, s16 *, 0x18) = arg9;
    M2C_FIELD(arg0, s16 *, 0x1A) = argA;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}
