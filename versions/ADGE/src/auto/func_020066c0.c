#include "m2c.h"

extern void *data_0214d628;

s32 func_020066c0(u32 arg0) {
    s32 temp_r2;
    s32 var_r3;

    var_r3  = 0;
    temp_r2 = M2C_FIELD(data_0214d628, s32 *, 0x2C);
    if ((temp_r2 != 0) && (arg0 < (u32) M2C_FIELD(data_0214d628, u16 *, 0xC))) {
        var_r3 = temp_r2 + (arg0 << 5);
    }
    return var_r3;
}
