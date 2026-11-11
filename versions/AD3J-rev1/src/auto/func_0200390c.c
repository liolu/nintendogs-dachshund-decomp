/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0207d9f4();                                /* extern */
s32 func_0207da08(M2C_UNK);                         /* extern */

void func_0200390c(M2C_UNK arg0, s32 arg1, void *arg2) {
    if (M2C_FIELD(arg2, u16 *, 0) != func_0207d9f4()) {
        return;
    }
    M2C_FIELD(arg2, s32 *, 4) = (s32) (M2C_FIELD(arg2, s32 *, 4) + func_0207da08(arg0));
}
