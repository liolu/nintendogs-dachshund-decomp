/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_0200399c();                                /* extern */
M2C_UNK func_02003a3c(M2C_UNK (*)(), M2C_UNK *);    /* extern */
M2C_UNK func_02003c8c(M2C_UNK);                     /* extern */
M2C_UNK func_02003d84(M2C_UNK);                     /* extern */
M2C_UNK func_02003e88();                            /* extern */
M2C_UNK func_02003f40(u16);                         /* extern */
M2C_UNK func_020040c8();                            /* extern */
M2C_UNK func_0200420c();                            /* extern */
M2C_UNK func_02006830();                            /* extern */
M2C_UNK func_0206cbe4(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02080858(s32, M2C_UNK);                /* extern */
M2C_UNK func_ov015_02158324();                      /* extern */
M2C_UNK func_ov015_02158784();                      /* extern */
extern u16 data_0214affc;
extern s32 data_ov015_02158de0;
extern M2C_UNK func_ov015_021582e0;

s32 func_ov015_02158228(void) {
    s32 var_r5;
    u16 var_r0;

    var_r5 = 1;
    func_ov015_02158784();
    func_02003d84(0x1E);
    do {
        func_020040c8();
        func_ov015_02158324();
        var_r0 = func_0200399c();
        if (var_r0 != 0) {
            var_r0 = data_0214affc & 8;
            if (var_r0 != 0) {
                var_r5 = 0;
            }
        }
        func_02003f40(var_r0);
        func_02080858(data_ov015_02158de0 + 4, 0x600);
        func_0206cbe4(data_ov015_02158de0 + 4, 0, 0x600);
        func_02003e88();
    } while (var_r5 != 0);
    func_02003c8c(0x3C);
    func_02003a3c(func_ov015_02158324, &func_ov015_021582e0);
    func_0200420c();
    func_02006830();
    return 0;
}
