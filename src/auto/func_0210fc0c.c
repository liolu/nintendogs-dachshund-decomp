/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
M2C_UNK func_02027044(s32, M2C_UNK);                /* extern */
M2C_UNK func_020274b8(s32, M2C_UNK);                /* extern */
s32 func_021077ac(void *, M2C_UNK, s16, M2C_UNK);   /* extern */

s32 func_0210fc0c(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if (func_021077ac(arg0, 8, M2C_FIELD(arg0, s16 *, 0x98), -1) == 0) {
        return 0;
    }
    temp_r0 = func_01ffda04(M2C_FIELD(arg0, s16 *, 0x98));
    func_02027044(temp_r0, 0x2C);
    func_020274b8(temp_r0, arg1);
    return 1;
}
