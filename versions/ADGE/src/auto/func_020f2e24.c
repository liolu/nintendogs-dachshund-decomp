/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020eb8d4(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020eb9a8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020eb9fc(s32, u16, s32);               /* extern */
extern M2C_UNK data_021474ec;
extern M2C_UNK data_021474f4;

void func_020f2e24(void) {
    s32 var_r5;

    func_020eb9a8(0, &data_021474ec, 1);
    func_020eb9a8(0, &data_021474f4, 1);
    func_020eb8d4(0, &data_021474ec, 1);
    func_020eb8d4(0, &data_021474f4, 0);
    var_r5 = 0;
    do {
        func_020eb9fc(0, (u16) (var_r5 + 2), 0);
        var_r5 += 1;
    } while (var_r5 < 0xA);
    func_020eb9fc(0, 0xCU, 0);
    func_020eb9fc(0, 0xDU, 0);
}
