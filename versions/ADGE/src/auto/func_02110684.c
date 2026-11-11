/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020066c0(u16);                         /* extern */

void func_02110684(void) {
    u16 var_r4;

    var_r4 = 0;
    do {
        func_020066c0(var_r4);
        var_r4 += 1;
    } while ((u32) var_r4 < 0x14U);
}
