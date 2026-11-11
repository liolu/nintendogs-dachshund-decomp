/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
M2C_UNK func_02026f90();                            /* extern */

void func_02097448(void) {
    s16 var_r4;

    var_r4 = 0;
    do {
        if (func_01ffda04(var_r4) != 0) {
            func_02026f90();
        }
        var_r4 += 1;
    } while ((s32) var_r4 < 3);
}
