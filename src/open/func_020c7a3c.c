#include "m2c.h"
s32 func_0204722c(M2C_UNK, M2C_UNK);
void func_0204f918(s32);
extern u32 data_0214da84;
s32 func_02028114(s32);
void func_02024d30(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201d1e0(M2C_UNK);
void func_02035978(M2C_UNK, M2C_UNK);
M2C_UNK func_0203535c(M2C_UNK);
void func_0202f9a0(M2C_UNK);
extern u32 data_02154578;
s32 func_0207832c(s32);
s32 func_020742d0(s32);
s32 func_020741d4(s32);
void func_020742bc(s32, s32, s32);
void func_020741cc(s32, s32);
void func_020741e0(s32, s32);
void func_02074160(s32, s32);
s32 func_0207836c(s32);
void func_02073dc4(s32, s32);
extern u32 data_02141080[];
M2C_UNK func_020c7a3c(M2C_UNK arg0, s16 arg1) {
    s32 base;
    s32 idx;
    u16 v;

    base = (s32) arg0 + 0xC0;
    idx = arg1 * 12;
    v = *(u16 *) (base + idx);
    return func_02078714(*(M2C_UNK *) (base + idx + ((v ^ 1) << 2) + 4), 0);
}
