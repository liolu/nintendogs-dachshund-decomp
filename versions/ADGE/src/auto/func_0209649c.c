/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02070ed4(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_02073328(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02097a2c(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02097ac0(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 data_02154608;
extern M2C_UNK data_0215460c;
extern s32 data_02154658;

void func_0209649c(void) {
    func_02097a2c(data_02154608, 1, 0, 0x1F40, 0, data_02154658);
    func_02097ac0(0x39, 1, 0x3C, data_02154608);
    func_02073328(&data_0215460c, 0x13, 0x7C);
    func_02070ed4(&data_0215460c, 0x40);
}
