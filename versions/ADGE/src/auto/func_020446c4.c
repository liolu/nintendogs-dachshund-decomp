/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_0214da84;

s32 func_020446c4(void) {
    s32 var_r0;
    s8 temp_r2;

    temp_r2 = M2C_FIELD(data_0214da84, s8 *, 6);
    if (M2C_FIELD((data_0214da84 + temp_r2), s8 *, 0x19) != 0) {
        var_r0 = (temp_r2 * 0x85C) + (s32) (data_0214da84 + 0x1A4);
    } else {
        var_r0 = 0;
    }
    return M2C_FIELD(var_r0, s32 *, 0xC);
}
