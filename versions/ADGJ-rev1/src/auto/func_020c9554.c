#include "m2c.h"

extern void *data_02154c48;

s32 func_020c9554(void) {
    s32 var_r0;

    var_r0 = 0;
    if (M2C_FIELD(M2C_FIELD(data_02154c48, void **, 0x141C), u16 *, 0x80) != 0xFFFF) {
        var_r0 = 1;
    }
    return var_r0;
}
