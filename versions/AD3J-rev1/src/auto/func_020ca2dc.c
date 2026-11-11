/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020c77e0(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020c7f78(M2C_UNK);

s32 func_020ca2dc(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r4;
    u32 var_r5;

    temp_r4 = arg0 + 0x7F8;
    var_r5  = 0;
    if ((func_020c7f78(temp_r4) != 0) && (func_020c77e0(temp_r4, arg1, arg2) == 0) &&
        ((s32) M2C_FIELD(arg0, s8 *, 0x8A) >= 3)) {
        var_r5 = 1;
    }
    return var_r5;
}
