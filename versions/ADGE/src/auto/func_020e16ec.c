#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

void func_020e16ec(s32 arg0, s32 arg1) {
    M2C_FIELD(data_02159e70, s16 *, 0x48B4) = (s16) arg0;
    M2C_FIELD(data_02159e70, s16 *, 0x48B6) = (s16) arg1;
}
