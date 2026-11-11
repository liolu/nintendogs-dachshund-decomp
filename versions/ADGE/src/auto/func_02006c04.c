/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02073acc(s32, u16, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_02006c04(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u16 arg4, s32 arg5) {
    u16 temp_r5;

    temp_r5                   = M2C_FIELD(arg0, u16 *, 2);
    M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) + func_02073acc(M2C_FIELD(arg0, s32 *, 4) + (temp_r5 * 8),
                                                                                 (u16) (M2C_FIELD(arg0, u16 *, 0) - temp_r5),
                                                                                 arg1, arg2, arg3, (s32) arg4, arg5));
}
