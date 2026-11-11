#include "engine.h"
#include "m2c.h"

extern void *data_02154ca0;

void func_020d9478(s32 arg0) {
    M2C_FIELD(data_02154ca0, s32 *, 0x2C) = arg0;
}
