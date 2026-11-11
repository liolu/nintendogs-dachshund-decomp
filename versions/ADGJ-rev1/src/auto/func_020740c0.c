/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_020730cc();                               /* extern */
s32 func_02073cf4(s32, M2C_UNK);                    /* extern */

s32 func_020740c0(s32 arg0, M2C_UNK arg1) {
    s32 *temp_r0;

    temp_r0 = func_020730cc();
    if (temp_r0 == NULL) {
        return 0;
    }
    if (func_02073cf4(*temp_r0, arg1) != 0) {
        return 1;
    }
    return 0;
}
