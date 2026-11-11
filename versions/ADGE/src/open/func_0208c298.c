#include "m2c.h"
extern s32 data_0213cf48[];

s32 func_0208c298(u32 arg0, s32 arg1, s32 arg2) {
    s32 v = 0;
    u8 *p = (u8 *) data_0213cf48[arg0] + 8 + arg1 * 8;

    if (arg2 <= *(u16 *) (p + 6)) {
        goto end;
    }
    v = *(s16 *) (p + 2) + (arg2 >> *(s8 *) (p + 0));
    if (v > 0x7F) {
        v = 0x7F;
    } else if (v < 0) {
        v = 0;
    }
end:
    return v;
}
