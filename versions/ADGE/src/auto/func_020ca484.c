/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020038a8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0207d234(s32, M2C_UNK);                /* extern */

s32 func_020ca484(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020038a8(arg0, 0xC);
    func_0207d234(temp_r0, 0x10);
    return temp_r0;
}
