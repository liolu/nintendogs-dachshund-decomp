#include "m2c.h"

M2C_UNK func_020449ac(s32);

extern void *data_0215a044;

s32 func_0210e388(void) {
    s32 res = 1;
    s32 i = 0;

    if ((s32) M2C_FIELD(data_0215a044, s16 *, 0x20) > 0) {
        do {
            s32 p = func_020449ac(i);

            if (p != 0) {
                if (M2C_FIELD((void *) p, s32 *, 0x94) == 0) {
                    res = 0;
                    break;
                }
            }
            i = (s32) (s16) (i + 1);
        } while (i < (s32) M2C_FIELD(data_0215a044, s16 *, 0x20));
    }
    return res;
}
