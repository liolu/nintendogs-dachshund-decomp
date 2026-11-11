#include "m2c.h"

extern void *data_02153720;
extern void *data_02156080;

void func_02020788(void *arg0) {
    s16 temp_r3;
    void *var_r1;

    temp_r3 = M2C_FIELD(data_02153720, s16 *, 0x7A);
    if (((s32) temp_r3 < 0) || ((s32) M2C_FIELD(data_02156080, s16 *, 0x20) <= (s32) temp_r3)) {
        var_r1 = NULL;
    } else {
        var_r1 = M2C_FIELD((data_02156080 + (temp_r3 * 4)), void **, 4);
    }
    if (var_r1 == NULL) {
        return;
    }
    if (M2C_FIELD(arg0, s8 *, 0x88) == M2C_FIELD(var_r1, s16 *, 0x98)) {
        M2C_FIELD(arg0, s16 *, 0x154) = 1;
    }
}
