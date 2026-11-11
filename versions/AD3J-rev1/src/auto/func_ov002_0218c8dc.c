/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020351a0(M2C_UNK);                         /* extern */
s32 func_02035268(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02035294(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020352c0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_ov002_0218ca24(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */

void func_ov002_0218c8dc(M2C_UNK arg0) {
    M2C_UNK var_r5;
    s32 temp_r4;

    if ((func_02035294(arg0, 7) != 0) && (func_02035268(arg0, 0x19) != 0)) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    temp_r4 = func_020352c0(arg0, 7);
    func_ov002_0218ca24(arg0, 0, temp_r4, var_r5, func_020351a0(arg0));
}
