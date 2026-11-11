/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08(s16);                             /* extern */
M2C_UNK func_0202706c(s32, M2C_UNK);                /* extern */
s32 func_020a742c(void *, M2C_UNK, s16, M2C_UNK);   /* extern */

s32 func_020afb00(void *arg0) {
    if (func_020a742c(arg0, 5, M2C_FIELD(arg0, s16 *, 0x98), -1) != 0) {
        if (M2C_FIELD(arg0, s16 *, 0x90) == 8) {
            func_0202706c(func_01ffdb08(M2C_FIELD(arg0, s16 *, 0x98)), 0x2D);
        }
        return 1;
    }
    return 0;
}
