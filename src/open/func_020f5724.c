#include "m2c.h"
void func_020f5dd8(M2C_UNK);
void func_020f5ba4(M2C_UNK);
void func_020f577c(M2C_UNK);
void func_020f5724(s32 arg0) {
    s16 temp_r1;

    temp_r1 = *(s16 *) (arg0 + 0x90);
    switch (temp_r1) {
    case 0:
        break;
    case 2:
        func_020f5dd8(arg0);
        return;
    case 3:
        func_020f5ba4(arg0);
        return;
    case 1:
        func_020f577c(arg0);
        return;
    }
}
