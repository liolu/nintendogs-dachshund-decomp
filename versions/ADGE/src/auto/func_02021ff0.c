/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_0214da84;

s32 func_02021ff0(s32 arg0) {
    s32 var_r3;

    var_r3 = 0;
    if ((arg0 == M2C_FIELD(data_0214da84, s8 *, 0xA)) && (M2C_FIELD(data_0214da84, s8 *, 0xC) == 3)) {
        var_r3 = 1;
    }
    return var_r3;
}
