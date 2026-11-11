/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02063650(s32, s32);                    /* extern */
M2C_UNK func_020646b8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02064694(M2C_UNK, M2C_UNK);                /* extern */

void func_02073ab0(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_02064694(arg2, arg3)) {
        func_020646b8(arg2, arg3, 0);
    }
    func_02063650(arg0, arg0 + arg1);
}
