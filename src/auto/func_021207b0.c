/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0211cf48();                                /* extern */
s32 func_0211e8f4();                                /* extern */
u8 func_02120800(u8);                               /* extern */
u8 func_021208b4(u8);                               /* extern */

u8 func_021207b0(void) {
    s32 temp_r0;
    u8 var_r4;

    var_r4  = func_0211cf48() + 5;
    temp_r0 = func_0211e8f4();
    switch (temp_r0) {                              /* irregular */
        case 2:
            var_r4 = func_021208b4(var_r4);
            break;
        case 3:
            var_r4 = func_02120800(var_r4);
            break;
    }
    return var_r4;
}
