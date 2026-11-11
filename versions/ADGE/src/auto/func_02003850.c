/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207d6a4();                                /* extern */
s32 func_0207de9c();                                /* extern */

s32 func_02003850(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;
    s32 var_lr;

    temp_ip = *arg0;
    var_lr  = 0;
    switch (temp_ip) {                              /* irregular */
        case 0x45585048:
            var_lr = func_0207d6a4(arg0, arg1, arg2);
            break;
        case 0x46524D48:
            var_lr = func_0207de9c(arg0, arg1, arg2);
            break;
    }
    return var_lr;
}
