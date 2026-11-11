#include "m2c.h"
extern u32 *data_0215a064;
void func_02116da0(s32 arg0);
s32 func_020e1544(void);
s32 func_020e14c4(void);
void func_02116dec(s32 arg0, s32 arg1);
void func_02116d20(s32 arg0, s32 arg1);
void func_020e1508(void);
void func_0208df28(s32 arg0);
s32 func_020e14e8(void);
void func_02116f14(s32 arg0);
void func_0211abb0(s32 arg0) {
    switch (*(s16 *) (arg0 + 0x2E)) {
        case 0:
            func_02116da0(arg0);
            break;
        case 1:
            if (func_020e1544() == 0) {
                return;
            }
            switch (func_020e14c4()) {
                case 1:
                    break;
                case 2:
                    return;
                case 3:
                    return;
                default:
                    return;
            }
            data_0215a064[8] |= 2;
            func_02116dec(arg0, 4);
            func_02116d20(arg0, 0);
            func_020e1508();
            func_0208df28(0x4C);
            break;
        case 4:
            if (func_020e14e8() == 0) {
                return;
            }
            func_02116f14(arg0);
            break;
        default:
            break;
    }
}
