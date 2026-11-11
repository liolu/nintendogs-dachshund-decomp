#include "m2c.h"

s32 func_0203ae6c(void *arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x9E4);
    if ((s32) M2C_FIELD(temp_r2, s16 *, 0x1E) >= 0x2710) {
        return 1;
    }
    if ((s32) M2C_FIELD(temp_r2, s16 *, 0x20) >= 0x2710) {
        return 1;
    }
    return 0;
}
