#include "m2c.h"
extern u8 data_02154350[];
extern u8 data_02154354[];
extern u8 data_0215433c[];
extern u8 data_0215422c[];
void func_02070e7c(void *p, s32 a, s32 b);
void func_02070f18(s32 a, s32 b, s32 c);
s32 func_02089248(void);
void func_02073034(s32 a, s32 b);
s32 func_0208927c(s32 a);
s32 func_02089348(s32 a);
void func_020733c0(void *p, s32 a);
s32 func_0205df50(s32 a, s32 b);
s32 func_0208d438(s32 arg0, s32 arg1) {
    u8 *q = data_02154350;
    u8 *p = data_0215433c;
    s32 h;

    if (arg0 == 0x1D) {
        goto common;
    }
    if (arg0 == 0x1E) {
        goto common;
    }
    if (arg0 == 0x1F) {
        if (M2C_FIELD(p, s32 *, 0x10) == 0) {
            return 0;
        }
        func_02070f18(0x13, 0x40, 0);
        M2C_FIELD(p, s32 *, 0x10) = 0;
common:
        h = M2C_FIELD(data_0215422c, s32 *, 4);
        if (M2C_FIELD(data_0215422c, u16 *, 0x18) != 0x18) {
            func_02089248();
        }
        func_02073034(arg0, h);
    } else {
        h = M2C_FIELD(data_0215422c, s32 *, 0);
        func_0208927c(3);
        func_02073034(arg0, h);
        func_02089348(4);
    }
    func_020733c0(p, arg0);
    func_02070e7c(p, arg1, 0);
    M2C_FIELD(p, s32 *, 0xC) = 1;
    if (M2C_FIELD(q, s32 *, 0) != 0) {
        func_02070e7c(q, func_0205df50(M2C_FIELD(q, s16 *, 0xC), M2C_FIELD(p, s32 *, 4)), 0);
    }
    return 1;
}
