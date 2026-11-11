/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02024f08(void *, s32, s32);
s32 func_02028114(void);
s32 func_0203535c(void *);
void func_0203e5e8(void *, s32);
s32 func_ov003_021734f8(void *, s32, s32, s32, s32, s32, s32, s32, s32);

void func_ov003_02172ffc(void *arg0) {
    s64 p;
    s32 x;

    x = func_02028114();
    p = (s64) x * 0x1EB + 0x800;
    func_02024f08(arg0, 1, -(s32) (p >> 12));
    if (func_ov003_021734f8(arg0, 0x3B0, 0, 0x300, 1, 0, 1, 0, 0) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x3B0);
}
