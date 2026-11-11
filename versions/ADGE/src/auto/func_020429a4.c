#include "engine.h"
#include "m2c.h"

extern void *data_0214da84;

s32 func_020429a4(void) {
    s8 temp_r0;
    void *var_r0;

    temp_r0 = M2C_FIELD(data_0214da84, s8 *, 9);
    if (((s32) temp_r0 < 0) || ((s32) temp_r0 >= 3)) {
        var_r0 = NULL;
    } else {
        var_r0 = M2C_FIELD((data_0214da84 + (temp_r0 * 4)), void **, 0x54);
    }
    if ((var_r0 != NULL) && (M2C_FIELD(var_r0, s16 *, 0xEA) == 0x47D)) {
        return 1;
    }
    return 0;
}
