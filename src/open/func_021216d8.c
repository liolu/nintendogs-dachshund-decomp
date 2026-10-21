#include "m2c.h"

extern void *data_021555f8;
extern u16 *data_0215a04c;
extern void *data_02159e64;
extern void *data_0215a080;

s32 func_020429a4(void);
void func_020d2c64(s32, s32, s32, s32, s32);
s32 func_0212237c(void);
s32 func_ov004_0215a8a0(void);
void func_ov004_0215a788(void);
s32 func_020c260c(s32);
void func_020c2648(s32);
void func_02118da0(s32);
void func_0208d438(s32, s32);
void func_02116dec(s32, s32);
void func_02116d20(s32, s32);
void func_020ee2cc(void);
void func_0204262c(void);
void func_020cf19c(s32, s32);
s32 func_020a5fcc(void);
void func_020b95a0(s32, s32);

void func_021216d8(s32 arg0) {
    s32 idx;
    s32 r4;
    u16 b;
    u16 a;

    idx = M2C_FIELD(arg0, s16 *, 0x7A);
    if (idx < 0) {
        goto zero;
    }
    if (M2C_FIELD(data_021555f8, s16 *, 0x20) > idx) {
        goto load;
    }
zero:
    r4 = 0;
    goto index_done;
load:
    r4 = M2C_FIELD(data_021555f8 + idx * 4, s32 *, 4);
index_done:

    switch (M2C_FIELD(arg0, s16 *, 0x102)) {
    case 0:
        if (func_020429a4() == 0) {
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x102) = 1;
        if (*data_0215a04c != 0xB) {
            func_020d2c64(2, 0xCE5, 0, (s32) func_0212237c, 0);
        } else {
            func_020d2c64(2, 0xCFA, 0, (s32) func_0212237c, 0);
        }
        return;
    case 1:
        if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
            return;
        }
        switch (*data_0215a04c) {
        case 0x9:
            {
                u8 *q = (u8 *) func_ov004_0215a8a0();
                u8 hi = q[1];
                u8 lo = q[0];
                M2C_FIELD(arg0, u16 *, 0x104) = lo;
                M2C_FIELD(arg0, u16 *, 0x106) = hi;
            }
            func_ov004_0215a788();
            break;
        case 0xB:
            a = *(volatile u16 *) ((u8 *) data_0215a080 + 0x260C);
            b = *(volatile u16 *) ((u8 *) data_0215a080 + 0x260E);
            M2C_FIELD(arg0, u16 *, 0x104) = a;
            M2C_FIELD(arg0, u16 *, 0x106) = b;
            break;
        default:
            {
                u8 *q = (u8 *) func_020c260c(r4);
                u8 hi = q[1];
                u8 lo = q[0];
                M2C_FIELD(arg0, u16 *, 0x104) = lo;
                M2C_FIELD(arg0, u16 *, 0x106) = hi;
            }
            break;
        }
        M2C_FIELD(arg0, s16 *, 0x102) = 2;
        func_020d2c64(2, 0xCE7, 0, (s32) func_0212237c, 0);
        func_020c2648(r4);
        func_02118da0(arg0);
        func_0208d438(0x1D, 0x7F);
        return;
    case 2:
        if (M2C_FIELD(data_02159e64, s32 *, 0xA4) != 0) {
            M2C_FIELD(arg0, s16 *, 0x102) = 3;
        }
        return;
    case 3:
        if (*data_0215a04c != 9) {
            func_02116dec(arg0, 2);
            func_020ee2cc();
        } else {
            func_02116dec(arg0, 0x2A);
        }
        func_02116d20(arg0, 0);
        func_0204262c();
        if (*data_0215a04c != 0xB) {
            func_020cf19c(arg0 + 0x104, 1);
        }
        M2C_FIELD(arg0, s16 *, 0x104) = -1;
        M2C_FIELD(arg0, s16 *, 0x106) = -1;
        if (*data_0215a04c != 9) {
            func_020b95a0((s32) (func_020a5fcc() + 0x88), 1);
        }
        return;
    }
}
