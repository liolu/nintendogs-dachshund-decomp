#include "m2c.h"

extern u8 *data_021555f8;

void func_020a63dc(void) {
    s32 v;
    void (*fn)(void *);
    s32 i;

    i = 0;
    for (; i < 7; i = (s16) (i + 1)) {
        if ((i < 0) || (M2C_FIELD(data_021555f8, s16 *, 0x20) <= i)) {
            v = 0;
        } else {
            v = M2C_FIELD(data_021555f8 + i * 4, s32 *, 4);
        }
        if (v != 0) {
            fn = M2C_FIELD(v, void (**)(void *), 0x208);
            if (fn != 0) {
                fn((void *) v);
            }
        }
    }
}
