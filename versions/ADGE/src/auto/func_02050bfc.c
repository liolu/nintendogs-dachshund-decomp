/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02027884(void *, s32);                     /* extern */
s32 func_0202dfe4(void *);                          /* extern */
s32 func_02036258();                                /* extern */
s32 func_02050cbc(void *, s32);                     /* extern */
s32 func_02050fb8(void *, s32);                     /* extern */

s32 func_02050bfc(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = func_02036258();
    if (temp_r0 == 0) {
        return 0;
    }
    if (func_0202dfe4(arg0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x484) = 1;
        return func_02050cbc(arg0, temp_r0);
    }
    temp_r0_2 = func_02027884(arg0, temp_r0);
    switch (temp_r0_2) {                            /* irregular */
        case 1:
        case 2:
            M2C_FIELD(arg0, s32 *, 0x484) = temp_r0_2;
            return func_02050fb8(arg0, temp_r0);
        case 0:
            M2C_FIELD(arg0, s32 *, 0x484) = temp_r0_2;
            return func_02050cbc(arg0, temp_r0);
        default:
            return 0;
    }
}
