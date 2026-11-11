/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff810c(void *, s32, void *);         /* extern */
M2C_UNK func_020271d8();                            /* extern */

void func_02027168(s32 arg0, void *arg1) {
    func_020271d8();
    func_01ff810c(arg1, arg0 + 0x3C, arg1);
    M2C_FIELD(arg1, s32 *, 0x24) = 0;
    M2C_FIELD(arg1, s32 *, 0x28) = 0;
    M2C_FIELD(arg1, s32 *, 0x2C) = 0;
}
