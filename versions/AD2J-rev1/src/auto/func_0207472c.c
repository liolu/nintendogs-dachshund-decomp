/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02072e68(s32);                             /* extern */
s32 *func_020730cc(s32);                            /* extern */
s32 func_02074290(M2C_UNK, u8, u16, u8, void *, s32, s32, s32); /* extern */
void *func_02074b90(s32, s32);                      /* extern */

s32 func_0207472c(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 *temp_r0_3;
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0_3 = func_020730cc(arg1);
    if (temp_r0_3 == NULL) {
        return 0;
    }
    temp_r0_2 = func_02072e68(*temp_r0_3);
    if (temp_r0_2 == 0) {
        return 0;
    }
    temp_r0 = func_02074b90(temp_r0_2, arg2);
    if (temp_r0 == NULL) {
        return 0;
    }
    return func_02074290(arg0, M2C_FIELD(temp_r0, u8 *, 9), M2C_FIELD(temp_r0, u16 *, 4), M2C_FIELD(temp_r0, u8 *, 8), temp_r0,
                         temp_r0_2, arg1, arg2);
}
