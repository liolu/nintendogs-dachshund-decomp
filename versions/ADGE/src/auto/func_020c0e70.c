/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bd6c4();                                /* extern */
s32 func_020bef20();                                /* extern */
u8 func_020c0ec0(u8);                               /* extern */
u8 func_020c0f74(u8);                               /* extern */

u8 func_020c0e70(void) {
    s32 temp_r0;
    u8 var_r4;

    var_r4  = func_020bd6c4() + 5;
    temp_r0 = func_020bef20();
    switch (temp_r0) {                              /* irregular */
        case 2:
            var_r4 = func_020c0f74(var_r4);
            break;
        case 3:
            var_r4 = func_020c0ec0(var_r4);
            break;
    }
    return var_r4;
}
