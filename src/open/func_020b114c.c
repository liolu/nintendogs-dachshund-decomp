#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

typedef struct {
    s32 w[12];
} Block48;

void func_02068270(s32 arg0, Vec3 *arg1, s32 arg2);
s32 func_02068038(s32 arg0);
void func_0208b948(s32 arg0, s32 arg1, s32 arg2);

void func_020b114c(s32 arg0, Vec3 *arg1, Block48 *arg2, s32 arg3, s32 arg4, s32 arg5) {
    Vec3 local;
    s32 v;

    local = *arg1;
    if (local.x > 0x333) {
        local.x = 0x333;
    }
    if (local.y > 0x333) {
        local.y = 0x333;
    }
    if (local.z > 0x333) {
        local.z = 0x333;
    }
    if (local.x < -0x333) {
        local.x = -0x333;
    }
    if (local.y < -0x333) {
        local.y = -0x333;
    }
    if (local.z < -0x333) {
        local.z = -0x333;
    }
    func_02068270(arg0 + 0xBC, &local, arg0 + 0xBC);
    if (M2C_FIELD(arg0, s32 *, 0xB4) >= 0) {
        return;
    }

    v = M2C_FIELD(arg0, s32 *, 0xB0);
    if ((v > 0 ? v : -v) < 0x29) {
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32)(((s64) v * arg4 + 0x800) >> 12);
    }

    v = M2C_FIELD(arg0, s32 *, 0xB8);
    if ((v > 0 ? v : -v) < 0x29) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xB8) = (s32)(((s64) v * arg4 + 0x800) >> 12);
    }

    if (func_02068038(arg0 + 0xB0) > 0x333) {
        if (arg5 >= 0) {
            v = M2C_FIELD(arg0, s32 *, 0xB4);
            func_0208b948(arg0 + 0x190, 0, (v > 0 ? v : -v));
        }
        M2C_FIELD(arg0, s32 *, 0xB4) =
            -(s32)(((s64) M2C_FIELD(arg0, s32 *, 0xB4) * arg3 + 0x800) >> 12);
    } else {
        v = M2C_FIELD(arg0, s32 *, 0xB4);
        M2C_FIELD(arg0, s32 *, 0xB4) = v - (v >> 2);
        *(Block48 *) (arg0 + 0xC8) = *arg2;
    }
}
