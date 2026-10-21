#include "m2c.h"

extern void *data_02155660;

M2C_UNK func_020bfff4();
void func_020c0448(s32, s32);
s32 func_020bfa64(void);
s32 func_020bfa74(M2C_UNK, M2C_UNK, u16 *);
s32 func_020bff2c(M2C_UNK, M2C_UNK, u16 *);
s32 func_020c081c(void);
void func_020be920(void);
void func_020be518(M2C_UNK);
void func_020bd9bc(M2C_UNK);

void func_020bdc54(void) {
    u16 sp[4];
    u16 t;
    u16 n;
    s32 r;

    if (func_020bfff4() == 0) {
        return;
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
        if (func_020bff2c((s32) func_020bd9bc, (M2C_FIELD(data_02155660, s32 *, 0x54) == 1) ? (s32) ((s8 *) data_02155660 + 0x58) : 0, &sp[1]) == 0) {
            return;
        }
        M2C_FIELD(data_02155660, u16 *, 0x3C) = M2C_FIELD(func_020c081c(), u16 *, 0x36);
        return;
    }
}
