/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);

extern s32 data_0215a04c;

s32 func_020b2874(void) {
    s32 var_r4;
    s32 var_r6;

    var_r6 = 0;
    var_r4 = 0;
loop_1:
    if ((func_01ffdb08(var_r6) != 0) && (M2C_FIELD((data_0215a04c + var_r4), u16 *, 0x20) & 4)) {
        return 1;
    }
    var_r6 = (s32) (s16) (var_r6 + 1);
    var_r4 += 0x14;
    if (var_r6 >= 3) {
        return 0;
    }
    goto loop_1;
}
