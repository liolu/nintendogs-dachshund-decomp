/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02072190();                            /* extern */
M2C_UNK func_0207d1a0(void *, s32);                 /* extern */
s32 func_0207de9c(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_02072100(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_0207de9c(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02072190();
    func_0207d1a0(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
