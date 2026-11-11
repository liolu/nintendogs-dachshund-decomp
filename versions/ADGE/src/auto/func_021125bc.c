/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003aa0(M2C_UNK (*)(), M2C_UNK *);    /* extern */
M2C_UNK func_02003c90(M2C_UNK);                     /* extern */
M2C_UNK func_02003de8(M2C_UNK);                     /* extern */
M2C_UNK func_02003eec();                            /* extern */
M2C_UNK func_02003fa4();                            /* extern */
M2C_UNK func_0200412c();                            /* extern */
M2C_UNK func_02004270();                            /* extern */
M2C_UNK func_02006894();                            /* extern */
M2C_UNK func_020075a4();                            /* extern */
M2C_UNK func_0207cb18();                            /* extern */
M2C_UNK func_020c7740();                            /* extern */
M2C_UNK func_020cbd60();                            /* extern */
M2C_UNK func_020d0cc8();                            /* extern */
M2C_UNK func_020d2c10();                            /* extern */
M2C_UNK func_02112674();                            /* extern */
M2C_UNK func_02112d40();                            /* extern */
extern void *data_0215a054;
extern M2C_UNK func_02112668;

s32 func_021125bc(s32 *arg0) {
    s32 var_r4;

    *arg0 = 0;
    func_02112d40();
    func_02003de8(0x1E);
    do {
        func_0200412c();
        func_02112674();
        func_02003fa4();
        func_0207cb18();
        func_02003eec();
    } while (M2C_FIELD(data_0215a054, s32 *, 8) == 0);
    func_02003c90(0x3C);
    func_02003aa0(func_02112674, &func_02112668);
    var_r4 = 0;
    if (M2C_FIELD(data_0215a054, s32 *, 0x28) == 0) {
        var_r4 = 1;
    }
    func_020d0cc8();
    func_020d2c10();
    func_020075a4();
    func_020cbd60();
    func_020c7740();
    func_02004270();
    func_02006894();
    data_0215a054 = NULL;
    return var_r4;
}
