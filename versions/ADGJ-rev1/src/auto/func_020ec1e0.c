/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020f04a4(s16, M2C_UNK, M2C_UNK);           /* extern */
s32 func_020f7178();                                /* extern */

s32 func_020ec1e0(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_020f7178() == -0xB) {
        return -1;
    }
    return func_020f04a4(M2C_FIELD(arg0, s16 *, 0xC), arg1, arg2);
}
