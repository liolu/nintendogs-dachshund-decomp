/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020ccf24(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020cd6bc(M2C_UNK);

s32 func_020cfb38(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r4;
    u32 var_r5;

    temp_r4 = arg0 + 0x7F8;
    var_r5  = 0;
    if ((func_020cd6bc(temp_r4) != 0) && (func_020ccf24(temp_r4, arg1, arg2) == 0) &&
        ((s32) M2C_FIELD(arg0, s8 *, 0x8A) >= 3)) {
        var_r5 = 1;
    }
    return var_r5;
}
