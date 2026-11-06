/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02003844(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02006518(s32);                         /* extern */
M2C_UNK func_020c4f2c(s32, M2C_UNK);                /* extern */

s32 func_020c4934(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_02003844(arg0, 0x24);
    func_020c4f2c(temp_r0, 4);
    func_02006518(temp_r0 + 0x1C);
    return temp_r0;
}
