#include "m2c.h"
s32 func_02036258(M2C_UNK);
s32 func_02028114(M2C_UNK);
void func_0202507c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02039128(M2C_UNK);
void func_02027644(M2C_UNK, M2C_UNK);
void func_02037130(M2C_UNK, M2C_UNK);
void func_0204bb68(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204b890(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02036258(arg0);
    func_0202507c(arg0, 0x10, 0x26, (s32) (((s64) func_02028114(arg0) * 0x117 + 0x800) >> 12));
    if (temp_r4 != 0) {
        func_02039128(arg0);
        func_02027644(temp_r4, arg0 + 0x278);
        func_02037130(arg0, 0x300);
    }
    func_0204bb68(arg0, temp_r4, 1);
}
