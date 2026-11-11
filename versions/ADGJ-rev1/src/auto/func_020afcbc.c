#include "m2c.h"

extern void *data_02153894;

s32 func_020afcbc(void) {
    s32 var_r0;

    var_r0 = 0;
    if (M2C_FIELD(data_02153894, s32 *, 0) != 0xD) {
        return 0;
    }
    if (M2C_FIELD(data_02153894, s32 *, 0x58) != 0) {
        var_r0 = 1;
    }
    return var_r0;
}
