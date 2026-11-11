/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0203535c(M2C_UNK);                         /* extern */
s32 func_02035424(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02035450(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0203547c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_ov003_0218ed04(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */

void func_ov003_0218ec30(M2C_UNK arg0) {
    M2C_UNK var_r5;
    s32 temp_r4;

    if ((func_02035450(arg0, 7) != 0) && (func_02035424(arg0, 0x19) != 0)) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    temp_r4 = func_0203547c(arg0, 7);
    func_ov003_0218ed04(arg0, 0, temp_r4, var_r5, func_0203535c(arg0));
}
