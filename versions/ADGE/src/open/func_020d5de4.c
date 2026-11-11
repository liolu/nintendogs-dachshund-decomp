#include "m2c.h"
s32 func_020d5de4(u32 arg0, u16 *arg1) {
    u32 v;
    s32 i;
    s32 j;
    s32 n;

    v = arg0;
    n = 1;
    for (i = 0; i < 10; i++) {
        v /= 10;
        if (v == 0) {
            break;
        }
        n++;
    }
    v = arg0;
    for (j = 0; j < n; j++) {
        *(arg1 + n - j - 1) = (u16) (v % 10) + '0';
        v /= 10;
    }
    arg1[n] = 0;
    return n;
}
