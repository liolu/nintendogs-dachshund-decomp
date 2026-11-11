/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02028114(void *);
void func_ov003_021818bc(void *, s32, s32, s32, s32, s32, s32, s32, s32);

void func_ov003_0217f5e8(void *arg0) {
    s32 t4;
    s32 t0;
    s64 a;
    s64 b;

    t4 = func_02028114(arg0);
    t0 = func_02028114(arg0);
    a  = (s64) t0 * 0x73 + 0x800;
    b  = (s64) t4 * 0x7A + 0x800;
    func_ov003_021818bc(arg0, 2, 0xF1, 0x17, 0x27, (u32) (a >> 12), 0x2D, 0x45, (u32) (b >> 12));
}
