/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208083c(s32, M2C_UNK);                /* extern */

void func_020646b8(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_0208083c(arg0 + 0x3C + (arg1 * 4), 4);
}
