#include "m2c.h"

s32 func_020c8380(s16 *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (*arg0 == 3) {
        var_r2 = 1;
        *arg0  = 4;
    }
    return var_r2;
}
