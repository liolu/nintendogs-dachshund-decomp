#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

void func_020d6a1c(void) {
    M2C_FIELD(data_02159e70, s32 *, 0xAC)   = 2;
    M2C_FIELD(data_02159e70, s32 *, 0x4880) = 1;
    M2C_FIELD(data_02159e70, s32 *, 0x4864) = 1;
}
