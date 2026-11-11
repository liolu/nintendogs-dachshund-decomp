/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020f07bc(M2C_UNK);                     /* extern */
M2C_UNK func_02100764();                            /* extern */
M2C_UNK func_021009b4();                            /* extern */
M2C_UNK func_02100fd8();                            /* extern */
M2C_UNK func_021011f4();                            /* extern */

void func_02100294(void *arg0) {
    s32 temp_r4;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x38);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x48);
    switch (temp_r1) {
        default:
            break;
        case 0:
            func_021011f4(arg0);
            break;
        case 1:
            func_02100fd8(arg0);
            break;
        case 2:
            func_021009b4(arg0);
            break;
        case 3:
            func_02100764(arg0);
            break;
    }
    if (temp_r4 == M2C_FIELD(arg0, s32 *, 0x48)) {
        return;
    }
    func_020f07bc(0xF);
}
