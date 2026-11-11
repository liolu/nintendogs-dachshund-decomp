#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

void func_020d6354(s32 arg0) {
    M2C_FIELD(data_02159e70, s32 *, 0x1DE8) = arg0;
}
