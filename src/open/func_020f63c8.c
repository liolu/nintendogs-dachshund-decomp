#include "m2c.h"
void func_020f63c8(void *arg0, void *arg1) {
    s32 x;
    s32 v;
    void *p;

    p = M2C_FIELD(arg0, void **, 0x214);
    func_02068270(arg0 + 0xBC, arg1, arg0 + 0xBC);
    x = M2C_FIELD(arg0, s32 *, 0xB4);
    if (x >= 0) {
        return;
    }
    v = -(s32) (((s64) x * 0x1004 + 0x800) >> 12);
    M2C_FIELD(arg0, s32 *, 0xB4) = v;
    if (M2C_FIELD(p, s32 *, 0x14) != 0) {
        return;
    }
    x = M2C_FIELD(arg0, s32 *, 0xB4);
    func_0208b948(arg0 + 0x190, 0, (s32) (((s64) x * M2C_FIELD(arg0, s32 *, 0x24) + 0x800) >> 12));
}
