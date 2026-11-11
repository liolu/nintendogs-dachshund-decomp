/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08(s32);                             /* extern */
s32 func_020280f0();                                /* extern */
s32 func_0202816c();                                /* extern */
s32 func_020cabcc(s32, M2C_UNK);                    /* extern */

s32 func_02117b10(s32 arg0, M2C_UNK arg1) {
    s32 var_r4;

    var_r4 = 0;
    switch (arg0) {                                 /* irregular */
        case 0x30002:
            if (func_01ffdb08(0) != 0) {
                var_r4 = func_0202816c() + 0x78;
            }
            break;
        case 0x30005:
            if (func_01ffdb08(0) != 0) {
                var_r4 = func_020cabcc(func_020280f0(), arg1);
            }
            break;
    }
    return var_r4;
}
