#include "m2c.h"
extern void *data_02155660;
M2C_UNK func_020bfe18(void);
void func_020c0448(s32, s32);
s32 func_020bfa64(void);
s32 func_020bfa74(M2C_UNK, M2C_UNK, u16 *);
s32 func_020bfba4(s32);
void func_020bf9a8(s32);
M2C_UNK func_020c0828(void);
s32 func_020bfb34(void);
s32 func_020c0088(s32, s32);
void func_020be920(void);
void func_020be518(M2C_UNK);
void func_020bde30(M2C_UNK);
void func_020be6c4(M2C_UNK arg) {
    u16 sp[4];
    u16 t;
    u16 n;
    s32 r;

    if (func_020bfe18() == 0) {
        return;
    }
    if (M2C_FIELD(data_02155660, void (**)(M2C_UNK), 0x18) != 0) {
        M2C_FIELD(data_02155660, void (**)(M2C_UNK), 0x18)(arg);
    }
    switch (M2C_FIELD(data_02155660, s32 *, 0x24)) {
    case 1:
        func_020c0448((s32) func_020be920, (s32) &sp[0]);
        return;
    case 2:
        M2C_FIELD(data_02155660, u16 *, 0x3C) = 0;
        M2C_FIELD(data_02155660, u16 *, 0x3E) = 0x65;
        n = 1;
        r = func_020bfa64();
        if (r == 0x8000) {
            t = 3;
        } else if (r == 0) {
            t = 0x15;
        } else {
            while (((1 << (n - 1)) & r) == 0) {
                n = (u16) (n + 1);
                if (n > 0x10) {
                    t = 0x16;
                    goto check;
                }
            }
            func_020bfa74((s32) func_020be518, n, &sp[2]);
            t = sp[2];
        }
    check:
        if (t == 0x16) {
            if (M2C_FIELD(data_02155660, s32 *, 0x2C) == 1) {
                return;
            }
            M2C_FIELD(data_02155660, s32 *, 0x2C) = 1;
            M2C_FIELD(data_02155660, u16 *, 0x28) = t;
            M2C_FIELD(data_02155660, u16 *, 0x2A) = 0x1E;
            return;
        }
        if (t == 2) {
            return;
        }
        if (M2C_FIELD(data_02155660, s32 *, 0x2C) == 1) {
            return;
        }
        M2C_FIELD(data_02155660, s32 *, 0x2C) = 1;
        M2C_FIELD(data_02155660, u16 *, 0x28) = t;
        M2C_FIELD(data_02155660, u16 *, 0x2A) = 0x1E;
        return;
    case 3:
        M2C_FIELD(data_02155660, u16 *, 0x3C) = func_020bfba4(M2C_FIELD(data_02155660, u16 *, 0x3C));
        func_020bf9a8(M2C_FIELD(data_02155660, u16 *, 0x3C));
        if (M2C_FIELD(data_02155660, s32 *, 0x40) == 1) {
            M2C_FIELD(func_020c0828(), u16 *, 0x6) = func_020bfb34();
        }
        if (func_020c0088((s32) func_020bde30, (s32) &sp[1]) != 0) {
            return;
        }
        t = sp[1];
        if (M2C_FIELD(data_02155660, s32 *, 0x2C) == 1) {
            return;
        }
        M2C_FIELD(data_02155660, s32 *, 0x2C) = 1;
        M2C_FIELD(data_02155660, u16 *, 0x28) = t;
        M2C_FIELD(data_02155660, u16 *, 0x2A) = 0xA;
        return;
    }
}
