#include "m2c.h"
u16 *func_020d049c(s16);
s32 func_0209a2c8(s32 arg0) {
    s16 count;
    s16 i;

    count = 0;
    i = -1;
top:
    i = (s16) (i + 1);
    goto test;
inc:
    i = (s16) (i + 1);
test:
    if (i >= 3) {
        goto found;
    }
    if (*func_020d049c(i) == 0xFFFF) {
        goto inc;
    }
found:
    if (count++ < arg0) {
        goto top;
    }
    if (i >= 3) {
        i = -1;
    }
    return i;
}
