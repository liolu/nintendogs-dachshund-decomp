#include "engine.h"
#include "m2c.h"

s32 func_020cfe34(s32 arg0) {
    s32 var_r0;

    var_r0 = 0;
    if ((u32) M2C_FIELD(arg0, u8 *, 0x72) >= 5U) {
        var_r0 = 1;
    }
    return var_r0;
}
