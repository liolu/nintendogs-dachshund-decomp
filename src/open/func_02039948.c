#include "m2c.h"
extern void *data_0214da84;
s32 func_020a5fcc(void);
void func_02039948(s32 arg0) {
    s32 *p = (s32 *) data_0214da84;
    s8 *base;

    if (M2C_FIELD(arg0, s8 *, 0x88) == M2C_FIELD(p, s8 *, 0x7)) {
        base = (s8 *) func_020a5fcc() + 0x88;
        *(s32 *) (base + 0x6C) = 1;
    } else {
        base = (s8 *) func_020a5fcc() + 0x88;
        *(s32 *) (base + 0x6C) = 0;
    }
}
