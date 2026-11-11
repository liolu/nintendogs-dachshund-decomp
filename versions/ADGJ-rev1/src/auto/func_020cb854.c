#include "m2c.h"

extern void *data_02154c48;

s32 func_020cb854(void) {
    s32 var_r0;

    var_r0 = 0;
    if (M2C_FIELD(M2C_FIELD(data_02154c48, void **, 0x141C), s32 *, 0x6A8) == 0x444F473F) {
        var_r0 = 1;
    }
    return var_r0;
}
