#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02131558;

s32 func_020ce1d4(s32 arg0) {
    s8 temp_r1;
    void *var_r0;

    temp_r1 = M2C_FIELD(arg0, s8 *, 0xF);
    var_r0  = NULL;
    if ((s32) temp_r1 >= 0) {
        var_r0 = (M2C_UNK *) ((s8 *) &data_02131558 + (temp_r1 * 4));
    }
    return (s32) var_r0;
}
