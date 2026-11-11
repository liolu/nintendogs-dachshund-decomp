#include "m2c.h"

extern void *data_02156080;

s32 func_02035ff4(void *arg0) {
    s16 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0x146) - 3;
    if (((s32) temp_r2 < 0) || ((s32) M2C_FIELD(data_02156080, s16 *, 0x20) <= (s32) temp_r2)) {
        return 0;
    }
    return M2C_FIELD((data_02156080 + (temp_r2 * 4)), s32 *, 4);
}
