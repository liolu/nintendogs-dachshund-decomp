#include "m2c.h"

extern M2C_UNK data_0212d3ec;

void *func_020c8a3c(void *arg0) {
    s8 temp_r1;
    void *var_r0;

    temp_r1 = M2C_FIELD(arg0, s8 *, 0xF);
    var_r0  = NULL;
    if ((s32) temp_r1 >= 0) {
        var_r0 = (M2C_UNK *) ((s8 *) &data_0212d3ec + (temp_r1 * 4));
    }
    return var_r0;
}
