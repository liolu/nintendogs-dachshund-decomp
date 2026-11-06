/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020b54bc();                              /* extern */

s32 func_020b57a0(void) {
    s32 var_r4;
    void *temp_r0;

    var_r4  = 0;
    temp_r0 = func_020b54bc();
    if (temp_r0 != NULL) {
        var_r4 = M2C_FIELD(temp_r0, s32 *, 8);
    }
    return var_r4;
}
