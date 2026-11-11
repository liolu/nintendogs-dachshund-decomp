#include "m2c.h"
extern void *data_02159e74;
s32 func_020dae9c(void) {
    s32 sum = 0;
    s32 i;
    s8 *p = (s8 *) data_02159e74 + 4;

    for (i = 0; i < 0x18; i++, p += 0x1B8) {
        if (M2C_FIELD(p, s32 *, 4) != 0 && M2C_FIELD(p, s32 *, 8) != 0) {
            sum += M2C_FIELD(p, s32 *, 0x24);
        }
    }
    return sum;
}
