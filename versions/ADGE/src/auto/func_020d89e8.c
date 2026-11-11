/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ebe84(); /* extern */
M2C_UNK func_020f0d14();                /* extern */

void func_020d89e8(void *arg0) {
    s32 temp_r5;
    void *temp_r4;

    func_020f0d14(arg0 + 0x130, 1);
    func_020f0d14(arg0 + 0x150, 1);
    func_020f0d14(arg0 + 0x170, 1);
    func_020f0d14(arg0 + 0x190, 1);
    func_020f0d14(arg0 + 0x1B0, 1);
    temp_r4 = M2C_FIELD(arg0, void **, 0x1D0);
    if (temp_r4 == NULL) {
        return;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x1D4);
    func_020ebe84(2, M2C_FIELD(temp_r4, u16 *, 0), -0x20, -0x20, temp_r5, temp_r5, 0, 0x1F, 2);
    func_020ebe84(2, M2C_FIELD(temp_r4, u16 *, 2), -0x20, -0x20, temp_r5, temp_r5, 0, 0x1E, 2);
}
