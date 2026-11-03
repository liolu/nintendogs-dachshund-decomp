/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0206baac(s32 arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4) {
    s32 var_r1;

    var_r1 = arg0 | (arg1 << 0x10) | (arg3 << 0x18);
    if (arg4 != 0) {
        var_r1 |= 0x8000;
    }
    M2C_FIELD((void *) 0x04000350, s32 *, 0) = var_r1;
    M2C_FIELD((void *) 0x04000350, s16 *, 4) = arg2;
}
