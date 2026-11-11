/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
s32 func_02028144();                                /* extern */
extern void *data_02153708;

s32 func_0209c8f4(s32 arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = 0;
    if ((arg0 == 0x30002) && (arg1 == 0) && (func_01ffda04(M2C_FIELD(data_02153708, s16 *, 0xE)) != 0)) {
        var_r4 = func_02028144() + 0x78;
    }
    return var_r4;
}
