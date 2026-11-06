#include "m2c.h"

extern void *data_02156080;

s32 func_02106540(void) {
    if (M2C_FIELD(data_02156080, s16 *, 0x2C) == 0) {
        return 1;
    }
    return 0;
}
