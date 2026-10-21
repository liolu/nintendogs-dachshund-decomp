#include "m2c.h"

void func_02005598(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s16 *, 0)   = arg1;
    M2C_FIELD(arg0, s16 *, 4)   = arg3;
    M2C_FIELD(arg0, s16 *, 6)   = (s16) arg4;
    M2C_FIELD(arg0, s16 *, 2)   = arg2;
    M2C_FIELD(arg0, s16 *, 8)   = (s16) arg5;
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) arg6;
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) arg7;
}
