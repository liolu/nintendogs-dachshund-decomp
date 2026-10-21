#include "m2c.h"

extern u32 *data_02159e64;
M2C_UNK func_02116cb4(M2C_UNK);
void func_02116da0(M2C_UNK);
void func_02116f14(M2C_UNK);

void func_0211dc6c(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x2E);
    switch (temp_r1) {
        case 0:
            func_02116da0(arg0);
            return;
        case 1:
            if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
                return;
            }
            M2C_FIELD(arg0, s16 *, 0x2E) = 2;
            M2C_FIELD(arg0, s16 *, 0x30) = 0;
            M2C_FIELD(arg0, s16 *, 0x100) = 2;
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
