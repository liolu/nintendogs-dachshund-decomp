/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207d4b4();                                /* extern */
s32 func_0207de1c(s32 *, M2C_UNK);                  /* extern */

s32 func_020037f4(s32 *arg0) {
    s32 temp_r2;
    s32 var_r3;

    temp_r2 = *arg0;
    var_r3  = 0;
    switch (temp_r2) {                              /* irregular */
        case 0x45585048:
            var_r3 = func_0207d4b4();
            break;
        case 0x46524D48:
            var_r3 = func_0207de1c(arg0, 4);
            break;
    }
    return var_r3;
}
