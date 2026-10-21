#include "m2c.h"
s32 func_0207832c(s32);
s32 func_020742d0(s32);
s32 func_020741d4(s32);
void func_020742bc(s32, s32, s32);
void func_020741cc(s32, s32);
void func_020741e0(s32, s32);
void func_02074160(s32, s32);
s32 func_0207836c(s32);
void func_02073dc4(s32, s32);
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
extern u32 data_02141080[];
void func_020c7bb0(s32 arg0) {
    s32 file;
    s32 tex;
    s32 mdlSet;

    if (!(M2C_FIELD((s8 *) arg0, u16 *, 2) & 1)) {
        return;
    }
    M2C_FIELD((s8 *) arg0, u16 *, 2) &= ~1;
    file = *(s32 *) (arg0 + 0xA0);
    tex = func_0207832c(file);
    if (tex != 0) {
        func_020742d0(tex);
        func_020741d4(tex);
        func_020742bc(tex, 0, *(s32 *) (arg0 + 0xB0));
        func_020741cc(tex, *(s32 *) (arg0 + 0xB8));
        func_020741e0(tex, 1);
        func_02074160(tex, 1);
    }
    mdlSet = func_0207836c(file);
    if (tex != 0) {
        func_02073dc4(mdlSet, tex);
    }
}
