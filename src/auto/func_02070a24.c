/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02070e6c(M2C_UNK, s32, s32);           /* extern */

void func_02070a24(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (arg0 == 0) {
        return;
    }
    if (arg1 == 0) {
        return;
    }
    if (arg1 == 0xFFFF) {
        return;
    }
    func_02070e6c(arg2, arg0, arg1);
}
