/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020038a8(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020c9f38(M2C_UNK);                         /* extern */
M2C_UNK func_020ca670(s32, s32);                    /* extern */
M2C_UNK func_020ca69c(s32, s32);                    /* extern */
M2C_UNK func_020ca6c8(s32, s32);                    /* extern */
M2C_UNK func_020ca6f4();                            /* extern */

s32 func_020c90bc(M2C_UNK arg0, void *arg1) {
    s32 temp_r4;
    u32 var_r7;

    temp_r4 = func_020038a8(arg0, 0x48);
    func_020ca6f4();
    func_020ca6c8(temp_r4, M2C_FIELD(arg1, s32(**)(M2C_UNK), 4)(arg0));
    for (var_r7 = 0; var_r7 < (u32) M2C_FIELD(arg1, u16 *, 0); var_r7 += 1) {
        func_020ca69c(temp_r4, M2C_FIELD(arg1, s32(**)(M2C_UNK, u32), 8)(arg0, var_r7));
    }
    func_020ca670(temp_r4, func_020c9f38(arg0));
    return temp_r4;
}
