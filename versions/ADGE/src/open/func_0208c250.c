#include "m2c.h"
extern u32 data_0213cf48[];
s32 func_0208c250(u32 arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *) data_0213cf48[arg0] + 8 + arg1 * 8;
    s32 v = *(s16 *) (p + 4) + (arg2 >> *(s8 *) (p + 1));

    if (v > 0x7FFF) {
        v = 0x7FFF;
    } else if (v < -0x8000) {
        v = -0x8000;
    }
    return v;
}
