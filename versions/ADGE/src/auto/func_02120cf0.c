#include "engine.h"
#include "m2c.h"

extern void *data_0215a080;

s32 func_02120cf0(void) {
    if (M2C_FIELD(data_0215a080, s16 *, 0x260C) != -1) {
        return 1;
    }
    return 0;
}
