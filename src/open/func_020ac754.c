#include "m2c.h"
s32 func_01ffdb08(M2C_UNK);
s32 func_020b0f74(void *, M2C_UNK);
s32 func_02033f30(s32);
s32 func_02033ee8(s32);
M2C_UNK func_021147a4(s32);
M2C_UNK func_020afbc4(void *);
s32 func_020afb54(void *, M2C_UNK);
extern void *data_0215a064;
void func_020ac754(void *arg0, M2C_UNK arg1) {
    s32 temp;

    temp = func_01ffdb08(arg1);
    if (temp == 0) {
        return;
    }
    if (func_020b0f74(arg0, arg1) == 0) {
        return;
    }
    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 0:
    case 2:
    case 4:
    case 5:
    case 8:
        func_020afbc4(arg0);
        break;
    case 1:
    case 3:
        if (func_02033f30(temp) != 0 || func_02033ee8(temp) != 0) {
            func_021147a4(2);
        } else {
            func_021147a4(1);
        }
        func_020afb54(arg0, arg1);
        M2C_FIELD(data_0215a064, s32 *, 0x50) = 0;
        break;
    }
}
