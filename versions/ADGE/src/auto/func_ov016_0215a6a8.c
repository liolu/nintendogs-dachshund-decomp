/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_02003a00();                                /* extern */
M2C_UNK func_02003aa0(M2C_UNK (*)(), M2C_UNK *);    /* extern */
M2C_UNK func_02003cf0(M2C_UNK);                     /* extern */
M2C_UNK func_02003de8(M2C_UNK);                     /* extern */
M2C_UNK func_02003eec();                            /* extern */
M2C_UNK func_02003fa4(u16);                         /* extern */
M2C_UNK func_0200412c();                            /* extern */
M2C_UNK func_02004270();                            /* extern */
M2C_UNK func_02006894();                            /* extern */
M2C_UNK func_0206b7ec(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0208022c(s32, M2C_UNK);                /* extern */
M2C_UNK func_ov016_0215a7a4();                      /* extern */
M2C_UNK func_ov016_0215ac04();                      /* extern */
extern u16 data_0214d5fc;
extern s32 data_ov016_0215b260;
extern M2C_UNK func_ov016_0215a760;

s32 func_ov016_0215a6a8(void) {
    s32 var_r5;
    u16 var_r0;

    var_r5 = 1;
    func_ov016_0215ac04();
    func_02003de8(0x1E);
    do {
        func_0200412c();
        func_ov016_0215a7a4();
        var_r0 = func_02003a00();
        if (var_r0 != 0) {
            var_r0 = data_0214d5fc & 8;
            if (var_r0 != 0) {
                var_r5 = 0;
            }
        }
        func_02003fa4(var_r0);
        func_0208022c(data_ov016_0215b260 + 4, 0x600);
        func_0206b7ec(data_ov016_0215b260 + 4, 0, 0x600);
        func_02003eec();
    } while (var_r5 != 0);
    func_02003cf0(0x3C);
    func_02003aa0(func_ov016_0215a7a4, &func_ov016_0215a760);
    func_02004270();
    func_02006894();
    return 0;
}
