/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b7f88(M2C_UNK, s16, s16);           /* extern */
M2C_UNK func_020cd3d8(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */

void func_02102750(void *arg0) {
    u32 temp_r0;

    func_020b7f88(0x14, M2C_FIELD(arg0, s16 *, 0x888), M2C_FIELD(arg0, s16 *, 0x88A));
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x964);
    switch (temp_r0) {
        default:
            break;
        case 0:
            M2C_FIELD(arg0, s32 *, 0x14) = 0x2526;
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x14) = 0x2526;
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x14) = 0x2530;
            break;
        case 3:
            M2C_FIELD(arg0, s32 *, 0x14) = 0x2544;
            break;
    }
    func_020cd3d8(8, M2C_FIELD(arg0, s32 *, 0x14), 0, 0, 1);
}
