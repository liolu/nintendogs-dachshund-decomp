#include "engine.h"
#include "m2c.h"

extern void *data_0215087c;

void func_02071ac8(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_0215087c, s32 *, 0x80) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
