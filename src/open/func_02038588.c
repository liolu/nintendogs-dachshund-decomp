#include "m2c.h"
extern void *data_0215a048;
extern u8 data_02139ffc[];
extern u8 data_02135014[];
void func_02038588(s32 arg0, s32 arg1) {
    s32 k = *(u16 *) ((u8 *) data_0215a048 + 6);
    s32 sel = *(s32 *) (data_02139ffc + k * 4);
    s32 v = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), s32 *, 0xC);
    s16 cat;
    s8 *p;
    s16 x;

    if (v < 0xCCD) {
        cat = 0;
    } else if (v <= 0x119A) {
        cat = 1;
    } else {
        cat = 2;
    }
    p = (s8 *) (data_02135014 + sel * 0x24 + cat * 0xC);
    for (arg0 = 5; arg0 > 0; arg0 = (s16) (arg0 - 1)) {
        x = *(s16 *) (p + arg0 * 2);
        if (x >= 0 && x <= arg1) {
            return;
        }
    }
}
