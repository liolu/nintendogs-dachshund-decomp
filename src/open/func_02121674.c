#include "m2c.h"
M2C_UNK func_02116cb4(M2C_UNK);
M2C_UNK func_02116da0(M2C_UNK);
void func_021216d8(M2C_UNK);
void func_02116f14(M2C_UNK);
void func_02121674(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x2E);
    switch (temp_r1) {
        case 0:
            func_02116da0(arg0);
            return;
        case 1:
            func_021216d8(arg0);
            return;
        case 2:
        case 3:
        default:
            break;
        case 4:
            if (func_02116cb4(arg0) == 0) {
                return;
            }
            func_02116f14(arg0);
            return;
    }
}
