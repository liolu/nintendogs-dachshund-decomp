#include "m2c.h"
u8 *func_020cc510(u8 *arg0, s32 arg1) {
    long i;
    register u8 *found;
    u8 *p;
    s16 count;

    count = *(s16 *) (arg0 + 0x18);
    found = 0;
    i = 0;
    if (0 < count) {
        p = arg0 + 0x25C;
        do {
            if (*(u32 *) p == arg1) {
                found = p;
                break;
            }
            i += 1;
            p += 8;
        } while (i < count);
    }
    if (!found) {
        p = arg0 + 0x25C;
        found = p + count * 8;
        *(u32 *) (p + count * 8) = arg1;
        *(u16 *) (found + 4) = 0;
        *(s16 *) (arg0 + 0x18) = *(s16 *) (arg0 + 0x18) + 1;
    }
    return found;
}
