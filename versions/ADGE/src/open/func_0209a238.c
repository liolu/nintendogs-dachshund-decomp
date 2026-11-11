#include "m2c.h"
void *func_020d049c(s32);
s32 func_0209a238(s32 arg0) {
    void *r;
    s16 n;
    s16 i;

    r = 0;
    n = 0;
    i = -1;
    do {
        i = (s16) (i + 1);
        while (i < 3 && *(u16 *) func_020d049c(i) == 0xFFFF) {
            i = (s16) (i + 1);
        }
    } while (n++ < arg0);
    if (i >= 3) {
        i = -1;
    }
    if (i >= 0) {
        r = func_020d049c(i);
    }
    return (s32) r;
}
