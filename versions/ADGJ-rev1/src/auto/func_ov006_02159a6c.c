/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov006_02157c20();                                /* extern */
s32 func_ov006_021594f4();                                /* extern */
u8 func_ov006_02159abc(u8);                               /* extern */
u8 func_ov006_02159b70(u8);                               /* extern */

u8 func_ov006_02159a6c(void) {
    s32 temp_r0;
    u8 var_r4;

    var_r4  = func_ov006_02157c20() + 5;
    temp_r0 = func_ov006_021594f4();
    switch (temp_r0) {                              /* irregular */
        case 2:
            var_r4 = func_ov006_02159b70(var_r4);
            break;
        case 3:
            var_r4 = func_ov006_02159abc(var_r4);
            break;
    }
    return var_r4;
}
