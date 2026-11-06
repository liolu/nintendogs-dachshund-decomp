/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020722b0(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_020ee5e0(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_02154cb8;
extern M2C_UNK data_02154dd8;

void func_020f0758(s32 arg0, M2C_UNK arg1) {
    if ((arg0 == 0x43) && (M2C_FIELD(&data_02154cb8, u16 *, 0x18) == 0x1E)) {
        func_020ee5e0(0x64, 0x3C);
        M2C_FIELD(&data_02154dd8, s16 *, 0x10) = 0x64;
    }
    func_020722b0(0x13, arg0, arg1);
}
