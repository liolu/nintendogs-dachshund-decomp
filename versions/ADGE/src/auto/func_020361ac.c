#include "engine.h"
#include "m2c.h"

extern void *data_021555f8;

s32 func_020361ac(s32 arg0) {
    s16 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0x13E) - 3;
    if (((s32) temp_r2 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= (s32) temp_r2)) {
        return 0;
    }
    return M2C_FIELD((data_021555f8 + (temp_r2 * 4)), s32 *, 4);
}
