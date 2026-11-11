/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02028714(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0202f9a0(M2C_UNK);                     /* extern */
s32 func_020354a8(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0203560c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020358c8(M2C_UNK);                     /* extern */
M2C_UNK func_02035fd8(M2C_UNK);                     /* extern */
void *func_02036258();                              /* extern */
M2C_UNK func_0204d5d4(M2C_UNK, void *);             /* extern */

void func_0204567c(M2C_UNK arg0) {
    void *temp_r0;

    temp_r0 = func_02036258();
    func_0204d5d4(arg0, temp_r0);
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
