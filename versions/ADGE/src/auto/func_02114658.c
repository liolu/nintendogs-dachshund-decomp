/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200b634(M2C_UNK, s32, void *, M2C_UNK, s32); /* extern */

void func_02114658(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_lr;

    temp_lr = M2C_FIELD(arg0, s32 *, 0x1C);
    func_0200b634(arg1, temp_lr + 0x30, arg0 + 0x9C, arg2, temp_lr + 0x48);
}
