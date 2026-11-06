#include "m2c.h"

void func_02118e5c(void *arg0, s32 arg1, s16 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s16 *, 0x3C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x44) = arg3;
}
