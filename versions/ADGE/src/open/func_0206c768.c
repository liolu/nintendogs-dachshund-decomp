#include "m2c.h"
extern s32 func_0206c2c8(s32 arg0, s32 arg1, u32 arg2, s32 arg3);
extern s32 func_01ffdbd0(s32 arg0, s32 arg1, s32 arg2, u32 arg3);
void func_0206c768(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    volatile u32 *p;

    func_0206c2c8(arg0, arg1, arg3, 0);
    if (arg3 == 0) {
        return;
    }
    p = (volatile u32 *) (0x40000B0 + (arg0 * 3 + 2) * 4);
    while (*p & 0x80000000) {
    }
    func_01ffdbd0(arg0, arg1, arg2, (arg3 >> 2) | 0x84000000);
    while (*p & 0x80000000) {
    }
}
