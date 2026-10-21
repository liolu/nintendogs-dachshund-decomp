#include "m2c.h"
s32 func_02028714(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0202f9a0(M2C_UNK);                     /* extern */
s32 func_020354a8(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0203560c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020358c8(M2C_UNK);                     /* extern */
M2C_UNK func_02035fd8(M2C_UNK);                     /* extern */
void *func_02036258();                              /* extern */
M2C_UNK func_0204cfa8(M2C_UNK, void *);             /* extern */
s32 func_02028714(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0202f9a0(M2C_UNK);
s32 func_020354a8(M2C_UNK, M2C_UNK);
s32 func_0203560c(M2C_UNK, M2C_UNK);
M2C_UNK func_020358c8(M2C_UNK);
M2C_UNK func_02035fd8(M2C_UNK);
void *func_02036258();
M2C_UNK func_0204cfa8(M2C_UNK, void *);
void func_0204a660(M2C_UNK arg0) {
    void *temp_r0;
    s32 var;

    temp_r0 = func_02036258();
    func_0204cfa8(arg0, temp_r0);
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
    if (temp_r0 != NULL) {
        if ((M2C_FIELD(temp_r0, s16 *, 0xEA) >= 0x289) && (M2C_FIELD(temp_r0, s16 *, 0xEA) <= 0x28A)) {
            var = 1;
        } else {
            var = 0;
        }
        if (var != 0) {
            return;
        }
    }
    func_02035fd8(arg0);
    func_0202f9a0(arg0);
}
