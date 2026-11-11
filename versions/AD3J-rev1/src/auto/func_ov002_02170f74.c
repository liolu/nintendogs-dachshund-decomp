/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020280ec(void *);
s32 func_02025034(void *, s32, s32, s32);
s32 func_ov002_02171078(void *, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_020351a0(void *);
void func_0203e2b8(void *, s32);

void func_ov002_02170f74(void *arg0) {
    s32 r4;
    s32 v;
    s64 p;

    r4 = 1;
    v  = func_020280ec(arg0);
    p  = (s64) v * -630 + 0x800;
    if (func_02025034(arg0, 5, 0x11, (s32) (p >> 12)) != 0) {
        r4 = 0;
    }
    if (func_ov002_02171078(arg0, 0x3B0, 0, 0x300, 1, 0, 1, r4, 0) != 0) {
        return;
    }
    if (func_020351a0(arg0) == 0) {
        return;
    }
    func_0203e2b8(arg0, 0x3B0);
}
