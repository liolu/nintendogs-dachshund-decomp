/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020280a0();                                /* extern */

s32 func_020da150(void) {
    s32 temp_r0;

    temp_r0 = func_020280a0();
    if ((temp_r0 >= 0) && (temp_r0 <= 0xF)) {
        return temp_r0;
    }
    return -1;
}
