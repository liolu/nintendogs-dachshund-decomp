#include "m2c.h"

extern char data_0214da84[];

s32 func_02035264(void *, s32);
void func_0203e5ac(void *, s32, s32);

void func_02010464(void *arg0, s32 arg1) {
    s32 v;
    s32 mode;
    s32 msg;
    u32 *temp_r3;
    u32 temp_r2;
    u16 temp_r0_5;

    v = M2C_FIELD(arg0, s16 *, 0x154);
    switch (v) {
    case 1:
    case 5:
    case 6:
    case 7:
    case 0x44:
    case 0x45:
    case 0x46:
        if (func_02035264(arg0, 1) == 0) {
            return;
        }
        func_0203e5ac(arg0, 1, 0);
        return;
    }
    mode = M2C_FIELD(arg0, s32 *, 0x464);
    msg = 0;
    switch (mode) {
    case 0:
        temp_r3 = *(u32 **) data_0214da84;
        temp_r2 = *temp_r3 * 0x10DCD + 1;
        temp_r0_5 = (u16) ((u16) temp_r2 * 10u >> 16);
        *temp_r3 = temp_r2;
        switch (temp_r0_5) {
        case 0:
        case 1:
        case 2:
            if (arg1 != 0xD) {
                if (arg1 != 0xE) {
                    msg = 9;
                } else {
                    msg = 0x48;
                }
            } else {
                msg = 0x47;
            }
            break;
        case 3:
            switch (arg1) {
            default:
                msg = 4;
                break;
            case 1:
            case 2:
            case 3:
                msg = 0x44;
                break;
            case 7:
            case 9:
            case 0xB:
                msg = 0x45;
                break;
            case 0xD:
                msg = 0x47;
                break;
            case 8:
            case 0xA:
            case 0xC:
                msg = 0x46;
                break;
            case 0xE:
                msg = 0x48;
                break;
            }
            break;
        case 4:
            switch (arg1) {
            default:
                msg = 3;
                break;
            case 1:
            case 2:
            case 3:
                msg = 0x44;
                break;
            case 7:
            case 9:
            case 0xB:
                msg = 0x45;
                break;
            case 0xD:
                msg = 0x47;
                break;
            case 8:
            case 0xA:
            case 0xC:
                msg = 0x46;
                break;
            case 0xE:
                msg = 0x48;
                break;
            }
            break;
        case 5:
            switch (arg1) {
            default:
                msg = 5;
                break;
            case 1:
            case 2:
            case 3:
                msg = 0x44;
                break;
            case 7:
            case 9:
            case 0xB:
                msg = 0x45;
                break;
            case 0xD:
                msg = 0x47;
                break;
            case 8:
            case 0xA:
            case 0xC:
                msg = 0x46;
                break;
            case 0xE:
                msg = 0x48;
                break;
            }
            break;
        }
        break;
    case 1:
        temp_r3 = *(u32 **) data_0214da84;
        temp_r2 = *temp_r3 * 0x10DCD + 1;
        temp_r0_5 = (u16) ((u16) temp_r2 * 100u >> 16);
        *temp_r3 = temp_r2;
        switch (temp_r0_5) {
        case 0:
        case 1:
        case 2:
        case 3:
            switch (arg1) {
            default:
                msg = 6;
                break;
            case 1:
            case 2:
            case 3:
                msg = 0x44;
                break;
            case 7:
            case 9:
            case 0xB:
                msg = 0x45;
                break;
            case 0xD:
                msg = 0x47;
                break;
            case 8:
            case 0xA:
            case 0xC:
                msg = 0x46;
                break;
            case 0xE:
                msg = 0x48;
                break;
            }
            break;
        }
        break;
    }
    func_0203e5ac(arg0, 1, msg);
}
