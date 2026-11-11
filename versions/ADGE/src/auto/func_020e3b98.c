#include "engine.h"
#include "m2c.h"

extern s32 *data_02159fc4;

s32 func_020e3b98(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (*data_02159fc4 == arg0) {
        var_r2 = 1;
    }
    return var_r2;
}
