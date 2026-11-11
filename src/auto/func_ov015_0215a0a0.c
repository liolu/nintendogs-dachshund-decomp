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
M2C_UNK func_020c92d8();                            /* extern */
M2C_UNK func_020fad7c();                            /* extern */
M2C_UNK func_ov015_0215a144();                      /* extern */
M2C_UNK func_ov015_0215a51c();                      /* extern */
extern u16 data_0214d5fc;
extern s32 data_ov015_0215ab8c;
extern M2C_UNK func_ov015_0215a140;

s32 func_ov015_0215a0a0(void) {
    s32 var_r6;
    u16 var_r0;

    var_r6 = 1;
    func_ov015_0215a51c();
    func_02003de8(0x1E);
    do {
        func_0200412c();
        func_ov015_0215a144();
        var_r0 = func_02003a00();
        if (var_r0 != 0) {
            var_r0 = data_0214d5fc & 8;
            if (var_r0 != 0) {
                var_r6 = 0;
            }
        }
        func_02003fa4(var_r0);
        func_02003eec();
    } while (var_r6 != 0);
    func_02003cf0(0x3C);
    func_02003aa0(func_ov015_0215a144, &func_ov015_0215a140);
    func_020c92d8();
    func_02004270();
    func_02006894();
    data_ov015_0215ab8c = 0;
    func_020fad7c();
    return 0;
}
