/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202a610(void *arg0, void *arg1) {
    s16 temp_r3;

    if (arg1 == NULL) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg1, s16 *, 0x96);
    if ((temp_r3 == 0) && ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), s16 *, 0x1E) > 0x708)) {
        M2C_FIELD(arg0, s16 *, 0xEA) = 0x41D;
        return 1;
    }
    if ((temp_r3 == 1) && ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), s16 *, 0x20) > 0x384)) {
        M2C_FIELD(arg0, s16 *, 0xEA) = 0x41D;
        return 1;
    }
    M2C_FIELD(arg0, s16 *, 0xEA) = 0x41E;
    return 1;
}
