/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020038a8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0200657c(s32);                         /* extern */
M2C_UNK func_020ca530(s32, M2C_UNK);                /* extern */

s32 func_020c9f38(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020038a8(arg0, 0x24);
    func_020ca530(temp_r0, 4);
    func_0200657c(temp_r0 + 0x1C);
    return temp_r0;
}
