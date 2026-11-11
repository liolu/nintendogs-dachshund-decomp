/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);
M2C_UNK func_02033edc(M2C_UNK);

s32 func_020b29bc(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg0;
loop_1:
    var_r4  = (s32) (s16) (var_r4 + 1);
    temp_r0 = func_01ffdb08(var_r4);
    if ((temp_r0 != 0) && (func_02033edc(temp_r0) == 0)) {
        return var_r4;
    }
    if (var_r4 >= 3) {
        return -1;
    }
    goto loop_1;
}
