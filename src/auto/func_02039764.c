/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_021060d4();                                /* extern */
extern void *data_0214b484;

s32 func_02039764(void *arg0) {
    s32 var_r5;
    s8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s8 *, 0x88);
    var_r5  = 1;
    if ((temp_r4 != func_021060d4()) && (temp_r4 != M2C_FIELD(data_0214b484, s8 *, 0xC))) {
        var_r5 = 0;
    }
    return var_r5;
}
