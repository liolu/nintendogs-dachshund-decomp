#include "m2c.h"

extern void *data_0214b484;

s32 func_0204265c(void) {
    s8 temp_r0;
    void *var_r0;

    temp_r0 = M2C_FIELD(data_0214b484, s8 *, 0xE);
    if (((s32) temp_r0 < 0) || ((s32) temp_r0 >= 3)) {
        var_r0 = NULL;
    } else {
        var_r0 = M2C_FIELD((data_0214b484 + (temp_r0 * 4)), void **, 0x50);
    }
    if ((var_r0 != NULL) && (M2C_FIELD(var_r0, s16 *, 0xE8) == 0x47C)) {
        return 1;
    }
    return 0;
}
