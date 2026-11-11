/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b114c(void *, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_02101b70(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_lr;

    temp_lr = *M2C_FIELD(arg0, void ***, 0x214);
    func_020b114c(arg0, arg1, arg2, M2C_FIELD(temp_lr, s32 *, 4), M2C_FIELD(temp_lr, s32 *, 0x10), 0);
}
