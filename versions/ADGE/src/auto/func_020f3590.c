/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020cbbe8(s32, s32);                        /* extern */
extern u32 data_02147530;
extern void *data_02159e30;

s32 func_020f3590(void) {
    s32 temp_r0;
    s32 var_r2;

    temp_r0 = M2C_FIELD(data_02159e30, s32 *, 4);
    var_r2  = 0;
    switch (data_02147530) {
        default:
            break;
        case 1:
            var_r2 = func_020cbbe8(temp_r0, 0x57B);
            break;
        case 2:
            var_r2 = func_020cbbe8(temp_r0, 0x57C);
            break;
        case 3:
            var_r2 = func_020cbbe8(temp_r0, 0x57D);
            break;
        case 4:
            var_r2 = func_020cbbe8(temp_r0, 0x57E);
            break;
        case 5:
            var_r2 = func_020cbbe8(temp_r0, 0x57F);
            break;
    }
    return var_r2;
}
