/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b8b0c(M2C_UNK, u16, s32);           /* extern */

void func_020b03b4(s32 arg0) {
    s32 var_r6;

    var_r6 = 0;
    do {
        func_020b8b0c(2, (u16) (var_r6 + 5), 0);
        var_r6 += 1;
    } while (var_r6 < 2);
    switch (arg0) {                                 /* irregular */
        case 1:
            func_020b8b0c(2, 5U, 1);
            return;
        case 2:
            func_020b8b0c(2, 6U, 1);
            return;
    }
}
