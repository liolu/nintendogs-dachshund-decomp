#include "engine.h"
#include "m2c.h"

extern void *data_021555fc;

void func_020a7d84(s32 arg0) {
    M2C_FIELD(data_021555fc, s32 *, 4) = arg0;
}
