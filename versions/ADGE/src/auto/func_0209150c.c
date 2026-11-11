/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202706c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020274e8(M2C_UNK, s32);                /* extern */
M2C_UNK func_02027530();                            /* extern */
extern s16 data_0213ceb8;
extern s16 data_0213cebc;

void func_0209150c(M2C_UNK arg0, s32 arg1) {
    s32 temp_r5;
    s32 var_r5;

    var_r5 = arg1;
    func_02027530();
    if (var_r5 > 0x4A) {
        var_r5 = 0x4A;
    } else if (var_r5 < 0x3D) {
        var_r5 = 0x3D;
    }
    temp_r5 = data_0213ceb8 * (var_r5 - data_0213cebc);
    func_0202706c(arg0, 0x22);
    func_020274e8(arg0, temp_r5);
}
