#include "m2c.h"

s32 func_02006fc0(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 <= 0) {
        return 0;
    }
    if (var_r0 >= 0x1000) {
        var_r0 = 0x1000;
    }
    return var_r0;
}
