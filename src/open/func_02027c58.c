#include "m2c.h"
extern s32 *data_0214da84;
extern u8 data_02139e0c[];
s32 func_02027c58(void *arg0, s16 arg1) {
    s32 *p;
    s32 t;
    s8 b;
    u16 bits;
    u8 v;

    p = data_0214da84;
    t = *p * 0x10DCD + 1;
    *p = t;
    b = *(s8 *) ((u8 *) arg0 + 0x8D);
    v = *((u8 *) data_02139e0c + arg1 * 9 + b);
    bits = ((u32) t << 16) >> 30;
    return (v - 1) > bits;
}
