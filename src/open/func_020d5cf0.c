#include "m2c.h"
s32 func_020d5cf0(u32 value, u16 *buf, s32 frac) {
    s32 count;
    s32 n;
    u32 v;
    s32 pos;
    s32 i;

    n = 1;
    v = value;
    for (i = 0; i < 10; i++) {
        v /= 10;
        if (v == 0) {
            break;
        }
        n++;
    }
    if (value == 0) {
        n = frac + 1;
    } else if (n <= frac) {
        n += frac - n + 1;
    }
    pos = n;
    count = 0;
    if (0 < n) {
        do {
            buf[pos] = (u16) (value % 10) + '0';
            value /= 10;
            pos--;
            if (--frac == 0) {
                buf[pos] = '.';
                pos--;
                if (value == 0) {
                    count = n;
                    buf[pos] = '0';
                }
            }
            count++;
        } while (count < n);
    }
    buf[n + 1] = 0;
    return n + 1;
}
