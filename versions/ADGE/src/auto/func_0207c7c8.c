/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207c748();                            /* extern */
M2C_UNK func_0207c870(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK *data_0213cd70;
extern M2C_UNK *data_0213cd74;
extern s16 data_02153dcc;
extern M2C_UNK func_0207c5ac;
extern M2C_UNK func_0207c5b4;

void func_0207c7c8(u32 arg0, s32 arg1) {
    if (arg0 <= 2U) {
        func_0207c870(4, 3, 2, 0, 1);
    } else {
        func_0207c870(4, 3, 0, 2, 1);
    }
    data_02153dcc = (s16) arg0;
    func_0207c748();
    if (arg1 == 0) {
        return;
    }
    data_0213cd70 = &func_0207c5b4;
    data_0213cd74 = &func_0207c5ac;
}
