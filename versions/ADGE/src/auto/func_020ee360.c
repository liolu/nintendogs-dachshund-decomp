/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_02159e70;

void func_020ee360(s32 *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1 = M2C_FIELD(data_02159e70, s32 *, 0xB4);
    if ((temp_r1 == 4) || (temp_r1 == 0x26)) {
        M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
        return;
    }
    temp_r1_2 = *arg0;
    if (temp_r1_2 < 0x10) {
        *arg0 = temp_r1_2 + 1;
        return;
    }
    M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
}
