/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207dafc();                                /* extern */
s32 func_0207e464(s32 *, M2C_UNK);                  /* extern */

s32 func_02003790(s32 *arg0) {
    s32 temp_r2;
    s32 var_r3;

    temp_r2 = *arg0;
    var_r3  = 0;
    switch (temp_r2) {                              /* irregular */
        case 0x45585048:
            var_r3 = func_0207dafc();
            break;
        case 0x46524D48:
            var_r3 = func_0207e464(arg0, 4);
            break;
    }
    return var_r3;
}
