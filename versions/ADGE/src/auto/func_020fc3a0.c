/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b1428(void *, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void func_020fc3a0(void *arg0, M2C_UNK arg1) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xB4);
    if ((temp_r3 < 0xA4) && (temp_r3 > -0xA4)) {
        func_020b1428(arg0, arg1, 0xA40, 0xFB2, 0);
        return;
    }
    func_020b1428(arg0, arg1, 0xA40, 0xE6A, 0);
}
