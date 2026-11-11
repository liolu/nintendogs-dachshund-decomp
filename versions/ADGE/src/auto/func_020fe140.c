/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020280c8();                                /* extern */

s32 func_020fe140(void) {
    s32 temp_r0;

    temp_r0 = func_020280c8();
    if ((temp_r0 >= 0) && (temp_r0 <= 0xF)) {
        return temp_r0;
    }
    if ((temp_r0 >= 0x34) && (temp_r0 <= 0x37)) {
        return temp_r0;
    }
    return -1;
}
