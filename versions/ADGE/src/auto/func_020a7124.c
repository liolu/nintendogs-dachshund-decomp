/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a7124(void *arg0, s32 arg1) {
    s32 (*temp_r2)(arg0);
    s32 var_r1;

    var_r1  = arg1;
    temp_r2 = M2C_FIELD(arg0, s32(**)(), 0x210);
    if (temp_r2 != NULL) {
        var_r1 = temp_r2(arg0);
    }
    return var_r1;
}
