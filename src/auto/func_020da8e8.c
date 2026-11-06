/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
M2C_UNK func_0202767c(s32, M2C_UNK);                /* extern */

void func_020da8e8(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_01ffda04(M2C_FIELD(arg0, s16 *, 0x8C));
    if (temp_r0 == 0) {
        return;
    }
    func_0202767c(temp_r0, 0);
}
