#include "m2c.h"
extern s32 *data_0214da84;
s32 func_020306f0(s32 arg0, s32 arg1) {
    s32 temp;
    u16 r;

    switch (arg1) {
        case 0:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 12) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA1; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA2; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA4; return 1;
                case 3: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA5; return 1;
                case 4: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA6; return 1;
                case 5: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA7; return 1;
                case 6: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA8; return 1;
                case 7: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA9; return 1;
                case 8:
                case 9: M2C_FIELD(arg0, s16 *, 0xEA) = 0x5E; return 1;
                case 10:
                case 11: M2C_FIELD(arg0, s16 *, 0xEA) = 0x5F; return 1;
                default: break;
            }
            break;
        case 1:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xB0; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xB1; return 1;
                default: break;
            }
            break;
        case 2:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 3) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xB6; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x83; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0x85; return 1;
                default: break;
            }
            break;
        case 3:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 3) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xB7; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x84; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0x86; return 1;
                default: break;
            }
            break;
        case 4:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xBE; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xBF; return 1;
                default: break;
            }
            break;
        case 5:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 3) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xC6; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xC8; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0x8B; return 1;
                default: break;
            }
            break;
        case 6:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 3) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xC7; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xC9; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0x8C; return 1;
                default: break;
            }
            break;
        case 7:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xD2; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xD6; return 1;
                default: break;
            }
            break;
        case 8:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xD3; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xD7; return 1;
                default: break;
            }
            break;
        case 9:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xDC; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xDE; return 1;
                default: break;
            }
            break;
        case 10:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xDD; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xDF; return 1;
                default: break;
            }
            break;
        case 11:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xE0; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xE2; return 1;
                default: break;
            }
            break;
        case 12:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xE1; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xE3; return 1;
                default: break;
            }
            break;
        case 13:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0xE6;
            return 1;
        case 14:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0xE7;
            return 1;
        default:
            break;
    }
    return 0;
}
