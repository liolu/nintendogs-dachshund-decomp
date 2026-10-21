#include "m2c.h"
extern s32 *data_0214da84;
s32 func_02030d5c(s32 arg0, s32 arg1) {
    s32 temp;
    u16 r;

    switch (arg1) {
        case 0:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 5) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA1; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA2; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA3; return 1;
                case 3: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA4; return 1;
                case 4: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA5; return 1;
                default: break;
            }
            break;
        case 1:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xAD; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xAE; return 1;
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
            }
        case 3:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 3) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xB7; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x84; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0x86; return 1;
            }
        case 4:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xBC; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xBD; return 1;
                default: break;
            }
            break;
        case 5:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xC4; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x8B; return 1;
            }
        case 6:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xC5; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x8C; return 1;
            }
        case 7:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0xD2;
            return 1;
        case 8:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0xD3;
            return 1;
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
