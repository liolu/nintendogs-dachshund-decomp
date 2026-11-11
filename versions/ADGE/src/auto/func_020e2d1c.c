/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020e2d1c(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x1C48);
    if (temp_r2 != 4) {
        M2C_FIELD((((s8 *) arg0 + 0x1C48)), s32 *, 4) = temp_r2;
    }
}
