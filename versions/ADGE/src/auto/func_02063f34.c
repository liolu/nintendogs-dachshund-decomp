#include "engine.h"
#include "m2c.h"

extern s32 data_0214dfd4;

void func_02063f34(s32 arg0, s32 arg1) {
    M2C_FIELD((data_0214dfd4 + (arg0 * 4)), s32 *, 0x18) = arg1;
}
