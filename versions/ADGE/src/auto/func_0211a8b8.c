/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffdb08();                            /* extern */
s32 func_0202816c();                                /* extern */
M2C_UNK func_020e15a8();                            /* extern */

s32 func_0211a8b8(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (arg0 == 0x30002) {
        func_020e15a8();
        func_01ffdb08();
        var_r2 = func_0202816c() + 0x78;
    }
    return var_r2;
}
