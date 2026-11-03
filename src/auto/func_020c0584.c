/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020c6530(s32, s32);                        /* extern */
extern u32 data_02141144;
extern void *data_02154c3c;

s32 func_020c0584(void) {
    s32 temp_r0;
    s32 var_r2;

    temp_r0 = M2C_FIELD(data_02154c3c, s32 *, 4);
    var_r2  = 0;
    switch (data_02141144) {
        default:
            break;
        case 1:
            var_r2 = func_020c6530(temp_r0, 0x57B);
            break;
        case 2:
            var_r2 = func_020c6530(temp_r0, 0x57C);
            break;
        case 3:
            var_r2 = func_020c6530(temp_r0, 0x57D);
            break;
        case 4:
            var_r2 = func_020c6530(temp_r0, 0x57E);
            break;
        case 5:
            var_r2 = func_020c6530(temp_r0, 0x57F);
            break;
    }
    return var_r2;
}
