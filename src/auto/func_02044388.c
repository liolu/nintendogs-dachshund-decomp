/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_0214b484;

s32 func_02044388(void) {
    s32 var_r0;
    s8 temp_r2;

    temp_r2 = M2C_FIELD(data_0214b484, s8 *, 0xB);
    if (M2C_FIELD((data_0214b484 + temp_r2), s8 *, 0x16) != 0) {
        var_r0 = (temp_r2 * 0x85C) + (s32) (data_0214b484 + 0x1A0);
    } else {
        var_r0 = 0;
    }
    return M2C_FIELD(var_r0, s32 *, 0xC);
}
