/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b8b0c(s32, u16, M2C_UNK);           /* extern */

void func_020bda9c(void *arg0) {
    M2C_UNK (*temp_r1)(arg0);
    u16 temp_r1_2;

    if (M2C_FIELD(arg0, s32 *, 0x1C) != 5) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 5;
        temp_r1                      = M2C_FIELD(arg0, M2C_UNK(**)(), 0x34);
        if (temp_r1 != NULL) {
            temp_r1(arg0);
        }
    }
    temp_r1_2 = M2C_FIELD(arg0, u16 *, 4);
    if (temp_r1_2 == 0xFFFF) {
        return;
    }
    func_020b8b0c(M2C_FIELD(arg0, s32 *, 0), temp_r1_2, 0);
}
