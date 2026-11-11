/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206521c(M2C_UNK, M2C_UNK);                /* extern */
void *func_0206533c();                              /* extern */
s32 func_0206534c(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_020654a0(M2C_UNK, M2C_UNK);            /* extern */

s32 func_020661e4(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_0206521c(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020654a0(3, arg0);
    temp_r0_2 = func_0206533c();
    var_r0 =
        func_0206534c(3, 3, M2C_FIELD(temp_r0_2, s32 *, 0), M2C_FIELD(temp_r0_2, s32 *, 4), M2C_FIELD(temp_r0_2, s32 *, 0x10));
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
