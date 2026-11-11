/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_0214da84;

s32 func_02036258(s32 arg0) {
    s16 temp_r1;
    void *var_r0;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x13E);
    if (((s32) temp_r1 < 0) || ((s32) temp_r1 >= 3)) {
        var_r0 = NULL;
    } else {
        var_r0 = M2C_FIELD((data_0214da84 + (temp_r1 * 4)), void **, 0x54);
    }
    if ((var_r0 != NULL) && !(M2C_FIELD(var_r0, u8 *, 0xB5) & 2)) {
        return (s32) var_r0;
    }
    return 0;
}
