#include "engine.h"
#include "m2c.h"

void func_02005504(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 0x30) = 5;
    M2C_FIELD(arg0, s16 *, 0x34) = (s16) arg1;
    M2C_FIELD(arg0, s16 *, 0x36) = (s16) arg2;
    M2C_FIELD(arg0, s16 *, 0x38) = (s16) arg3;
    M2C_FIELD(arg0, s16 *, 0x3A) = (s16) arg4;
    M2C_FIELD(arg0, s16 *, 0x3C) = (s16) arg5;
}
