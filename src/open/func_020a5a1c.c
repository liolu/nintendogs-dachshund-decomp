#include "m2c.h"
extern u8 *data_021555f4;
extern void func_020b95d0(void *, s32, s32, s32);
extern void func_020a7c84(void);
extern void func_020b95c4(void *);
extern void func_020c36b8(void *, s32);
void func_020a5a1c(s32 arg0, s32 arg1) {
    s32 a2;
    s32 code;
    s32 r;

    a2 = arg1;
    if (M2C_FIELD(data_021555f4, s32 *, 0x7C) == 0 || M2C_FIELD(data_021555f4, s32 *, 0x7C) == 3 ||
        M2C_FIELD(data_021555f4, s32 *, 0x7C) == 4) {
        switch (arg0) {
        case 0:
            code = 0x11;
            a2 = -1;
            break;
        case 1:
            code = 2;
            a2 = -1;
            break;
        case 2:
            code = 4;
            break;
        case 3:
            code = 5;
            break;
        case 4:
            code = 1;
            break;
        case 5:
            code = 6;
            break;
        case 6:
            code = 7;
            break;
        case 7:
            code = 8;
            break;
        case 8:
            code = 9;
            break;
        case 9:
            code = 0xA;
            break;
        case 10:
            code = 0xB;
            break;
        case 11:
            code = 0xC;
            break;
        case 12:
            code = 0xD;
            break;
        case 13:
            code = 0xE;
            break;
        case 14:
            code = 0xF;
            break;
        case 15:
            code = 0x13;
            break;
        }
        func_020b95d0((s8 *) data_021555f4 + 0x88, code, a2, 0);
        if (code == 0x13) {
            if (M2C_FIELD(data_021555f4, s32 *, 0xBC) != 0x14) {
                func_020a7c84();
                func_020b95c4((s8 *) data_021555f4 + 0x88);
            }
        }
        return;
    }
    if (M2C_FIELD(data_021555f4, s32 *, 0x7C) == 0xE) {
        switch (arg0) {
        case 2:
        case 3:
            r = 0;
            break;
        case 6:
            r = 2;
            break;
        case 8:
            r = 3;
            break;
        case 10:
            r = 4;
            break;
        case 12:
            r = 1;
            break;
        default:
            r = 0;
            break;
        }
        func_020c36b8((s8 *) data_021555f4 + 0x27C, r);
    }
}
