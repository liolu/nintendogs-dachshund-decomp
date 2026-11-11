/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020280ec(void *);
void func_ov002_0217f508(void *, s32, s32, s32, s32, s32, s32, s32, s32);

void func_ov002_0217cc6c(void *arg0) {
    s32 t4;
    s32 t0;
    s64 a;
    s64 b;

    t4 = func_020280ec(arg0);
    t0 = func_020280ec(arg0);
    a  = (s64) t0 * -217 + 0x800;
    b  = (s64) t4 * -168 + 0x800;
    func_ov002_0217f508(arg0, 1, 0xEC, 0x0B, 0x22, -(s32) (a >> 12), 0x23, 0x3E, -(s32) (b >> 12));
}
