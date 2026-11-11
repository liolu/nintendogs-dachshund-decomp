/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08(s16);                             /* extern */
M2C_UNK func_0202706c(s32, M2C_UNK);                /* extern */
M2C_UNK func_020274e0(s32, M2C_UNK);                /* extern */
s32 func_020a742c(void *, M2C_UNK, s16, M2C_UNK);   /* extern */

s32 func_020afa38(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if (func_020a742c(arg0, 8, M2C_FIELD(arg0, s16 *, 0x98), -1) == 0) {
        return 0;
    }
    temp_r0 = func_01ffdb08(M2C_FIELD(arg0, s16 *, 0x98));
    func_0202706c(temp_r0, 0x2C);
    func_020274e0(temp_r0, arg1);
    return 1;
}
