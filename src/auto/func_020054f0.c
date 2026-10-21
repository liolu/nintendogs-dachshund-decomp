#include "m2c.h"

void func_020054f0(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 0x20) = 4;
    M2C_FIELD(arg0, s16 *, 0x24) = arg1;
    M2C_FIELD(arg0, s16 *, 0x26) = arg2;
    M2C_FIELD(arg0, s16 *, 0x28) = arg3;
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) arg4;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) arg5;
}
