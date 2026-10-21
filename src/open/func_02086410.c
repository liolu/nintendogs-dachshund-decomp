#include "m2c.h"

typedef struct {
    u16 lo;
    u16 hi;
} Range;

s32 func_020864c4(u32 key, s32 lo, s32 hi, u16 *table, u16 found_off, u16 notfound_val);

s32 func_02086410(u8 *arg0, u32 arg1) {
    s32 i;
    s32 acc;
    volatile u16 *ranges;
    u16 *plain;
    s32 count;
    u16 lo;
    u16 hi;
    u16 l2;
    u16 h2;

    count = *(u16 *) (arg0 + 0x1a);
    acc = 0;
    i = 0;
    if (count > 0) {
        ranges = *(volatile u16 **) (arg0 + 8);
        plain = (u16 *) ranges;
        do {
            lo = ranges[i * 2];
            if (lo <= arg1) {
                hi = ranges[i * 2 + 1];
                if (arg1 <= hi) {
                    return acc + arg1 - lo;
                }
            }
            h2 = plain[i * 2 + 1];
            l2 = plain[i * 2];
            acc += h2 - l2 + 1;
            i++;
        } while (i < count);
    }
    return func_020864c4(arg1, 0, *(u16 *) (arg0 + 0x18) - 1, *(u16 **) (arg0 + 4), (u16) acc, *(u16 *) (arg0 + 0x12));
}
