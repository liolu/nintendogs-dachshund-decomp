/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
extern s32 data_02153708;

s32 func_021127c4(void) {
    s16 var_r6;
    s32 var_r4;

    var_r6 = 0;
    var_r4 = 0;
loop_1:
    if ((func_01ffda04(var_r6) != 0) && (M2C_FIELD((data_02153708 + var_r4), u16 *, 0x20) & 4)) {
        return 1;
    }
    var_r6 += 1;
    var_r4 += 0x14;
    if ((s32) var_r6 >= 3) {
        return 0;
    }
    goto loop_1;
}
