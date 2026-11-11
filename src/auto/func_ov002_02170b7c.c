/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02024ec0(void *, s32, s32);
s32 func_020280ec(void);
s32 func_020351a0(void *);
void func_0203e2b8(void *, s32);
s32 func_ov002_02171078(void *, s32, s32, s32, s32, s32, s32, s32, s32);

void func_ov002_02170b7c(void *arg0) {
    s64 p;
    s32 x;

    x = func_020280ec();
    p = (s64) x * 0x1EB + 0x800;
    func_02024ec0(arg0, 1, -(s32) (p >> 12));
    if (func_ov002_02171078(arg0, 0x3B0, 0, 0x300, 1, 0, 1, 0, 0) != 0) {
        return;
    }
    if (func_020351a0(arg0) == 0) {
        return;
    }
    func_0203e2b8(arg0, 0x3B0);
}
