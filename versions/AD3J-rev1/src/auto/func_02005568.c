#include "m2c.h"

void func_02005568(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s16 *, 0x10) = arg1;
    M2C_FIELD(arg0, s16 *, 0x14) = arg3;
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) arg4;
    M2C_FIELD(arg0, s16 *, 0x12) = arg2;
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) arg5;
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) arg6;
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16) arg7;
}
