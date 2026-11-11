#include "engine.h"
#include "m2c.h"

extern void *data_021555f8;

s32 func_020a61c0(void) {
    if (M2C_FIELD(data_021555f8, s16 *, 0x2C) == 0) {
        return 1;
    }
    return 0;
}
