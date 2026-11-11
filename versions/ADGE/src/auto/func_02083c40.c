#include "engine.h"
#include "m2c.h"

void func_02083c40(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg2, s32 *, 0)    = arg1;
    M2C_FIELD(arg2, s32 *, 0xC)  = 0;
    M2C_FIELD(arg2, s32 *, 0x18) = arg0;
    M2C_FIELD(arg2, s32 *, 0x24) = 0;
    M2C_FIELD(arg2, s32 *, 4)    = 0;
    M2C_FIELD(arg2, s32 *, 0x10) = 0x1000;
    M2C_FIELD(arg2, s32 *, 0x1C) = 0;
    M2C_FIELD(arg2, s32 *, 0x28) = 0;
    M2C_FIELD(arg2, s32 *, 8)    = (s32) (0 - arg0);
    M2C_FIELD(arg2, s32 *, 0x14) = 0;
    M2C_FIELD(arg2, s32 *, 0x20) = arg1;
    M2C_FIELD(arg2, s32 *, 0x2C) = 0;
}
