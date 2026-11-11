/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020280ec(void *);
void func_ov002_0217f508(void *, s32, s32, s32, s32, s32, s32, s32, s32);

void func_ov002_0217d180(void *arg0) {
    s32 t4;
    s32 t0;
    s64 a;
    s64 b;

    t4 = func_020280ec(arg0);
    t0 = func_020280ec(arg0);
    a  = (s64) t0 * 0x73 + 0x800;
    b  = (s64) t4 * 0x7A + 0x800;
    func_ov002_0217f508(arg0, 3, 0xF2, 0x17, 0x27, -(s32) (a >> 12), 0x2D, 0x45, -(s32) (b >> 12));
}
