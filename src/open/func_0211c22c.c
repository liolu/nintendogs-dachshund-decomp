#include "m2c.h"
extern void *data_02159e70;
extern void *data_02159e64;
void func_02116da0(s32);
s32 func_02114aec(s32);
void func_020e1798(void);
void func_02116dec(s32, s32);
void func_02116d20(s32, s32);
void func_020e2810(void);
s32 func_020cf504(void);
void func_020d2c64(s32, s32, s32, s32, s32);
s32 func_02116cb4(s32);
void func_02116f14(s32);
void func_0211c22c(s32 arg0) {
    u8 *e;
    u8 *g;

    switch (*(s16 *) (arg0 + 0x2E)) {
    case 0:
        func_02116da0(arg0);
        break;
    case 1:
        if (func_02114aec(arg0) != 0) {
            break;
        }
        if (*(s16 *) (arg0 + 0x2A) == 1) {
            e = data_02159e64;
            if (M2C_FIELD(e, s32 *, 0xA4) != 0) {
                *(u16 *) (arg0 + (u32) 0x2A) = 0;
                func_020e1798();
            }
            break;
        }
        g = data_02159e70;
        if (M2C_FIELD(g, s32 *, 0x48BC) == 1) {
            func_02116dec(arg0, 4);
            func_02116d20(arg0, 0);
            func_020e2810();
            break;
        }
        switch (M2C_FIELD(g, s32 *, 0x1D70)) {
        case 1:
            *(u16 *) (arg0 + 0x2E) = 2;
            *(u16 *) ((int) arg0 + 0x30) = 0;
            *(u16 *) (arg0 + 0x100) = 4;
            break;
        case 0:
            if (func_020cf504() != 0) {
                *(u16 *) (arg0 + 0x2E) = 2;
                *(u16 *) (arg0 + 0x30) = 0;
                *(u16 *) (arg0 + 0x100) = 3;
                break;
            }
            *(u16 *) (arg0 + 0x2A) = 1;
            func_020d2c64(0, 0x452, 0, 0, 0);
            break;
        case 2:
            *(u16 *) (arg0 + 0x2E) = 2;
            *(u16 *) (arg0 + 0x30) = 0;
            *(u16 *) (arg0 + 0x100) = 5;
            break;
        }
        break;
    case 2:
    case 3:
        break;
    case 4:
        if (func_02116cb4(arg0) == 0) {
            break;
        }
        func_02116f14(arg0);
        break;
    }
}
