/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);
M2C_UNK func_0202816c(M2C_UNK);
M2C_UNK func_020d0298(M2C_UNK);

s32 func_020efc54(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;
    void *temp_r0_2;

    var_r4  = 0;
    temp_r0 = func_01ffdb08((s32) (s16) arg0);
    if ((temp_r0 != 0) && (((temp_r0_2 = (void *) func_0202816c(temp_r0), (M2C_FIELD(temp_r0_2, s32 *, 0x640) == 0xFFFF)) &&
                            (M2C_FIELD(temp_r0_2, s32 *, 0x644) == 0xFFFF)) ||
                           (func_020d0298((s32) temp_r0_2) == 0))) {
        var_r4 = 1;
    }
    return var_r4;
}
