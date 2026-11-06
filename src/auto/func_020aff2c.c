/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a3788(M2C_UNK, void *, s32, M2C_UNK); /* extern */
M2C_UNK func_020a43f8();                            /* extern */

void func_020aff2c(s32 *arg0) {
    s32 temp_r2;

    *arg0 += 1;
    temp_r2 = *arg0;
    if (temp_r2 > 0x10) {
        func_020a43f8();
        return;
    }
    func_020a3788(2, ((s8 *) arg0 + 0xF0), temp_r2, 0x10);
}
