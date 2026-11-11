/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02027884(M2C_UNK, s32);                    /* extern */
s32 func_0202daec(M2C_UNK);                         /* extern */
s32 func_0202dfe4(M2C_UNK);                         /* extern */
s32 func_02036258();                                /* extern */
M2C_UNK func_0203e5e8(M2C_UNK, s32);                /* extern */

s32 func_0204f784(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = func_02036258();
    if (temp_r0 == 0) {
        return 0;
    }
    if (func_0202daec(arg0) >= 0xD) {
        return 0;
    }
    if (func_0202dfe4(arg0) != 0) {
        if (func_0202daec(arg0) == 0) {
            func_0203e5e8(arg0, 0x2FE);
        }
        return 1;
    }
    temp_r0_2 = func_02027884(arg0, temp_r0);
    switch (temp_r0_2) {                            /* irregular */
        case 2:
            if (func_0202daec(arg0) == 0) {
                func_0203e5e8(arg0, 0x2FF);
            }
            return 1;
        case 1:
            if (func_0202daec(arg0) == 0) {
                func_0203e5e8(arg0, 0x2FE);
            }
            return 1;
        case 0:
            func_0203e5e8(arg0, 0x300);
            return 1;
        default:
            return 0;
    }
}
