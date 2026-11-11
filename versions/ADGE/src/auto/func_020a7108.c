#include "engine.h"
#include "m2c.h"

extern void *data_021555f8;

void func_020a7108(s32 arg0, s32 arg1) {
    M2C_FIELD(data_021555f8, s32 *, 0x30) = arg0;
    M2C_FIELD(data_021555f8, s32 *, 0x34) = arg1;
}
