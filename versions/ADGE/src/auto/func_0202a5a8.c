/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_0214da84;

s32 func_0202a5a8(void *arg0) {
    s8 temp_r2;

    temp_r2 = M2C_FIELD(data_0214da84, s8 *, 7);
    if ((temp_r2 != -1) && (M2C_FIELD(arg0, s8 *, 0x88) != temp_r2)) {
        return 1;
    }
    return 0;
}
