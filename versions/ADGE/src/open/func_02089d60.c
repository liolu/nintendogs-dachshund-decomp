#include "m2c.h"
s32 func_02089d60(u8 *arg0) {
    s16 i;
    s32 count;

    count = *(s32 *) arg0;
    for (i = 0; i < count; i++) {
        u16 mask = (u16) (1 << i);
        ((void) mask);
        if (((s32 *) (arg0 + 0x18))[i] == 0) {
            if ((*(u16 *) (arg0 + 0xA) & mask) == 0) {
                *(u16 *) (arg0 + 0xA) |= mask;
                return i;
            }
        }
    }
    return -1;
}
