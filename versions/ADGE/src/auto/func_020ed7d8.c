/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020eb8d4(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020eb9a8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020eb9fc(s32, u16, s32);               /* extern */
extern M2C_UNK data_02145f2c;
extern M2C_UNK data_02145f38;
extern void *data_02159fc4;

void func_020ed7d8(void) {
    s32 var_r5;

    func_020eb9a8(0, &data_02145f2c, 0);
    func_020eb9a8(0, &data_02145f38, 0);
    func_020eb8d4(0, &data_02145f2c, 1);
    func_020eb8d4(0, &data_02145f38, 0);
    var_r5 = 0;
    do {
        func_020eb9fc(0, (u16) (var_r5 + 4), 0);
        var_r5 += 1;
    } while (var_r5 < 0xA);
    func_020eb9fc(0, 0xEU, 0);
    M2C_FIELD(data_02159fc4, s32 *, 0x19C) = 1;
}
