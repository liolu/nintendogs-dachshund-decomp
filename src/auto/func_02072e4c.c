#include "m2c.h"

extern void *data_0214fd54;

void func_02072e4c(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_0214fd54, s32 *, 0x7C) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
