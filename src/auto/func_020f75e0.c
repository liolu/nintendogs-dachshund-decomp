#include "m2c.h"

M2C_UNK func_020f7a70(M2C_UNK);                     /* extern */
extern s32 data_021550d8;

void func_020f75e0(u32 arg0) {
    M2C_UNK var_r3;

    data_021550d8 = 0;
    var_r3        = 3;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r3 = 0;
            break;
        case 1:
            var_r3 = 1;
            break;
        case 2:
            var_r3 = 2;
            break;
        case 3:
            data_021550d8 = 1;
            break;
    }
    func_020f7a70(var_r3);
}
