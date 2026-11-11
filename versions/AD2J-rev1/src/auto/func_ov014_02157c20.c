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
M2C_UNK func_020c3cd4();                            /* extern */
M2C_UNK func_020d6d8c();                            /* extern */
M2C_UNK func_ov014_02157cc4();                      /* extern */
M2C_UNK func_ov014_0215809c();                      /* extern */
extern u16 data_0214affc;
extern s32 data_ov014_0215870c;
extern M2C_UNK func_ov014_02157cc0;

s32 func_ov014_02157c20(void) {
    s32 var_r6;
    u16 var_r0;

    var_r6 = 1;
    func_ov014_0215809c();
    func_02003d84(0x1E);
    do {
        func_020040c8();
        func_ov014_02157cc4();
        var_r0 = func_0200399c();
        if (var_r0 != 0) {
            var_r0 = data_0214affc & 8;
            if (var_r0 != 0) {
                var_r6 = 0;
            }
        }
        func_02003f40(var_r0);
        func_02003e88();
    } while (var_r6 != 0);
    func_02003c8c(0x3C);
    func_02003a3c(func_ov014_02157cc4, &func_ov014_02157cc0);
    func_020c3cd4();
    func_0200420c();
    func_02006830();
    data_ov014_0215870c = 0;
    func_020d6d8c();
    return 0;
}
