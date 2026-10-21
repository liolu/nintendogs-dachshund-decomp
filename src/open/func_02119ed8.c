#include "m2c.h"

extern void *data_0215a064;

void func_02119ed8(s32 arg0) {
    void *temp;

    switch (M2C_FIELD(data_0215a064, s16 *, 0x100)) {
        case 1:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 2;
            break;
        case 7:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 9;
            break;
        case 3:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 5;
            break;
        case 4:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 6;
            break;
        case 5:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 7;
            break;
        case 6:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 8;
            break;
        case 8:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 0xA;
            temp = M2C_FIELD(arg0, void **, 0x1C);
            if (temp != NULL) {
                M2C_FIELD(temp, s16 *, 8) = M2C_FIELD(data_0215a064, s16 *, 0x7C);
            }
            break;
        case 9:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 0xB;
            temp = M2C_FIELD(arg0, void **, 0x1C);
            if (temp != NULL) {
                M2C_FIELD(temp, s16 *, 8) = M2C_FIELD(data_0215a064, s16 *, 0x7C);
            }
            break;
        case 20:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 0x18;
            temp = M2C_FIELD(arg0, void **, 0x1C);
            if (temp != NULL) {
                M2C_FIELD(temp, s16 *, 8) = M2C_FIELD(data_0215a064, s16 *, 0x7C);
            }
            break;
        case 10:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 0xD;
            break;
        case 12:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 0xF;
            break;
        case 13:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 0x10;
            break;
        case 14:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 0x11;
            break;
        case 16:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 0x13;
            break;
        case 17:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 0x14;
            break;
        case 19:
            M2C_FIELD(arg0, s16 *, 4)    = 1;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x18) = 0x16;
            temp = M2C_FIELD(arg0, void **, 0x1C);
            if (temp != NULL) {
                M2C_FIELD(temp, s16 *, 4) = M2C_FIELD(data_0215a064, s16 *, 0x11A);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s16 *, 6) = M2C_FIELD(data_0215a064, s16 *, 0x11C);
            }
            break;
        case 2:
            M2C_FIELD(arg0, s16 *, 4)   = 1;
            M2C_FIELD(arg0, s32 *, 0xC) = 1;
            break;
        default:
            break;
    }
}
