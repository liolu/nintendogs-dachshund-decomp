/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02073bd4(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020636a8(s32, s32);                    /* extern */

void func_02073ba0(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02073bd4(arg0, arg2, arg3);
    func_020636a8(arg0, arg0 + arg1);
}
