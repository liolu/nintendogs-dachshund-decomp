/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_02089b88();                                /* extern */

s32 func_02089600(void *arg0) {
    u16 temp_r0;

    temp_r0 = func_02089b88();
    if (temp_r0 != M2C_FIELD(arg0, u16 *, 0x12)) {
        M2C_FIELD(arg0, u16 *, 0x12) = temp_r0;
        return 1;
    }
    return 0;
}
