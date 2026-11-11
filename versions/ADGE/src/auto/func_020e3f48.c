/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_02159fc4;

void func_020e3f48(s32 arg0) {
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_4;

    var_r2                                 = 1;
    M2C_FIELD(data_02159fc4, s32 *, 0x19C) = 1;
    if (*(M2C_UNK *) arg0 != 1) {
        var_r2 = 0;
    }
    func_020eb9fc(0, 2, var_r2);
    if (*(M2C_UNK *) arg0 == 2) {
        var_r2_2 = 1;
    } else {
        var_r2_2 = 0;
    }
    func_020eb9fc(0, 1, var_r2_2);
    if (*(M2C_UNK *) arg0 == 3) {
        var_r2_3 = 1;
    } else {
        var_r2_3 = 0;
    }
    func_020eb9fc(0, 0, var_r2_3);
    if (*(M2C_UNK *) arg0 == 4) {
        var_r2_4 = 1;
    } else {
        var_r2_4 = 0;
    }
    func_020eb9fc(0, 3, var_r2_4);
    func_020eb9fc(0, 4, 0);
}
