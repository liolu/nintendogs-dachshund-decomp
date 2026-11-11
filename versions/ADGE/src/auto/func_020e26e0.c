#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

void func_020e26e0(s32 arg0) {
    M2C_FIELD(data_02159e70, s32 *, 0x508C) = arg0;
}
