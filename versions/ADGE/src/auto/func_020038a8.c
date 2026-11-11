/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207d6a4(s32 *, M2C_UNK, M2C_UNK);         /* extern */
s32 func_0207de9c(s32 *, M2C_UNK, M2C_UNK);         /* extern */

s32 func_020038a8(s32 *arg0, M2C_UNK arg1) {
    s32 temp_r3;
    s32 var_ip;

    temp_r3 = *arg0;
    var_ip  = 0;
    switch (temp_r3) {                              /* irregular */
        case 0x45585048:
            var_ip = func_0207d6a4(arg0, arg1, 4);
            break;
        case 0x46524D48:
            var_ip = func_0207de9c(arg0, arg1, 4);
            break;
    }
    return var_ip;
}
