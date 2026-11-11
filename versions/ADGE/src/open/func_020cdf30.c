#include "m2c.h"
extern s8 *data_02159e38;
s32 func_020cdf30(void) {
    s16 i;
    s32 result;
    s8 *p = data_02159e38;

    result = -1;
    for (i = 0; i < 5; i++) {
        if (*(u16 *) (*(u32 *) (p + 0x14F4) + 4) == 0xFFFF) {
            result = i;
            break;
        }
        p += 0x18;
    }
    return result;
}
