/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02093760(M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_02093b94(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4  = 0;
    temp_r0 = func_02093760(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg1, s32 *, 0x14), arg1 + 8);
    if (temp_r0 > 0) {
        var_r4 = temp_r0;
    }
    return var_r4;
}
