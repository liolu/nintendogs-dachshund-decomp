/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020280ec(void *);
void func_ov002_0217f788(void *, s32, s32, s32, s32, s32);

void func_ov002_0217d0a4(void *arg0) {
    s32 x;
    s64 p;
    u64 y;
    s32 v;

    x = func_020280ec(arg0);
    p = (s64) x * 0x102;
    y = (u64) p + 0x800;
    v = (s32) (y >> 12);
    func_ov002_0217f788(arg0, 3, 0xEC, 0x1E, 0x31, v);
}
