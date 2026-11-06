/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffda04(s16);                         /* extern */
s32 func_02028144();                                /* extern */
extern void *data_02153708;

s32 func_0209be44(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (arg0 == 0x30002) {
        func_01ffda04(M2C_FIELD(data_02153708, s16 *, 0xE));
        var_r2 = func_02028144() + 0x78;
    }
    return var_r2;
}
