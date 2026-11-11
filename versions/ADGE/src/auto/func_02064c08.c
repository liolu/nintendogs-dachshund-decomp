/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02063dd0();                              /* extern */
s32 func_02063de0(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_02063f34(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020641a8(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02064c08(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_020641a8(arg0, arg2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02063f34(0, arg1);
    temp_r0_2 = func_02063dd0();
    var_r0 =
        func_02063de0(0, 3, M2C_FIELD(temp_r0_2, s32 *, 0), M2C_FIELD(temp_r0_2, s32 *, 4), M2C_FIELD(temp_r0_2, s32 *, 0x10));
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
