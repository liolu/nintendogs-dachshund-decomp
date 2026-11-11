/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_0215a048;

s32 func_020b1d6c(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r3;

    var_r0 = arg0;
    var_r3 = M2C_FIELD(data_0215a048, s32 *, 0xC) + 0x1B34;
    if (arg1 < 0x800) {
        var_r3 -= 0x1000 - (arg1 * 2);
    }
    if ((u32) var_r0 > 0x3CU) {
        var_r0 = 0x3C;
    }
    return ((0x3C - var_r0) * 0x199) + var_r3;
}
