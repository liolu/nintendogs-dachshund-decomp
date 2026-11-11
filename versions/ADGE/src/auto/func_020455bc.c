/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02027644(void *, s32);                 /* extern */
s32 func_02028714(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0202f9a0(s32);                         /* extern */
s32 func_020354a8(s32, M2C_UNK);                    /* extern */
s32 func_0203560c(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020358c8(s32);                         /* extern */
M2C_UNK func_02035fd8(s32);                         /* extern */
void *func_02036258();                              /* extern */

void func_020455bc(s32 arg0) {
    void *temp_r0;

    temp_r0 = func_02036258();
    if (temp_r0 != NULL) {
        func_02027644(temp_r0, arg0 + 0x3B4);
    }
    func_020358c8(arg0);
    if (func_02028714(arg0, 0, 1) != 0) {
        return;
    }
    if (func_0203560c(arg0, 0) != 0) {
        return;
    }
    if (func_020354a8(arg0, 0) != 0) {
        return;
    }
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, s16 *, 0xEA) == 0x2FD)) {
        return;
    }
    func_02035fd8(arg0);
    func_0202f9a0(arg0);
}
