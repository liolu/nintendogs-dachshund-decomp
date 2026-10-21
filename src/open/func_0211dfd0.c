#include "m2c.h"
void func_0211dfd0(void *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1:
        if (func_ov004_0215a91c(arg0) != 0) {
            func_02116dec(arg0, 0x29);
            func_02116d20(arg0, 1);
            return;
        }
        if (func_ov004_0215ab08() == 0) {
            M2C_FIELD(arg0, s16 *, 0x2E) = 2;
            M2C_FIELD(arg0, s16 *, 0x30) = 0;
            M2C_FIELD(arg0 + 0x100, s16 *, 0) = 7;
        }
        return;
    case 2:
    case 3:
        break;
    case 4:
        if (func_02116cb4(arg0) != 0) {
            func_02116f14(arg0);
        }
        return;
    }
}
