/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207d51c();                                /* extern */
s32 func_0207dc90();                                /* extern */

s32 func_020036c0(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;
    s32 var_lr;

    temp_ip = *arg0;
    var_lr  = 0;
    switch (temp_ip) {                              /* irregular */
        case 0x45585048:
            var_lr = func_0207d51c(arg0, arg1, arg2);
            break;
        case 0x46524D48:
            var_lr = func_0207dc90(arg0, arg1, arg2);
            break;
    }
    return var_lr;
}
