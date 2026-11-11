#include "m2c.h"

extern u8 *data_ov004_02163cc4;

s32 func_ov004_021607a0(void) {
    u8 *p = data_ov004_02163cc4;
    s32 i = 0;

    do {
        u8 *e = p + i * 2;
        s16 a = *(s16 *) (e + 0x30);
        s16 b = *(s16 *) (e + 0x3C);

        if (a < b) {
            return 0;
        }
        i = (s16) (i + 1);
    } while (i < 6);
    return 1;
}
