#include "m2c.h"

extern void *data_02154c48;

s32 func_020c97b4(void) {
    s32 var_r0;

    var_r0 = 0;
    if ((s32) M2C_FIELD(M2C_FIELD(data_02154c48, void **, 0x141C), s32 *, 0x78) < 0x7A120) {
        var_r0 = 1;
    }
    return var_r0;
}
