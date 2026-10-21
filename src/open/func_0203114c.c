#include "m2c.h"
extern u32 *data_0214da84;
s32 func_0203114c(s32 arg0, s32 arg1) {
    s32 temp;
    u16 r;

    switch (arg1) {
        case 0:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 100) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA0; return 1;
                case 1: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA1; return 1;
                case 2: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA2; return 1;
                case 3: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA3; return 1;
                case 4: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA4; return 1;
                case 5: M2C_FIELD(arg0, s16 *, 0xEA) = 0xA5; return 1;
                case 6: M2C_FIELD(arg0, s16 *, 0xEA) = 0xAA; return 1;
                case 7: M2C_FIELD(arg0, s16 *, 0xEA) = 0xAB; return 1;
                default:
                    temp = (*data_0214da84 * 0x10DCD) + 1;
                    *data_0214da84 = temp;
                    r = (u16) (((u32) (u16) temp * 4) >> 16);
                    switch (r) {
                        case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0x95; return 1;
                        default: M2C_FIELD(arg0, s16 *, 0xEA) = 0x96; return 1;
                    }
            }
        case 1:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 4) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xAC; return 1;
                default: M2C_FIELD(arg0, s16 *, 0xEA) = 0x97; return 1;
            }
        case 2:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 4) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xB2; return 1;
                default: M2C_FIELD(arg0, s16 *, 0xEA) = 0x98; return 1;
            }
        case 3:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 4) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xB3; return 1;
                default: M2C_FIELD(arg0, s16 *, 0xEA) = 0x99; return 1;
            }
        case 4:
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 4) >> 16);
            switch (r) {
                case 0: M2C_FIELD(arg0, s16 *, 0xEA) = 0xBA; return 1;
                default: M2C_FIELD(arg0, s16 *, 0xEA) = 0x9A; return 1;
            }
        case 5:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0xC0;
            return 1;
        case 6:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0xC1;
            return 1;
        case 7:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0xCA;
            return 1;
        case 8:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0xCB;
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
