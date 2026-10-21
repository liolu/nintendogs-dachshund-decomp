#include "m2c.h"

s32 func_02042618();
void func_02096c3c();
void func_02096cf8();

s32 func_0211674c(void *arg0) {
    s32 var = 1;
    s32 mode;

    if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 1) {
        if (func_02042618() != 0) {
            var = 0;
        }
    }
    mode = 1;
    switch (M2C_FIELD(arg0, s16 *, 0x7C)) {
        case 0x30:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x4B:
        case 0x4E:
        case 0x64:
            mode = 0;
            break;
    }
    if (mode != 0) {
        func_02096c3c();
    } else {
        func_02096cf8();
    }
    return var;
}
