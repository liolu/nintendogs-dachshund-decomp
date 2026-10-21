#include "engine.h"
#include "m2c.h"
extern u16 *data_0215a04c;
extern s32 *data_0214da84;
s32 func_0202dbc4(void *arg0) {
    s32 flag;
    s32 result;
    s32 temp_r1;
    u16 temp_r2;

    temp_r2 = *data_0215a04c;
    flag = 0;
    if (temp_r2 == 0x11) {
        flag = (M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), u8 *, 0x72) == 4);
    }
    if (flag != 0) {
        return 1;
    }
    if (temp_r2 == 0xa) {
        switch (M2C_FIELD(arg0, s8 *, 0x8B)) {
            case 0:
            case 1:
            case 3:
                switch (M2C_FIELD(arg0, s8 *, 0x8E)) {
                    case 2:
                        result = 1;
                        goto normalize;
                    case 4:
                        temp_r1 = (*data_0214da84 * 0x10DCD) + 1;
                        *data_0214da84 = temp_r1;
                        result = (u16) (((u16) temp_r1 * 100U) >> 0x10) < 0x5A;
                        goto normalize;
                    case 3:
                        temp_r1 = (*data_0214da84 * 0x10DCD) + 1;
                        *data_0214da84 = temp_r1;
                        result = (u16) (((u16) temp_r1 * 100U) >> 0x10) < 0x50;
                        goto normalize;
                    case 0:
                        temp_r1 = (*data_0214da84 * 0x10DCD) + 1;
                        *data_0214da84 = temp_r1;
                        result = (u16) (((u16) temp_r1 * 100U) >> 0x10) < 0x46;
                        goto normalize;
                    case 1:
                        temp_r1 = (*data_0214da84 * 0x10DCD) + 1;
                        *data_0214da84 = temp_r1;
                        result = (u16) (((u16) temp_r1 * 100U) >> 0x10) < 0x3C;
                        goto normalize;
                }
                break;
            case 4:
            case 5:
                result = 1;
                goto normalize;
            case 2:
                result = 0;
                goto normalize;
        }
        result = 0;
normalize:
        result = (result != 0);
        if (result == 0) {
            return result;
        }
        temp_r1 = (*data_0214da84 * 0x10DCD) + 1;
        *data_0214da84 = temp_r1;
        return (u16) (((u16) temp_r1 * 100U) >> 0x10) < 0x46;
    }
    switch (M2C_FIELD(arg0, s8 *, 0x8B)) {
        case 0:
        case 1:
        case 3:
            switch (M2C_FIELD(arg0, s8 *, 0x8E)) {
                case 2:
                    return 1;
                case 4:
                    temp_r1 = (*data_0214da84 * 0x10DCD) + 1;
                    *data_0214da84 = temp_r1;
                    return (u16) (((u16) temp_r1 * 100U) >> 0x10) < 0x5A;
                case 3:
                    temp_r1 = (*data_0214da84 * 0x10DCD) + 1;
                    *data_0214da84 = temp_r1;
                    return (u16) (((u16) temp_r1 * 100U) >> 0x10) < 0x50;
                case 0:
                    temp_r1 = (*data_0214da84 * 0x10DCD) + 1;
                    *data_0214da84 = temp_r1;
                    return (u16) (((u16) temp_r1 * 100U) >> 0x10) < 0x46;
                case 1:
                    temp_r1 = (*data_0214da84 * 0x10DCD) + 1;
                    *data_0214da84 = temp_r1;
                    return (u16) (((u16) temp_r1 * 100U) >> 0x10) < 0x3C;
            }
            break;
        case 4:
        case 5:
            return 1;
        case 2:
            return 0;
    }
    return 0;
}
