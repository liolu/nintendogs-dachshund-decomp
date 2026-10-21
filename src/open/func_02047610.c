#include "m2c.h"

void func_02048360(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 *data_0214da84;

s32 func_02028114(M2C_UNK);
void func_02025254(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02024e30(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02024d30(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020485c4(M2C_UNK, M2C_UNK);
s32 func_0204722c(M2C_UNK, M2C_UNK);
s32 func_0203535c(M2C_UNK);
void func_0204f918(M2C_UNK);
void func_02047610(s32 arg0) {
    u32 next;
    u16 lo;
    u16 hi;

    next = *data_0214da84 * 0x10DCD + 1;
    lo = next;
    hi = (u32) lo * 0x32 >> 0x10;
    *data_0214da84 = next;
    func_02048360(arg0, 8, hi == 0);
}
