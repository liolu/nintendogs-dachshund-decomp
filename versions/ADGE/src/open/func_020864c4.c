#include "m2c.h"
s32 func_020864c4(u32 key, s32 lo, s32 hi, u16 *table, u16 found_off, u16 notfound_val) {
    s32 mid;

    while (lo <= hi) {
        mid = lo + ((hi - lo) >> 1);
        if (table[mid] > key) {
            hi = mid - 1;
        } else if (table[mid] < key) {
            lo = mid + 1;
        } else {
            return found_off + mid;
        }
    }
    return notfound_val;
}
