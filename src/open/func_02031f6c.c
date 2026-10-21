#include "m2c.h"
extern s32 *data_0214da84;
s32 func_02031f6c(s32 arg0, s32 arg1) {
    s32 temp;
    u16 r;

    switch (arg1) {
        case 0:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 50) >> 16);
            switch (r) {
                case 0:
                case 1:
                case 2:
                case 3: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA0; return 1;
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA1; return 1;
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA2; return 1;
                case 16:
                case 17:
                    if (M2C_FIELD(arg0, s8 *, 0x8B) == 1) {
                        M2C_FIELD(arg0, s16 *, 0xEA) = 0x5C;
                    } else {
                        M2C_FIELD(arg0, s16 *, 0xEA) = 0;
                    }
                    return 1;
                case 18:
                case 19: M2C_FIELD(arg0, s16 *, 0xEA) = 0x95; return 1;
                case 20:
                case 21: M2C_FIELD(arg0, s16 *, 0xEA) = 0x5E; return 1;
                case 22:
                case 23: M2C_FIELD(arg0, s16 *, 0xEA) = 0x5F; return 1;
                case 24:
                case 25: M2C_FIELD(arg0, s16 *, 0xEA) = 0x60; return 1;
                case 26: M2C_FIELD(arg0, s16 *, 0xEA) = 0xAA; return 1;
                case 27: M2C_FIELD(arg0, s16 *, 0xEA) = 0xAB; return 1;
                default: M2C_FIELD(arg0, s16 *, 0xEA) = 0x257; return 1;
            }
        case 1:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0xAC;
            return 1;
        case 2:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 10) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0x6B; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x83; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0x85; return 1;
                default: M2C_FIELD(arg0, s16 *, 0xEA) = 0xB2; return 1;
            }
        case 3:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 10) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0x6C; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x84; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0x86; return 1;
                default: M2C_FIELD(arg0, s16 *, 0xEA) = 0xB3; return 1;
            }
        case 4:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xBA; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xBB; return 1;
                default: break;
            }
            break;
        case 5:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xC0; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xC2; return 1;
                default: break;
            }
            break;
        case 6:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xC1; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xC3; return 1;
                default: break;
            }
            break;
        case 7:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 3) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xCA; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xCC; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0xCE; return 1;
                default: break;
            }
            break;
        case 8:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 3) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xCB; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xCD; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0xCF; return 1;
                default: break;
            }
            break;
        case 9:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0xDC;
            return 1;
        case 10:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0xDD;
            return 1;
        case 11:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0xE0;
            return 1;
        case 12:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0xE1;
            return 1;
        case 13:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 4) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xE4; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x73; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0x7F; return 1;
                case 3: M2C_FIELD(arg0, s16 *, 0xEA) = 0x81; return 1;
                default: break;
            }
            break;
        case 14:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 4) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xE5; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x74; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0x80; return 1;
                case 3: M2C_FIELD(arg0, s16 *, 0xEA) = 0x82; return 1;
                default: break;
            }
            break;
        default:
            break;
    }
    return 0;
}
