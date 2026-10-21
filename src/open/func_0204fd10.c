#include "m2c.h"
s32 func_0204fd10(void *arg0, void *arg1) {
    s32 sp0[4];

    func_02027644(arg1, sp0);
    func_0206823c(sp0, (u8 *) arg0 + 0x2A0, sp0);
    switch (func_02009c1c(sp0, (u8 *) arg0 + 0x1A4, (u8 *) arg0 + 0x18C)) {
        case 0:
        case 4:
            switch (func_0202daec(arg0)) {
                case 0:
                    func_0203e5e8(arg0, 0x2DA);
                    return 1;
                case 1:
                case 2:
                case 3:
                    func_0203e5e8(arg0, 0x2DC);
                    return 1;
                case 4:
                case 5:
                case 6:
                    func_0203e5e8(arg0, 0x2DE);
                    return 1;
                case 7:
                case 9:
                case 11:
                case 13:
                    func_0203e5e8(arg0, 0x2E0);
                    return 1;
                case 8:
                case 10:
                case 12:
                case 14:
                    func_0203e5e8(arg0, 0x2E2);
                    return 1;
            }
            break;
        case 1:
        case 6:
            switch (func_0202daec(arg0)) {
                case 0:
                    func_0203e5e8(arg0, 0x2D9);
                    return 1;
                case 1:
                case 2:
                case 3:
                    func_0203e5e8(arg0, 0x2DB);
                    return 1;
                case 4:
                case 5:
                case 6:
                    func_0203e5e8(arg0, 0x2DD);
                    return 1;
                case 7:
                case 9:
                case 11:
                case 13:
                    func_0203e5e8(arg0, 0x2DF);
                    return 1;
                case 8:
                case 10:
                case 12:
                case 14:
                    func_0203e5e8(arg0, 0x2E1);
                    return 1;
            }
            break;
    }
    func_0203e5e8(arg0, 0x2E5);
    return 1;
}
