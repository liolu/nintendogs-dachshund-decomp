/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cc16c(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_020cd04c();                              /* extern */

void func_020caff4(s32 arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r0;

    temp_r0 = func_020cd04c();
    if (M2C_FIELD(temp_r0, s32 *, 0x10) == 0) {
        return;
    }
    func_020cc16c(temp_r0, arg2, 0);
}
