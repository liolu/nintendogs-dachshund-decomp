/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02028114(void *);
s32 func_0202507c(void *, s32, s32, s32);
s32 func_ov003_021734f8(void *, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0203535c(void *);
void func_0203e5e8(void *, s32);

void func_ov003_021733f4(void *arg0) {
    s32 r4;
    s32 v;
    s64 p;

    r4 = 1;
    v  = func_02028114(arg0);
    p  = (s64) v * -630 + 0x800;
    if (func_0202507c(arg0, 5, 0x11, (s32) (p >> 12)) != 0) {
        r4 = 0;
    }
    if (func_ov003_021734f8(arg0, 0x3B0, 0, 0x300, 1, 0, 1, r4, 0) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x3B0);
}
