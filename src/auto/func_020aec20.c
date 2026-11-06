#include "m2c.h"

extern void *data_02153740;

s32 func_020aec20(void) {
    s32 var_r0;

    var_r0 = 0;
    if (M2C_FIELD(data_02153740, s32 *, 0xB8) == 2) {
        var_r0 = M2C_FIELD(data_02153740, s32 *, 0xE8);
    }
    return var_r0;
}
