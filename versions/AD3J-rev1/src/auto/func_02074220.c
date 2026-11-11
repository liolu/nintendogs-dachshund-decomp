/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02071b10();                                /* extern */
M2C_UNK func_020736a8();                            /* extern */

s32 func_02074220(void) {
    s32 temp_r0;

    temp_r0 = func_02071b10();
    if (temp_r0 != 0) {
        func_020736a8();
    }
    return temp_r0;
}
