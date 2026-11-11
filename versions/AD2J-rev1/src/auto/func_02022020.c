/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_0214b484;

s32 func_02022020(s32 arg0) {
    s32 var_r3;

    var_r3 = 0;
    if ((arg0 == M2C_FIELD(data_0214b484, s8 *, 0xF)) && (M2C_FIELD(data_0214b484, s8 *, 6) == 3)) {
        var_r3 = 1;
    }
    return var_r3;
}
