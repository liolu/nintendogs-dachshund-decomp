#include "m2c.h"

void func_020054c8(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 0x30) = 4;
    M2C_FIELD(arg0, s16 *, 0x34) = arg1;
    M2C_FIELD(arg0, s16 *, 0x36) = arg2;
    M2C_FIELD(arg0, s16 *, 0x38) = arg3;
    M2C_FIELD(arg0, s16 *, 0x3A) = (s16) arg4;
    M2C_FIELD(arg0, s16 *, 0x3C) = (s16) arg5;
}
