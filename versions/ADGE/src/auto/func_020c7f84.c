#include "m2c.h"

s32 func_020c7f84(s16 *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (*arg0 == 4) {
        var_r2 = 1;
        *arg0  = 5;
    }
    return var_r2;
}
