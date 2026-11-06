/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c2228();                       /* extern */
M2C_UNK func_02119cb8();              /* extern */
M2C_UNK func_02119cec();                      /* extern */
M2C_UNK func_0211a6a8();                      /* extern */
M2C_UNK func_0211a6b8();                 /* extern */
M2C_UNK func_0211a6c0();                         /* extern */
extern M2C_UNK data_02149088;
extern M2C_UNK data_02149094;

void func_02118198(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s16 *, 0x24) = 1;
    M2C_FIELD(arg0, s16 *, 0)    = 0;
    func_0211a6c0(arg0 + 0x2C);
    M2C_FIELD(arg0, s32 *, 0x64) = func_020c2228(&data_02149088);
    M2C_FIELD(arg0, s32 *, 0x68) = func_020c2228(&data_02149094);
    func_0211a6b8(arg0 + 0x2C, M2C_FIELD(arg0, s32 *, 0x64));
    func_0211a6a8(arg0 + 0x2C);
    func_02119cec(arg0 + 0x2C);
    func_02119cb8(arg0 + 0x2C, arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
}
