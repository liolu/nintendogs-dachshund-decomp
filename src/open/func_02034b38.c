#include "m2c.h"
extern void *data_021555f8;
s32 func_02034b38(s32 arg0) {
    s16 temp_r2;
    void *var_r0;
    s32 var_r1;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0xEA);
    if ((temp_r2 >= 0x41D) && (temp_r2 <= 0x427)) {
        return 1;
    }
    if ((temp_r2 >= 0x3C0) && (temp_r2 <= 0x3C6)) {
        temp_r2 = M2C_FIELD(arg0, s16 *, 0x13E) - 3;
        if (((s32) temp_r2 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= (s32) temp_r2)) {
            var_r0 = NULL;
        } else {
            var_r0 = M2C_FIELD((data_021555f8 + (temp_r2 * 4)), void **, 4);
        }
        if (var_r0 != NULL) {
            temp_r2 = M2C_FIELD(var_r0, s16 *, 0x96);
            var_r1 = 1;
            if (temp_r2 != 0) {
                if (temp_r2 != 1) {
                    var_r1 = 0;
                }
            }
            return var_r1;
        }
    }
    return 0;
}
