#include "m2c.h"

void *func_020038a8(s32, s32);
void func_0208831c(s32);
void func_020c9f18(s32);
s32 func_020034f0(s32, s32);
void func_020ca2bc(s32);
void func_0207ddc4(s32, s32);

void *func_020c8068(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 *r4;
    s16 i;
    s32 j;
    s32 *q;

    r4 = (s32 *) func_020038a8(arg0, 0x108);
    M2C_FIELD(r4, u16 *, 0) = 0;
    M2C_FIELD(r4, u16 *, 2) = 0;
    func_0208831c((s32) r4 + 4);
    func_020c9f18((s32) r4 + 0x48);
    M2C_FIELD(r4, s32 *, 0x6C) = func_020034f0(arg0, 0x12800);
    if (arg1 == 0) {
        M2C_FIELD(r4, s32 *, 0x70) = M2C_FIELD(r4, s32 *, 0x6C);
    } else {
        M2C_FIELD(r4, s32 *, 0x70) = func_020034f0(arg1, 0xA28);
    }
    M2C_FIELD(r4, s32 *, 0x74) = 0;
    M2C_FIELD(r4, u16 *, 0x78) = (u16) arg3;
    M2C_FIELD(r4, u16 *, 0x7A) = 0xFFFF;
    M2C_FIELD(r4, s32 *, 0x80) = arg2;
    M2C_FIELD(r4, s32 *, 0x84) = 0;
    M2C_FIELD(r4, s32 *, 0x88) = 0;
    M2C_FIELD(r4, s32 *, 0x8C) = 0;
    M2C_FIELD(r4, s32 *, 0x90) = 0;
    M2C_FIELD(r4, s32 *, 0x94) = 0;
    func_020ca2bc((s32) r4 + 0x98);
    M2C_FIELD(r4, s32 *, 0xB0) = 0;
    M2C_FIELD(r4, s32 *, 0xB4) = 0;
    M2C_FIELD(r4, s32 *, 0xB8) = 0;
    M2C_FIELD(r4, s32 *, 0xBC) = 0;
    q = (s32 *) ((s8 *) r4 + 0xC0);
    for (i = 0; i < 6; i++, q = (s32 *) ((s8 *) q + 0xC)) {
        M2C_FIELD(q, u16 *, 0) = 1;
        M2C_FIELD(q, u16 *, 2) = 0;
        for (j = 0; j < 2; j++) {
            q[j + 1] = 0;
        }
    }
    if (M2C_FIELD(r4, s32 *, 0x6C) != M2C_FIELD(r4, s32 *, 0x70)) {
        func_0207ddc4(M2C_FIELD(r4, s32 *, 0x70), 0x44464357);
    }
    func_0207ddc4(M2C_FIELD(r4, s32 *, 0x6C), 0x4446434D);
    return r4;
}
