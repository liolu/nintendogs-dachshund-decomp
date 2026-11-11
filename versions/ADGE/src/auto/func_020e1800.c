#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

void func_020e1800(void) {
    M2C_FIELD(data_02159e70, s32 *, 0x1CE0) = 0;
    M2C_FIELD(data_02159e70, s32 *, 0x48C0) = 0;
}
