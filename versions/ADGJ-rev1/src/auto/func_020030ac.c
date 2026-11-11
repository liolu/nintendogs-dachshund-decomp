/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02080b20(s32);                         /* extern */
M2C_UNK func_02080b34(s32);                         /* extern */

void func_020030ac(void) {
    s32 var_r4;

    var_r4 = 0;
    do {
        func_02080b20(var_r4);
        func_02080b34(var_r4);
        var_r4 += 1;
    } while (var_r4 < 9);
}
