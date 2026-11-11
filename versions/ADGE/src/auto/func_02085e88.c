/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_02086410();                                /* extern */

s32 func_02085e88(void *arg0) {
    u16 temp_r0;

    temp_r0 = func_02086410();
    if (temp_r0 != M2C_FIELD(arg0, u16 *, 0x12)) {
        M2C_FIELD(arg0, u16 *, 0x12) = temp_r0;
        return 1;
    }
    return 0;
}
