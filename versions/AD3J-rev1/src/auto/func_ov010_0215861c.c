/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02003844(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020c498c(void *, s32);                 /* extern */

void *func_ov010_0215861c(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = func_02003844(arg0, 0x30);
    func_020c498c(temp_r0, arg1);
    if (arg1 == 0) {
        M2C_FIELD(temp_r0, s16 *, 0x28) = 0x7FFF;
        M2C_FIELD(temp_r0, s16 *, 0x2A) = 0;
        M2C_FIELD(temp_r0, s16 *, 0x2C) = -0x1000;
        M2C_FIELD(temp_r0, s16 *, 0x2E) = 0;
    } else if (arg1 == 1) {
        M2C_FIELD(temp_r0, s16 *, 0x28) = 0x1CE7;
        M2C_FIELD(temp_r0, s16 *, 0x2A) = -0x1000;
        M2C_FIELD(temp_r0, s16 *, 0x2C) = 0;
        M2C_FIELD(temp_r0, s16 *, 0x2E) = 0;
    } else {
        M2C_FIELD(temp_r0, s16 *, 0x28) = 0x1CE7;
        M2C_FIELD(temp_r0, s16 *, 0x2A) = 0;
        M2C_FIELD(temp_r0, s16 *, 0x2C) = 0x1000;
        M2C_FIELD(temp_r0, s16 *, 0x2E) = 0;
    }
    return temp_r0;
}
