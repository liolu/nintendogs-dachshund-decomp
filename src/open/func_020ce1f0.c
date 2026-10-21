#include "m2c.h"
extern s8 *data_02159e38;
s8 *func_020ce1f0(void) {
    s16 i;
    s8 *result = 0;
    s8 *p = (s8 *) (*(u32 *) (data_02159e38 + 0x141C) + 0x568);

    for (i = 0; i < 0x14; i++) {
        if (p[0xE] != 0) {
            if (p[0xF] >= 0) {
                result = p;
                break;
            }
        }
        p += 0x10;
    }
    return result;
}
