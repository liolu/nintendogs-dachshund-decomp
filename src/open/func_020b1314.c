#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

void func_020b1314(s32 arg0, Vec3 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    Vec3 local;
    s32 v;

    local = *arg1;
    func_02068270(arg0 + 0xBC, &local, arg0 + 0xBC);
    if (M2C_FIELD(arg0, s32 *, 0xB4) >= 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xB4) =
        -(s32)(((s64) M2C_FIELD(arg0, s32 *, 0xB4) * arg2 + 0x800) >> 12);

    v = M2C_FIELD(arg0, s32 *, 0xB0);
    if ((v > 0 ? v : -v) < 0x29) {
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32)(((s64) v * arg3 + 0x800) >> 12);
    }

    v = M2C_FIELD(arg0, s32 *, 0xB8);
    if ((v > 0 ? v : -v) < 0x29) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xB8) = (s32)(((s64) v * arg3 + 0x800) >> 12);
    }

    if (arg4 < 0) {
        return;
    }
    v = M2C_FIELD(arg0, s32 *, 0xB4);
    func_0208b948(arg0 + 0x190, 0, (v > 0 ? v : -v));
}
