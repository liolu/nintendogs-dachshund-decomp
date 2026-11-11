#include "m2c.h"
s32 func_02028114(s32);
void func_02025254(s32, s32, s32);
s32 func_0204722c(s32, s32);
s32 func_0203535c(s32);
void func_0204f918(s32);
s32 func_02028114(M2C_UNK);
void func_02025254(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02024e30(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02024d30(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020485c4(M2C_UNK, M2C_UNK);
s32 func_0204722c(M2C_UNK, M2C_UNK);
s32 func_0203535c(M2C_UNK);
void func_0204f918(M2C_UNK);
void func_02048360(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 *data_0214da84;
void func_02047024(s32 arg0) {
    s64 x;
    s32 v;

    x = func_02028114(arg0);
    v = (s32) ((x * 0x200 + 0x800) >> 12);
    func_02025254(arg0, 9, v);
    if (func_0204722c(arg0, 1) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0204f918(arg0);
}
