/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a8934();                                /* extern */
M2C_UNK func_020a8db4(s32, M2C_UNK);                /* extern */

void func_020a8458(void) {
    s32 temp_r0;

    temp_r0 = func_020a8934();
    if (temp_r0 < 0) {
        return;
    }
    func_020a8db4(temp_r0, 0);
}
