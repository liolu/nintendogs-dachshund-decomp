#include "m2c.h"

s32 func_020622b0(u16 *arg0) {
    s32 var_r2;
    u16 *var_r0;
    u16 temp_r1;

    var_r0 = arg0;
    var_r2 = -1;
    do {
        temp_r1 = *var_r0;
        var_r0  = (u16 *) ((s8 *) var_r0 + 2);
        var_r2 += 1;
    } while (temp_r1 != 0);
    return var_r2;
}
