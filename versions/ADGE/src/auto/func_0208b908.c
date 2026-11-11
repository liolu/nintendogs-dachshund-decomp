/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208fc74(s16, M2C_UNK, M2C_UNK);           /* extern */
s32 func_020969e4();                                /* extern */

s32 func_0208b908(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_020969e4() == -0xB) {
        return -1;
    }
    return func_0208fc74(M2C_FIELD(arg0, s16 *, 0xC), arg1, arg2);
}
