/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffdb08(s16);                         /* extern */
s32 func_0202816c();                                /* extern */
extern void *data_0215a04c;

s32 func_021179b0(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (arg0 == 0x30002) {
        func_01ffdb08(M2C_FIELD(data_0215a04c, s16 *, 0xE));
        var_r2 = func_0202816c() + 0x78;
    }
    return var_r2;
}
