#include "m2c.h"

extern s32 data_0214b484;

s32 func_0203606c(void *arg0) {
    s8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s8 *, 0x89);
    if (((s32) temp_r1 < 0) || ((s32) temp_r1 >= 3)) {
        return 0;
    }
    return M2C_FIELD((data_0214b484 + (temp_r1 * 4)), s32 *, 0x50);
}
