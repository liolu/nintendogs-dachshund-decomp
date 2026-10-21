#include "m2c.h"
extern s8 *data_02159e38;
s32 func_020cdf80(void) {
    s16 i;
    s16 count = 0;
    s8 *p = data_02159e38;

    for (i = 0; i < 5; i++) {
        if (*(u16 *) (*(u32 *) (p + 0x14F4) + 4) != 0xFFFF) {
            count++;
        }
        p += 0x18;
    }
    return count;
}
