/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d2c64(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020eae68(M2C_UNK, s16, s16);           /* extern */

void func_020a237c(void *arg0) {
    u32 temp_r0;

    func_020eae68(0x14, M2C_FIELD(arg0, s16 *, 0x1C18), M2C_FIELD(arg0, s16 *, 0x1C1A));
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x1CF4);
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
    func_020d2c64(8, M2C_FIELD(arg0, s32 *, 0x14), 0, 0, 1);
}
