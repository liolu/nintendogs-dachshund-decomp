/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020351a0(M2C_UNK);                         /* extern */
s32 func_02046e24(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0204f56c(M2C_UNK);                     /* extern */

void func_02046a48(M2C_UNK arg0) {
    if (func_02046e24(arg0, 1) != 0) {
        return;
    }
    if (func_020351a0(arg0) == 0) {
        return;
    }
    func_0204f56c(arg0);
}
