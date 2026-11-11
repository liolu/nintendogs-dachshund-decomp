/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern void *data_02153894;

void func_020b1224(s32 *arg0) {
    M2C_UNK var_r2;
    M2C_UNK var_r2_2;
    M2C_UNK var_r2_3;
    M2C_UNK var_r2_4;

    var_r2                                 = 1;
    M2C_FIELD(data_02153894, s32 *, 0x19C) = 1;
    if (*arg0 != 1) {
        var_r2 = 0;
    }
    func_020b8b0c(0, 2, var_r2);
    if (*arg0 == 2) {
        var_r2_2 = 1;
    } else {
        var_r2_2 = 0;
    }
    func_020b8b0c(0, 1, var_r2_2);
    if (*arg0 == 3) {
        var_r2_3 = 1;
    } else {
        var_r2_3 = 0;
    }
    func_020b8b0c(0, 0, var_r2_3);
    if (*arg0 == 4) {
        var_r2_4 = 1;
    } else {
        var_r2_4 = 0;
    }
    func_020b8b0c(0, 3, var_r2_4);
    func_020b8b0c(0, 4, 0);
}
