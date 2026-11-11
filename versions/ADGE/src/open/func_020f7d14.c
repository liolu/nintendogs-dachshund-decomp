#include "m2c.h"
s32 func_020a6d60(M2C_UNK);
void func_020c85b4(M2C_UNK);
void func_020c83b8(M2C_UNK, M2C_UNK, s16, M2C_UNK);
void func_020c83a0(M2C_UNK);
void func_020f7d14(s32 arg0) {
    s32 v;
    s32 w;

    v = func_020a6d60(0x45);
    func_020c85b4(arg0);
    func_020c83b8(arg0, 0x1D, 1, 0x218);
    w = v - 1;
    func_020c83b8(arg0, 0x1E, w, 0x218);
    func_020c83b8(arg0, 0x5E, w, 0x88);
    func_020c83a0(arg0);
}
