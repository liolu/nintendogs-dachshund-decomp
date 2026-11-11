/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020038a8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02111b88(s32, M2C_UNK);                /* extern */
extern s32 data_0215a04c;

s32 func_02111b58(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020038a8(arg0, 0x5C);
    func_02111b88(temp_r0, 0);
    data_0215a04c = temp_r0;
    return temp_r0;
}
