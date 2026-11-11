/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020dafcc(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020db03c(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_020db44c(s32, M2C_UNK);                /* extern */

void func_020e3128(void) {
    s32 temp_r0;

    temp_r0 = func_020dafcc(0, 4);
    func_020db44c(temp_r0, 0);
    func_020db03c(0, temp_r0, 0xE);
}
