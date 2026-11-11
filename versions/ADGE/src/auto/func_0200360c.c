/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207d42c(s32 *, M2C_UNK);                  /* extern */
s32 func_0207d6a4(s32 *, s32, M2C_UNK);             /* extern */
M2C_UNK func_0207d6f4(s32, s32, M2C_UNK);           /* extern */
s32 func_0207de1c(s32 *, M2C_UNK);                  /* extern */
s32 func_0207de9c(s32 *, s32, M2C_UNK);             /* extern */

void func_0200360c(s32 *arg0) {
    s32 temp_r2;
    s32 temp_r2_2;
    s32 var_r0;
    s32 var_r4;

    temp_r2 = *arg0;
    var_r4  = 0;
    switch (temp_r2) {                              /* switch 1; irregular */
        case 0x45585048:                                /* switch 1 */
            var_r4 = func_0207d42c(arg0, 4);
            break;
        case 0x46524D48:                                /* switch 1 */
            var_r4 = func_0207de1c(arg0, 4);
            break;
    }
    temp_r2_2 = *arg0;
    var_r0    = 0;
    switch (temp_r2_2) {                            /* switch 2; irregular */
        case 0x45585048:                                /* switch 2 */
            var_r0 = func_0207d6a4(arg0, var_r4, 4);
            break;
        case 0x46524D48:                                /* switch 2 */
            var_r0 = func_0207de9c(arg0, var_r4, 4);
            break;
    }
    func_0207d6f4(var_r0, var_r4, 1);
}
