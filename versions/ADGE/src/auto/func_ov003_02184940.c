/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022b6c(M2C_UNK);                     /* extern */
s32 func_0203535c();                                /* extern */
M2C_UNK func_ov003_0218758c(M2C_UNK, M2C_UNK, s32, s32); /* extern */

void func_ov003_02184940(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0203535c();
    func_02022b6c(arg0);
    func_ov003_0218758c(arg0, 0, 0x1FF, temp_r4);
}
