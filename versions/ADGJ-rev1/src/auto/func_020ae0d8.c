/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u32 func_020afc44(s16);                             /* extern */
extern void *data_02153708;

s32 func_020ae0d8(void) {
    s32 var_r4;
    u32 temp_r0;

    var_r4  = 0xFFFF;
    temp_r0 = func_020afc44(M2C_FIELD(data_02153708, s16 *, 0xE));
    switch (temp_r0) {
        default:
            break;
        case 0:
            var_r4 = 1;
            break;
        case 2:
            var_r4 = 2;
            break;
        case 3:
            var_r4 = 4;
            break;
        case 4:
            var_r4 = 0;
            break;
        case 5:
            var_r4 = 5;
            break;
        case 6:
            var_r4 = 3;
            break;
    }
    return var_r4;
}
