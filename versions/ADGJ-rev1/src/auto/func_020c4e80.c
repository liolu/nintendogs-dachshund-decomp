/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02003844(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0207d87c(s32, M2C_UNK);                /* extern */

s32 func_020c4e80(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_02003844(arg0, 0xC);
    func_0207d87c(temp_r0, 0x10);
    return temp_r0;
}
