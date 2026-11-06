/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02074ddc(s32);                         /* extern */
s32 func_02074e70(M2C_UNK, s32);                    /* extern */

s32 func_02074dec(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r0;

    temp_r0 = func_02074e70(arg0, 0x504C5454);
    if (temp_r0 == 0) {
        *arg1 = 0;
        return 0;
    }
    func_02074ddc(temp_r0 + 8);
    *arg1 = temp_r0 + 8;
    return 1;
}
