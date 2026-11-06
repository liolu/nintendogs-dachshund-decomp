#include "m2c.h"

void *func_02078ba4(void *arg0) {
    void *temp_r3;
    void *var_r0;

    temp_r3 = arg0 + M2C_FIELD(arg0, u16 *, 0xC);
    if (M2C_FIELD(arg0, u16 *, 0xE) == 1) {
        if (M2C_FIELD(arg0, s32 *, 0) == 0x30585442) {
            var_r0 = arg0 + M2C_FIELD(temp_r3, s32 *, 0);
        } else {
            var_r0 = NULL;
        }
        return var_r0;
    }
    return arg0 + M2C_FIELD(temp_r3, s32 *, 4);
}
