/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ebb0c(s32, u16, u16);               /* extern */
M2C_UNK func_020ebbdc(s32, u16, s16, s16);          /* extern */

s32 func_020f0bfc(void *arg0, s16 arg1, s16 arg2) {
    M2C_UNK (*temp_r1_2)(void *);
    s32 var_r5;
    u16 temp_r1;

    var_r5 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        M2C_FIELD(arg0, s16 *, 0x20) = (s16) M2C_FIELD(arg0, s16 *, 0x18);
        M2C_FIELD(arg0, s16 *, 0x22) = arg1;
        M2C_FIELD(arg0, s16 *, 0x24) = arg2;
        temp_r1                      = M2C_FIELD(arg0, u16 *, 4);
        if (temp_r1 != 0xFFFF) {
            if (M2C_FIELD(arg0, s32 *, 8) != 0) {
                func_020ebb0c(M2C_FIELD(arg0, s32 *, 0), temp_r1, M2C_FIELD(arg0, u16 *, 0xE));
            }
            if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
                func_020ebbdc(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, s16 *, 0x14),
                              M2C_FIELD(arg0, s16 *, 0x16));
            }
        }
        temp_r1_2 = M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x28);
        var_r5    = 1;
        if (temp_r1_2 != NULL) {
            temp_r1_2(arg0);
        }
    }
    return var_r5;
}
