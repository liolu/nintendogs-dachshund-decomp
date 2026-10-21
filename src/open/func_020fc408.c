#include "m2c.h"
void func_020b182c(s32, s32, s32);
void func_020fc408(s32 arg0, s32 arg1) {
    s32 ay;
    s32 ax;
    s32 d;
    s32 v;

    func_020b182c(arg0, arg1, 0);
    ax = *(s32 *) (arg0 + 0xB8);
    if (ax <= 0) {
        ax = -ax;
    }
    ay = *(s32 *) (arg0 + 0xB0);
    if (ay <= 0) {
        ay = -ay;
    }
    d = ay + ax;
    v = (s32) (((s64) (0x666 + d * 8) * 0xCD + 0x800) >> 12);
    ((s32 *) arg0)[0x2D] = ((s32 *) arg0)[0x2D] + v;
    if (((s32 *) arg0)[0x2D] > 0x666) {
        ((s32 *) arg0)[0x2D] = 0x666;
    }
}
