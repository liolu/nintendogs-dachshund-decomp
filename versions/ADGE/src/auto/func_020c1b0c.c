#include "engine.h"
#include "m2c.h"

extern void *data_02156ec0;

void func_020c1b0c(s32 arg0, s32 arg1) {
    M2C_FIELD(data_02156ec0, s32 *, 0x118) = arg0;
    M2C_FIELD(data_02156ec0, s32 *, 0x11C) = arg1;
}
