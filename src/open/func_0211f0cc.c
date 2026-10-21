#include "m2c.h"
void func_0211f0cc(u8 *base) {
    s16 i;
    s16 j;
    s16 sum;
    s16 *p;
    s16 *row;
    u8 *ptr;
    s16 f40;
    s16 t;

    ptr = base + 0x66;
    sum = 0;
    for (i = 0; i < 3; i++) {
        if (*(u16 *) ptr != 0) {
            sum = (s16) (sum + ptr[3]);
        }
        ptr += 4;
    }

    row = (s16 *) (base + 0x42);
    for (j = 0; j < 3; j++) {
        p = row + *(s16 *) (base + 0x20);
        switch (j) {
        case 0:
        case 1:
            if (sum > 0) {
                f40 = *(s16 *) (base + 0x40);
                t   = (s16) (f40 - sum);
                if (t < 0) {
                    t = 0;
                }
                *p = *p - t * 20;
            } else {
                *p = *p - 200;
            }
            break;
        case 2:
            if (sum > 0) {
                f40 = *(s16 *) (base + 0x40);
                t   = (s16) ((f40 * 120) / 100 - sum);
                if (t < 0) {
                    t = 0;
                }
                *p = *p - t * 20;
            } else {
                *p = *p - 200;
            }
            break;
        }
        if (*p < 0) {
            *p = 0;
        }
        row += 5;
    }
}
