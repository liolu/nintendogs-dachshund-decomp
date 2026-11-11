/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08(M2C_UNK);                         /* extern */
M2C_UNK func_0202706c(s32, M2C_UNK);                /* extern */
s32 func_020a742c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_020afb54(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if (func_020a742c(arg0, 4, arg1, -1) != 0) {
        temp_r0 = func_01ffdb08(arg1);
        if (M2C_FIELD(arg0, s16 *, 0x90) == 6) {
            func_0202706c(temp_r0, 0x2A);
        } else {
            func_0202706c(temp_r0, 0x25);
        }
        return 1;
    }
    return 0;
}
