/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b114c(void *, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_020f52dc(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_lr;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x214);
    temp_lr = M2C_FIELD(temp_r4, void **, 0);
    func_020b114c(arg0, arg1, arg2, M2C_FIELD(temp_lr, s32 *, 4), M2C_FIELD(temp_lr, s32 *, 0x10), 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) >= 0x148) {
        return;
    }
    M2C_FIELD(temp_r4, s32 *, 0x10) = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD8) >= 0xE6A) {
        M2C_FIELD(temp_r4, s32 *, 0x14) = 1;
    }
}
