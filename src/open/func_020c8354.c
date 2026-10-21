#include "m2c.h"
extern u32 data_02141080[];
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
u32 func_020c8354(u32 arg0, s16 arg1) {
    s16 var = *(s16 *)(arg0 + arg1 * 12 + 0x1AA);
    return data_02141080[*(s16 *)(arg0 + var * 16 + 0x168)];
}
