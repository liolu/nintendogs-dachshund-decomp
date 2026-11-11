/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02029008(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020969e4();                                /* extern */
extern M2C_UNK data_0215422c;
extern M2C_UNK data_02154300;

void func_02091e84(M2C_UNK arg0) {
    s32 var_r0;

    if ((func_020969e4() != -0xB) && (M2C_FIELD(&data_0215422c, s32 *, 0x40) == 0) &&
        (M2C_FIELD(&data_0215422c, s16 *, 0x3E) != 1) && (M2C_FIELD(&data_0215422c, s16 *, 0x3E) != 2) &&
        (M2C_FIELD(&data_02154300, s16 *, 6) != 0x3E) && (M2C_FIELD(&data_02154300, s16 *, 6) != 0x3F)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    func_02029008(arg0, 0x4B, 1);
}
