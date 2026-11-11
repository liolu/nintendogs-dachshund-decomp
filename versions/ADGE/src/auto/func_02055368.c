/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202fa5c(M2C_UNK);                         /* extern */
s32 func_02036258();                                /* extern */
M2C_UNK func_0203e5e8(M2C_UNK, s32);                /* extern */
s32 func_0204469c();                                /* extern */
extern s32 *data_0214da84;

s32 func_02055368(M2C_UNK arg0) {
    s32 temp_r1;
    s32 temp_r5;
    u16 temp_r0;

    temp_r5 = func_02036258();
    if (!(func_0204469c() & 1)) {
        return func_0202fa5c(arg0);
    }
    if (temp_r5 == 0) {
        return 0;
    }
    temp_r1        = (*data_0214da84 * 0x10DCD) + 1;
    *data_0214da84 = temp_r1;
    temp_r0        = (u16) ((u32) (temp_r1 << 0x10) >> 0x1F);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_0203e5e8(arg0, 0x278);
            return 1;
        case 1:
            func_0203e5e8(arg0, 0x279);
            return 1;
        default:
            return 0;
    }
}
