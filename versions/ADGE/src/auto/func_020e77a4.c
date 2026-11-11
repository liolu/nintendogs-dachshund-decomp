#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

void func_020e77a4(s32 arg0) {
    M2C_FIELD(data_02159e70, s32 *, 0x1D24) = arg0;
}
