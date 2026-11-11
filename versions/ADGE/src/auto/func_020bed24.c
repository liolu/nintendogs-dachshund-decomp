#include "engine.h"
#include "m2c.h"

extern void *data_02155660;

void func_020bed24(s32 arg0) {
    M2C_FIELD(data_02155660, s32 *, 0x14) = arg0;
}
