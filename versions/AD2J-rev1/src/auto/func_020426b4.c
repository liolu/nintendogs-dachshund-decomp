/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_0214b484;

s32 func_020426b4(void) {
    s32 var_r0;

    var_r0 = 0;
    if (M2C_FIELD(data_0214b484, s8 *, 0xE) == -1) {
        return 0;
    }
    if (M2C_FIELD(data_0214b484, s32 *, 0x40) == 1) {
        var_r0 = 1;
    }
    return var_r0;
}
