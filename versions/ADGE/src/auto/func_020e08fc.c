/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u32 func_020e2918(s16);                             /* extern */
extern void *data_0215a04c;

s32 func_020e08fc(void) {
    s32 var_r4;
    u32 temp_r0;

    var_r4  = 0xFFFF;
    temp_r0 = func_020e2918(M2C_FIELD(data_0215a04c, s16 *, 0xE));
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
