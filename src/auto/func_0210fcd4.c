/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
M2C_UNK func_02027044(s32, M2C_UNK);                /* extern */
s32 func_021077ac(void *, M2C_UNK, s16, M2C_UNK);   /* extern */

s32 func_0210fcd4(void *arg0) {
    if (func_021077ac(arg0, 5, M2C_FIELD(arg0, s16 *, 0x98), -1) != 0) {
        if (M2C_FIELD(arg0, s16 *, 0x90) == 8) {
            func_02027044(func_01ffda04(M2C_FIELD(arg0, s16 *, 0x98)), 0x2D);
        }
        return 1;
    }
    return 0;
}
