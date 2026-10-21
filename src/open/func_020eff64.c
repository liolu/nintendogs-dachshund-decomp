#include "m2c.h"
extern s32 data_02159e70;
extern s32 func_01ffdb08(s16);
extern s32 func_020276f8(s32);
extern s32 func_020449ac(s32);
extern void *func_02006b68(void *);
extern s32 func_020e5304(void);
extern s32 func_020ebab8(s32, u16);
extern void func_020e83d0(s32, u16, s32, s32, s32, s32, u16, s32);
extern void func_020eb9fc(s32, s32, s32);
void func_020eff64(void) {
    s32 i;
    u16 key;
    s32 work;
    s32 res;
    s32 base;
    s32 id1;
    s32 id2;
    s32 id3;
    s32 id4;
    s32 id5;

    for (i = 0; i < 3; i++) {
        work = func_01ffdb08(i);
        if (work == 0) {
            continue;
        }
        work = func_020449ac(func_020276f8(work));
        key = i + 7;
        id1 = func_020ebab8(2, key);
        func_020e83d0(2, key, id1, M2C_FIELD(work, s32 *, 0x88), M2C_FIELD(work, s32 *, 0x8C), M2C_FIELD(work, s32 *, 0x90), 1, 1);
    }
    base = data_02159e70 + 0x1113C;
    res = (s32) func_02006b68((void *) M2C_FIELD(base, s32 *, 0xC));
    if (func_020e5304() != 0) {
        id1 = func_020ebab8(2, 0x10);
        id2 = func_020ebab8(2, 0x11);
        id3 = func_020ebab8(2, 0x12);
        id4 = func_020ebab8(2, 0x13);
        func_020e83d0(2, 0x10, id1, M2C_FIELD(base, s32 *, 4), M2C_FIELD(base, s32 *, 8), res, 0, 1);
        func_020e83d0(2, 0x11, id2, M2C_FIELD(base, s32 *, 4), M2C_FIELD(base, s32 *, 8), res, 1, 1);
        func_020e83d0(2, 0x12, id3, M2C_FIELD(base, s32 *, 4), M2C_FIELD(base, s32 *, 8), res, 2, 1);
        func_020e83d0(2, 0x13, id4, M2C_FIELD(base, s32 *, 4), M2C_FIELD(base, s32 *, 8), res, 3, 1);
        func_020eb9fc(2, 0x10, 1);
        func_020eb9fc(2, 0x11, 1);
        func_020eb9fc(2, 0x12, 1);
        func_020eb9fc(2, 0x13, 1);
    } else {
        id1 = func_020ebab8(2, 0x10);
        id5 = func_020ebab8(2, 0x15);
        func_020eb9fc(2, 0x10, 1);
        func_020eb9fc(2, 0x11, 0);
        func_020eb9fc(2, 0x12, 0);
        func_020eb9fc(2, 0x13, 0);
        func_020e83d0(2, 0x10, id1, M2C_FIELD(base, s32 *, 4), M2C_FIELD(base, s32 *, 8), res, 0, 1);
        for (i = 0; i < 10; i++) {
            func_020e83d0(2, i + 0x15, id5, M2C_FIELD(base, s32 *, 4), M2C_FIELD(base, s32 *, 8), res, i + 2, 0);
        }
        func_020e83d0(2, 0x2B, id5, M2C_FIELD(base, s32 *, 4), M2C_FIELD(base, s32 *, 8), res, 0xD, 0);
        func_020e83d0(2, 0x26, id5, M2C_FIELD(base, s32 *, 4), M2C_FIELD(base, s32 *, 8), res, 0xC, 0);
    }
}
