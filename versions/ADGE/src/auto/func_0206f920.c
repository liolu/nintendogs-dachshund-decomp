/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206dc00(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0206de68(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0206dfcc(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0206e06c(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0206e110(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0206e260(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0206e2c4(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0206e32c(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_0206f53c(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_02070118();                                /* extern */

void func_0206f920(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_02070118();
    if (func_0206e260(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206e32c(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206e06c(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206e2c4(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206e110(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206dfcc(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206de68(temp_r0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206dc00(temp_r0, arg0, arg1) != 0) {
        return;
    }
    func_0206f53c(arg0, 0xFFFF, 0);
}
