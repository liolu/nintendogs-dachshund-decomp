#include "m2c.h"

extern void *data_0215a044;

s32 func_021166e4(void) {
    s32 var_r0;
    s32 var_r1;
    void *temp_r2;

    var_r0  = 0;
    temp_r2 = M2C_FIELD(data_0215a044, void **, 4);
    if (M2C_FIELD(temp_r2, s16 *, 0) == 6) {
        if (M2C_FIELD(temp_r2, u16 *, 4) == 0x803) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        var_r0 = 1;
    }
    return var_r0;
}
