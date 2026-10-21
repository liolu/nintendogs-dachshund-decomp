#include "m2c.h"
extern void *data_0215a07c;
extern void *data_02159e64;
void func_02120028(void);
void func_02003de8(s32);
void func_0200412c(void);
s32 func_02088fa4(void);
s32 func_02003a00(void);
void func_020ce0a8(s32);
void func_020d19f0(s32);
void func_020d0928(s32);
s32 func_020d08b8(void);
void func_020d2c64(s32, s32, s32, s32, s32);
void func_0208ff28(s32, s32);
void func_02003cf0(s32);
void func_02003c90(s32);
void func_02003aa0(void *, void *);
void func_020d08ac(void);
void func_020d2c10(void);
void func_020c7740(void);
void func_020cbd60(void);
void func_020075a4(void);
void func_02004270(void);
void func_02006894(void);
void func_0200276c(void);
void func_0211fe98(void);
void func_0211fe8c(void);
void func_02003fa4(void);
void func_0207cb18(void);
void func_02003eec(void);
s32 func_0211fc88(void) {
    s32 *state;
    s32 v8;

    func_02120028();
    func_02003de8(0x1E);
    do {
        func_0200412c();
        state = (s32 *) data_0215a07c;
        switch (M2C_FIELD(state, s16 *, 0x0)) {
        case 0:
            v8 = func_02088fa4();
            if (func_02003a00() == 0) {
                break;
            }
            if (M2C_FIELD(data_02159e64, s16 *, 0x6C) != 2) {
                break;
            }
            M2C_FIELD(state, s16 *, 0x0) = 2;
            M2C_FIELD(state, s16 *, 0x2) = 0;
            if (v8 != 0) {
                func_020ce0a8(v8);
            }
            func_020d19f0(0);
            func_020d0928(1);
            break;
        case 2:
            M2C_FIELD(state, s16 *, 0x2) += 1;
            if (func_020d08b8() != 0) {
                M2C_FIELD(state, s16 *, 0x0) = 3;
                M2C_FIELD(state, s16 *, 0x2) = 0;
            }
            break;
        case 3:
            M2C_FIELD(state, s16 *, 0x2) = M2C_FIELD(state, s16 *, 0x2) + 1;
            M2C_FIELD(state, s16 *, 0x0) = 4;
            M2C_FIELD(state, s16 *, 0x2) = 0;
            func_020d2c64(0, 0x4C5, 0, 0, 0);
            func_0208ff28(0x43, 0x1E);
            break;
        case 4:
            if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
                break;
            }
            if (M2C_FIELD(data_02159e64, s16 *, 0x9A) != 0) {
                if (M2C_FIELD(data_02159e64, s16 *, 0x9A) == 1) {
                    M2C_FIELD(state, s32 *, 0x4) = 0;
                }
            } else {
                M2C_FIELD(state, s32 *, 0x4) = 1;
            }
            M2C_FIELD(state, s16 *, 0x0) = 5;
            M2C_FIELD(state, s16 *, 0x2) = 0;
            M2C_FIELD(state, s32 *, 0x8) = 1;
            break;
        }
        func_02003fa4();
        func_0207cb18();
        func_02003eec();
    } while (M2C_FIELD(data_0215a07c, s32 *, 0x8) == 0);
    if (M2C_FIELD(data_0215a07c, s32 *, 0x4) != 0) {
        func_02003cf0(0x3C);
    } else {
        func_02003c90(0x3C);
    }
    func_02003aa0(func_0211fe98, func_0211fe8c);
    func_020d08ac();
    func_020d2c10();
    func_020c7740();
    func_020cbd60();
    func_020075a4();
    func_02004270();
    func_02006894();
    if (M2C_FIELD(data_0215a07c, s32 *, 0x4) != 0) {
        func_0200276c();
    }
    data_0215a07c = 0;
    return 0;
}
