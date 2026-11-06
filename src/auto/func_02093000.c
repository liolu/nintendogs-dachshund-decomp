/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_02153720;

s32 func_02093000(void) {
    s32 var_r0;

    var_r0 = 0;
    if (M2C_FIELD(data_02153720, s16 *, 0x7C) != -1) {
        return 1;
    }
    if (M2C_FIELD(data_02153720, s16 *, 0x7E) != -1) {
        var_r0 = 2;
    }
    return var_r0;
}
