#include "m2c.h"

s32 func_020cba74(u8 *arg0, s32 arg1, s32 arg2);

void func_020cbb18(u8 *arg0, s32 arg1, s32 arg2, u16 *arg3, u32 arg4, s32 arg5) {
    u32 v = func_020cba74(arg0, arg1, arg2);
    u8 *p;
    u32 i;
    u16 c;

    p = *(u8 **) (arg0 + 8) + *(u32 *) (*(u32 *) (arg0 + 4) + (v & 0xFFFF) * 4);
    arg3[arg4 - 1] = 0;
    i = 0;
    goto check;
loop:
    c = *(u16 *) p;
    while (c == 0x1A) {
        p = (u8 *) p + ((*(u16 *) (p + 2) & 0xFF) << 1);
        c = *(u16 *) p;
    }
    arg3[i] = c;
    if (arg3[i] == 0) {
        return;
    }
    p += 2;
    if (arg5 >= 0 && (s32) (i + 1) >= arg5) {
        arg3[i + 1] = 0;
        return;
    }
    i++;
check:
    if (i < arg4 - 1) {
        goto loop;
    }
}
