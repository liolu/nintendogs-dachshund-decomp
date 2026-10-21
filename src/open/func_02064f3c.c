#include "m2c.h"
void *func_02063dd0(void);
s32 func_02063cb0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020801f4(void *, M2C_UNK);
s32 func_02064414(void);
s32 func_02064500(void);
void func_02063f34(M2C_UNK, M2C_UNK);
s32 func_02063de0();
s32 func_02064f3c(s32 a0, s32 a1, s32 a2, s32 a3, u16 a4, u16 a5, u16 a6, s32 a7, s32 a8, s32 a9, s32 a10) {
    void *base;
    s32 r;
    u16 v;

    base = func_02063dd0();
    r = func_02063cb0(2, 7, 8);
    if (r) {
        return r;
    }
    func_020801f4(M2C_FIELD(base, u8 **, 4) + 0x184, 2);
    func_020801f4(M2C_FIELD(base, u8 **, 4) + 0xC2, 2);
    if (M2C_FIELD(M2C_FIELD(base, u8 **, 4), u16 *, 0x184) != 0) {
        if (M2C_FIELD(M2C_FIELD(base, u8 **, 4), u16 *, 0xC2) != 1) {
            return 3;
        }
    }
    func_020801f4(M2C_FIELD(base, u8 **, 4) + 0xC, 4);
    if (M2C_FIELD(M2C_FIELD(base, u8 **, 4), s32 *, 0xC) == 1) {
        return 3;
    }
    if (a2 < func_02064414()) {
        return 6;
    }
    if (a2 & 0x3F) {
        return 6;
    }
    v = (unsigned short) a4;
    r = func_02064500();
    if (v < r) {
        return 6;
    }
    if (v & 0x1F) {
        return 6;
    }
    func_02063f34(0xE, a0);
    r = func_02063de0(0xE, 0xA, a1, (u32) a2 >> 1, a3, a4, a5, a6, a7, a8, a9, a10);
    if (r == 0) {
        r = 2;
    }
    return r;
}
