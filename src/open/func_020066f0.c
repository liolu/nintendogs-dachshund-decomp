#include "m2c.h"
extern void *data_0214d628;
extern void func_0207d3c8();
extern void func_02003970();
extern volatile s32 data_0214cd14;
s32 func_02073a6c(s32, s32);
s32 func_020739c8(s32);
s32 func_020066f0(u32 arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r12;

    var_r12 = 0;
    temp_r2 = M2C_FIELD(data_0214d628, s32 *, 0x28);
    if ((temp_r2 != 0) && (arg0 < (u32) M2C_FIELD(data_0214d628, u16 *, 0xA))) {
        ((s32 *) temp_r2)[arg0] = arg1;
        var_r12 = 1;
    }
    return var_r12;
}
