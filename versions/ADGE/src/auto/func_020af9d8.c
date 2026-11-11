/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08(M2C_UNK);                         /* extern */
M2C_UNK func_0202706c(s32, M2C_UNK);                /* extern */
M2C_UNK func_020274e0(s32, M2C_UNK);                /* extern */
s32 func_020a742c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_020af9d8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    if (func_020a742c(arg0, 6, arg2, -1) == 0) {
        return 0;
    }
    temp_r0 = func_01ffdb08(arg2);
    func_0202706c(temp_r0, 0x29);
    func_020274e0(temp_r0, arg1);
    return 1;
}
