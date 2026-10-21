/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202761c(s32, s32);                    /* extern */
s32 func_020286ec(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0202f8a4(s32);                         /* extern */
s32 func_020352ec(s32, M2C_UNK);                    /* extern */
s32 func_02035454(s32, M2C_UNK);                    /* extern */
M2C_UNK func_02035710(s32);                         /* extern */
M2C_UNK func_02035e20(s32);                         /* extern */
s32 func_020360a0();                                /* extern */
M2C_UNK func_02036fbc(s32, s32);                    /* extern */
M2C_UNK func_02038edc(s32);                         /* extern */
M2C_UNK func_020510c0(s32);                         /* extern */

void func_02049e94(s32 arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020360a0();
    if (temp_r0 != 0) {
        func_0202761c(temp_r0, arg0 + 0x26C);
        func_02038edc(arg0);
        func_02036fbc(arg0, 0x302);
    }
    func_02035710(arg0);
    if (func_020286ec(arg0, 0, 1) != 0) {
        var_r0 = 1;
    } else if (func_02035454(arg0, 0) != 0) {
        var_r0 = 1;
    } else if (func_020352ec(arg0, 0) != 0) {
        var_r0 = 1;
    } else if (temp_r0 != 0) {
        var_r0 = 0;
    } else {
        func_0202f8a4(arg0);
        func_02035e20(arg0);
        var_r0 = 1;
    }
    if (var_r0 != 0) {
        return;
    }
    func_020510c0(arg0);
}
