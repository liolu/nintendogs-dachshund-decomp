#include "engine.h"
#include "m2c.h"
extern void *data_0214da84;
s32 func_02042864(s32 arg0) {
    s8 temp_r0;
    void *var_r0;
    void *temp_r0_2;

    temp_r0 = M2C_FIELD(data_0214da84, s8 *, 9);
    if (arg0 == (s32) temp_r0) {
        if ((arg0 < 0) || (arg0 >= 3)) {
            var_r0 = NULL;
        } else {
            var_r0 = M2C_FIELD((data_0214da84 + (arg0 * 4)), void **, 0x54);
        }
        if (var_r0 != NULL) {
            temp_r0_2 = M2C_FIELD(var_r0, void **, 0x9E8);
            M2C_FIELD(data_0214da84, s32 *, 0x40) = (M2C_FIELD(temp_r0_2, s16 *, 0x88) * 0xA) + 0x12C;
            return 1;
        }
    }
    return 0;
}
