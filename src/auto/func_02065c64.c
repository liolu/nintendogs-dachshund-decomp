/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206521c(M2C_UNK, M2C_UNK);                /* extern */
void *func_0206533c();                              /* extern */
s32 func_0206534c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020654a0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0206e124(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0206e1b8(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_0208083c(s32, M2C_UNK);                /* extern */

s32 func_02065c64(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;

    temp_r0 = func_0206521c(1, 2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 == 0) {
        return 6;
    }
    func_0208083c(arg1, 0xC0);
    func_020654a0(0xC, arg0);
    temp_r4                      = M2C_FIELD(func_0206533c(), void **, 0xC);
    M2C_FIELD(temp_r4, s16 *, 0) = 0xC;
    M2C_FIELD(temp_r4, s32 *, 4) = arg1;
    if (arg2 != 0) {
        func_0206e1b8(arg2, temp_r4 + 8, 0x18);
    } else {
        func_0206e124(temp_r4 + 8, 0, 0x18);
    }
    M2C_FIELD(temp_r4, s32 *, 0x20) = arg3;
    M2C_FIELD(temp_r4, u16 *, 0x26) = arg4;
    var_r0                          = func_0206534c(0xC, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
