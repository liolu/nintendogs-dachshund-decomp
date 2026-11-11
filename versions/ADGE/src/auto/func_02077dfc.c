/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0212914c;

s32 func_02077dfc(s32 arg0) {
    s32 var_r0;
    s8 temp_r1;
    u8 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u8 *, 0);
    temp_r1 = ((s8 *) &data_0212914c)[temp_r2];
    if ((s32) temp_r1 < 0) {
        return -1;
    }
    if (temp_r1 == 0) {
        if (temp_r2 == 9) {
            var_r0 = (M2C_FIELD(arg0, u8 *, 2) + 1) * 3;
        } else {
            var_r0 = -1;
        }
        return var_r0;
    }
    return (s32) temp_r1;
}
