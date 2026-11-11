/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020034f0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0200718c(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0206582c(s32);                         /* extern */
s16 func_0207efdc();                                /* extern */
M2C_UNK func_020d131c(M2C_UNK);                     /* extern */
extern s16 data_02159e34;
extern s32 data_02159e3c;
extern M2C_UNK data_02159e40;
extern M2C_UNK data_02159e4c;

void func_020d12b0(M2C_UNK arg0) {
    s16 temp_r4;

    temp_r4 = func_0207efdc();
    func_0200718c(&data_02159e4c, &data_02159e40);
    data_02159e34 = temp_r4;
    func_0206582c(0x1202);
    func_020d131c(arg0);
    data_02159e3c = func_020034f0(arg0, 0x14C00);
}
