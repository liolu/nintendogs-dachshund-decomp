#include "m2c.h"
extern void func_020f0d14(s32, s32);
void func_020f0d14(s32, s32);
void func_020f184c(s32 arg0) {
    s32 i;

    for (i = 0; i < 4; i++) {
        func_020f0d14(arg0 + 0xa8 + i * 0x20, 0);
    }
}
