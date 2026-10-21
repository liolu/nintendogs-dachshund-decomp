#include "m2c.h"

extern void *data_0214b484;

s32 func_02044338(void) {
    if (M2C_FIELD(data_0214b484, s8 *, 0x14) == 3) {
        return 1;
    }
    return 0;
}
