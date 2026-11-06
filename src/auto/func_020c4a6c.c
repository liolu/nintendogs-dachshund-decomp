/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200365c();           /* extern */
M2C_UNK func_02078340();                            /* extern */
void *func_02078ba4();                           /* extern */

void func_020c4a6c(s32 arg0, M2C_UNK arg1) {
    void *temp_r0;

    func_02078340();
    temp_r0 = func_02078ba4(arg0);
    func_0200365c(arg1, arg0, (temp_r0 + M2C_FIELD(temp_r0, s32 *, 0x14)) - arg0);
}
