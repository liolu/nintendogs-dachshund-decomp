#include "m2c.h"
void func_020f76c8(M2C_UNK arg0);
void func_020f7298(M2C_UNK arg0);
void func_020f6c50(M2C_UNK arg0);
void func_020f76c8(M2C_UNK);
void func_020f7298(M2C_UNK);
void func_020f6c50(M2C_UNK);
void func_020f6bf8(s32 arg0) {
    s16 temp_r1;

    temp_r1 = *(s16 *) (arg0 + 0x90);
    switch (temp_r1) {
    case 0:
        break;
    case 2:
        func_020f76c8(arg0);
        return;
    case 3:
        func_020f7298(arg0);
        return;
    case 1:
        func_020f6c50(arg0);
        return;
    }
}
