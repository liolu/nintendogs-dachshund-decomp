/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ed7a8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020ee5e0(u16, M2C_UNK);                /* extern */
M2C_UNK func_020ef590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020f0a34(M2C_UNK);                     /* extern */
extern M2C_UNK data_02154cb8;
extern M2C_UNK data_02154dd8;

void func_020e9a18(void) {
    func_020ee5e0(M2C_FIELD(&data_02154dd8, u16 *, 0x10), 0x3C);
    func_020ed7a8(0x64, 0x3C);
    func_020ef590(0x7F, 0x3C);
    func_020f0a34(0x3C);
    M2C_FIELD(&data_02154cb8, s32 *, 0x1C) = 0;
}
