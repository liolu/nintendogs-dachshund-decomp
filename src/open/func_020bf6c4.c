#include "m2c.h"
u16 func_02063f4c();                                /* extern */
s32 func_02064b80(M2C_UNK);                         /* extern */
s32 func_02064bc8(M2C_UNK);                         /* extern */
s32 func_02064cb8(M2C_UNK);                         /* extern */
void func_020bf820(s32);
void func_020bf854(s32);
void func_020bf888(s32);
extern u16 data_0215566c;
extern s32 data_02155678;
extern s32 data_0215567c;
s32 func_020bf6c4(void) {
    if (data_02155678 != 0) {
        data_0215566c = 1;
    }
    if (data_0215567c == 1) {
        return 0;
    }
    switch (data_02155678) {
    case 0:
        return 1;
    case 1:
        if (func_02063f4c() == 0) {
            data_0215566c = 0;
            data_0215567c = 0;
            data_02155678 = 0;
            return 1;
        }
        break;
    case 2:
        if (func_02064cb8((s32) func_020bf820) == 2) {
            data_0215567c = 1;
            return 1;
        }
        break;
    case 3:
        if (func_02064b80((s32) func_020bf888) == 2) {
            data_0215567c = 1;
            return 1;
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        if (func_02064bc8((s32) func_020bf854) == 2) {
            data_0215567c = 1;
            return 1;
        }
        break;
    }
    return 0;
}
