/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff810c(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_020271d8();                            /* extern */

void func_020271a8(s32 arg0, M2C_UNK arg1) {
    func_020271d8();
    func_01ff810c(arg1, arg0 + 0x1E0, arg1);
}
