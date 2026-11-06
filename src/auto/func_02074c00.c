/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02074c00(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r4;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r2 >= temp_r1) {
        return M2C_FIELD(arg0, s32 *, 4);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0);
    return temp_r4 + ((s32) (temp_r2 * (M2C_FIELD(arg0, s32 *, 4) - temp_r4)) / temp_r1);
}
