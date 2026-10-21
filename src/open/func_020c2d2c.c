#include "m2c.h"

extern s8 *data_0215a048;
extern s32 data_02140bf8;
extern s32 data_02140bd4;
void func_020c2ea8();
s32 func_020a7e24();
s32 func_020a7e14();
void func_020b50d0();
void func_020b4840();
void func_020b4eac();
void func_020b4c88();
void func_020b4a64();
M2C_UNK func_020ba16c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020b2d2c();
void func_020ba364();

void func_020c2d2c(s32 arg0, s32 arg1) {
    s32 tmp[3];
    u8 out[0x28];
    s32 x;
    s32 y;

    switch (M2C_FIELD(arg0, s32 *, 0)) {
    case 0:
        func_020c2ea8(arg0);
        break;
    case 1:
        x = func_020a7e24();
        y = func_020a7e14();
        tmp[0] = 0;
        tmp[2] = x;
        tmp[1] = y;
        switch (M2C_FIELD(arg0, s32 *, 0x44)) {
        case 0:
            func_020b50d0((M2C_UNK) out, (M2C_UNK) tmp, M2C_FIELD(arg0, s16 *, 0x42));
            break;
        case 1:
            func_020b4840((M2C_UNK) out, (M2C_UNK) tmp, M2C_FIELD(arg0, s16 *, 0x42));
            break;
        case 2:
            func_020b4eac((M2C_UNK) out, (M2C_UNK) tmp, M2C_FIELD(arg0, s16 *, 0x42));
            break;
        case 3:
            func_020b4c88((M2C_UNK) out, (M2C_UNK) tmp, M2C_FIELD(arg0, s16 *, 0x42));
            break;
        case 4:
            func_020b4a64((M2C_UNK) out, (M2C_UNK) tmp, M2C_FIELD(arg0, s16 *, 0x42));
            break;
        }
        func_020ba16c(arg0 + 4, arg0 + 4, (M2C_UNK) out, 0x200, 0x200, 0x100);
        break;
    case 2: {
        s32 lim;
        s32 step;

        if (M2C_FIELD(data_0215a048, u16 *, 6) != 0x12) {
            lim = data_02140bf8;
            step = 0x19A;
        } else {
            lim = data_02140bd4;
            step = 0xCD;
        }
        if (M2C_FIELD(arg0, s32 *, 0x34) < lim) {
            M2C_FIELD(arg0, s32 *, 0x34) += step;
        }
        func_020b2d2c(arg0 + 4, M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, s32 *, 0x3C));
        M2C_FIELD(arg0, s32 *, 0x18) += 0x14000;
        break;
    }
    }
    func_020ba364(arg0 + 4, arg1);
}
