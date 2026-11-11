/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022b6c(M2C_UNK);                     /* extern */
s32 func_02035264(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_ov003_0218758c(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_ov003_02187320(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02035264(arg0, 1);
    func_02022b6c(arg0);
    func_ov003_0218758c(arg0, 5, 0x57, temp_r4);
}
