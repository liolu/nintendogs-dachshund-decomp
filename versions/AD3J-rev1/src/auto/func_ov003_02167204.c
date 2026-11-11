/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02027630(s32, s32);                    /* extern */
s32 func_020351a0(s32);                             /* extern */
M2C_UNK func_02036fbc(s32, M2C_UNK);                /* extern */
M2C_UNK func_02038edc(s32);                         /* extern */
M2C_UNK func_0203e280(s32, M2C_UNK, M2C_UNK);       /* extern */
extern s32 *data_0214b484;

void func_ov003_02167204(s32 arg0, s32 arg1) {
    s32 n;
    u16 temp_r1;
    u16 temp_r3;

    if (arg1 == 0) {
        return;
    }
    func_02027630(arg1, arg0 + 0x26C);
    func_02038edc(arg0);
    func_02036fbc(arg0, 0x300);
    if (func_020351a0(arg0) == 0) {
        return;
    }
    n              = (*data_0214b484 * 0x10DCD) + 1;
    *data_0214b484 = n;
    temp_r3        = (u16) n;
    temp_r1        = (u16) ((u32) (temp_r3 * 6) >> 0x10);
    switch (temp_r1) {
        case 0:
            func_0203e280(arg0, 1, 0x3A);
            return;
        case 1:
            func_0203e280(arg0, 1, 0x3B);
            return;
        case 2:
            func_0203e280(arg0, 1, 0x3C);
            return;
        case 3:
            func_0203e280(arg0, 1, 0x3D);
            return;
        case 4:
            func_0203e280(arg0, 1, 0x3E);
            return;
        case 5:
            func_0203e280(arg0, 1, 0x3F);
            return;
        default:
            return;
    }
}
