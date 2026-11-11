#include "m2c.h"
void *func_020ce084(s32);
s32 func_0209a128(s32 arg0) {
    void *r;
    s16 n;
    s16 i;

    r = 0;
    n = 0;
    i = -1;
    do {
        i = (s16) (i + 1);
        while (i < 5 && *(u16 *) func_020ce084(i) == 0xFFFF) {
            i = (s16) (i + 1);
        }
    } while (n++ < arg0);
    if (i >= 5) {
        i = -1;
    }
    if (i >= 0) {
        r = func_020ce084(i);
    }
    return (s32) r;
}
