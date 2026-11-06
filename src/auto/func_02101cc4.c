/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b7f38(M2C_UNK, s16, s16);           /* extern */
s32 func_020cba34();                                /* extern */
M2C_UNK func_020cd3d8(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
extern void *data_02153740;

void func_02101cc4(void *arg0) {
    void *temp_r4;

    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 8)    = -0x40;
    temp_r4                      = arg0 + 0x964;
    if (M2C_FIELD(data_02153740, s32 *, 0xBC) == 0x1D) {
        func_020b7f38(0x14, M2C_FIELD(arg0, s16 *, 0x888), M2C_FIELD(arg0, s16 *, 0x88A));
    }
    if (func_020cba34() == 0) {
        func_020cd3d8(1, 0x838, 0, 0, 0);
        M2C_FIELD(data_02153740, s16 *, 0xFDD0) = 0x10;
        return;
    }
    if (M2C_FIELD(temp_r4, s32 *, 4) != 0) {
        return;
    }
    func_020cd3d8(8, 0x251C, 0, 0, 1);
    M2C_FIELD(temp_r4, s32 *, 4) = 1;
}
