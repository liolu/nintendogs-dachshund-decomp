#include "m2c.h"
extern void *data_02155660;
void func_020bfa14(s32, s32);
s32 func_020bfa64(void);
s32 func_020bfa74(M2C_UNK, M2C_UNK, u16 *);
s32 func_020bfc20(M2C_UNK, u16 *);
s32 func_020c0834(void);
u16 func_020bfb6c(void);
void func_020be4cc(void);
void func_020be518(s32 arg0) {
    u16 a;
    u16 b;
    u16 n;
    u16 t;
    u16 v;
    u16 w;
    s32 r;
    s32 o;

    a = M2C_FIELD(arg0, u16 *, 2);
    if (a != 0) {
        b = M2C_FIELD(arg0, u16 *, 0);
        if (M2C_FIELD(data_02155660, s32 *, 0x2C) == 1) {
            return;
        }
        M2C_FIELD(data_02155660, s32 *, 0x2C) = 1;
        M2C_FIELD(data_02155660, u16 *, 0x28) = a;
        M2C_FIELD(data_02155660, u16 *, 0x2A) = b;
        return;
    }
    a = M2C_FIELD(arg0, u16 *, 0xA);
    b = M2C_FIELD(arg0, u16 *, 8);
    if (M2C_FIELD(data_02155660, u16 *, 0x3E) > a) {
        M2C_FIELD(data_02155660, u16 *, 0x3E) = a;
        M2C_FIELD(data_02155660, u16 *, 0x3C) = b;
    }
    n = (u16) (b + 1);
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
        func_020bfa74((s32) func_020be518, n, &v);
        t = v;
    }
check:
    if (t == 0x16) {
        func_020bfa14(M2C_FIELD(data_02155660, u16 *, 0x3C), M2C_FIELD(data_02155660, s32 *, 0));
        if (M2C_FIELD(data_02155660, s32 *, 0x40) == 1) {
            o = func_020c0834();
            M2C_FIELD(o, s16 *, 0x18) = func_020bfb6c();
        }
        func_020bfc20((s32) func_020be4cc, &w);
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
}
