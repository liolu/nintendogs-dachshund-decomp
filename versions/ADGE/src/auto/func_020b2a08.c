/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);
M2C_UNK func_02034e8c(M2C_UNK);

s32 func_020b2a08(void) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = 0;
loop_1:
    temp_r0 = func_01ffdb08(var_r4);
    if ((temp_r0 != 0) && (func_02034e8c(temp_r0) != 0)) {
        return 1;
    }
    var_r4 = (s32) (s16) (var_r4 + 1);
    if (var_r4 >= 3) {
        return 0;
    }
    goto loop_1;
}
