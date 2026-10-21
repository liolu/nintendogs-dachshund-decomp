#include "m2c.h"

void func_02027aac(s32 arg0, s32 arg1, s32 arg2) {
    u16 v = ((u16 *) arg0)[arg1 + 0x9C];
    s16 hi = v + 5000;
    s16 lo = v - 5000;

    if (arg2 > hi) {
        arg2 = hi;
    }
    if (arg2 < lo) {
        arg2 = lo;
    }
    if (arg2 > 10000) {
        arg2 = 10000;
    }
    if (arg2 < 0) {
        arg2 = 0;
    }
    ((u16 *) arg0)[arg1 + 0x99] = arg2;
}
