#include "m2c.h"
extern s8 *data_02159e38;
s32 func_020d01f8(void) {
    s16 i;
    s16 result = 0;
    s8 *p = data_02159e38;

    for (i = 0; i < 3; i++) {
        if (*(u16 *) (*(u32 *) (p + 0x144C) + 4) != 0xFFFF) {
            result = 1;
            break;
        }
        p += 0x18;
    }
    return result;
}
