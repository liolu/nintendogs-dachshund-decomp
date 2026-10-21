#include "m2c.h"
extern s32 *data_0214da84;
s32 func_02031854(s32 arg0, s32 arg1) {
    s32 temp;
    u16 r;

    switch (arg1) {
        case 0:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 8) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0x67; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x68; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA1; return 1;
                case 3: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA2; return 1;
                case 4: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA4; return 1;
                case 5: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA5; return 1;
                case 6: M2C_FIELD(arg0, s16 *, 0xEA) = 0x9C; return 1;
                case 7: M2C_FIELD(arg0, s16 *, 0xEA) = 0x9D; return 1;
                default: break;
            }
            break;
        case 1:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 3) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xAC; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xAD; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0xAE; return 1;
                default: break;
            }
            break;
        case 2:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xB2; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x6B; return 1;
                default: break;
            }
            break;
        case 3:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xB3; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x6C; return 1;
                default: break;
            }
            break;
        case 4:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 3) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xBA; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xBE; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0xBF; return 1;
                default: break;
            }
            break;
        case 5:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xC0; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x6F; return 1;
                default: break;
            }
            break;
        case 6:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xC1; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x70; return 1;
                default: break;
            }
            break;
        case 7:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 5) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xCA; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xCE; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0xD2; return 1;
                case 3: M2C_FIELD(arg0, s16 *, 0xEA) = 0xD4; return 1;
                case 4: M2C_FIELD(arg0, s16 *, 0xEA) = 0x9E; return 1;
                default: break;
            }
            break;
        case 8:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 5) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xCB; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xCF; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0xD3; return 1;
                case 3: M2C_FIELD(arg0, s16 *, 0xEA) = 0xD5; return 1;
                case 4: M2C_FIELD(arg0, s16 *, 0xEA) = 0x9F; return 1;
                default: break;
            }
            break;
        case 9:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xDC; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x9E; return 1;
                default: break;
            }
            break;
        case 10:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xDD; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x9F; return 1;
                default: break;
            }
            break;
        case 11:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xE0; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x9E; return 1;
                default: break;
            }
            break;
        case 12:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xE1; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x9F; return 1;
                default: break;
            }
            break;
        case 13:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xE4; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x7B; return 1;
                default: break;
            }
            break;
        case 14:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 2) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xE5; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0x7C; return 1;
                default: break;
            }
            break;
        default:
            break;
    }
    return 0;
}
