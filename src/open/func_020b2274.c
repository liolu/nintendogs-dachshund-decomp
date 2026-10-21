#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

extern void *data_0215a064;
s32 func_01ffdb08(s16 arg0);
s32 func_02044980();
void func_020a83c0(M2C_UNK arg0);
s32 func_02033e94(s32 arg0);
s32 func_020afb00(M2C_UNK arg0);
s32 func_020afbf4(M2C_UNK arg0);
M2C_UNK func_0208b9c8(M2C_UNK arg0, M2C_UNK arg1);

void func_020b2274(M2C_UNK arg0) {
    s32 temp_r4;
    Vec3 v;

    temp_r4 = func_01ffdb08(M2C_FIELD(arg0, s16 *, 0x98));
    func_02044980(0);
    func_020a83c0(arg0);
    if (M2C_FIELD(data_0215a064, u16 *, 0x84) & 1) {
        v = M2C_FIELD(data_0215a064, Vec3 *, 0x9c);
        M2C_FIELD(arg0, s32 *, 0xbc) = (M2C_FIELD(arg0, s32 *, 0xbc) >> 1) + (v.x >> 1);
        M2C_FIELD(arg0, s32 *, 0xc0) = (M2C_FIELD(arg0, s32 *, 0xc0) >> 1) + (v.y >> 1);
        M2C_FIELD(arg0, s32 *, 0xc4) = (M2C_FIELD(arg0, s32 *, 0xc4) >> 1) + (v.z >> 1);
    }
    if (!(M2C_FIELD(data_0215a064, u16 *, 0x84) & 1)) {
        func_020afb00(arg0);
    } else {
        if (func_02033e94(temp_r4) != 0) {
            return;
        }
        func_020afbf4(arg0);
        func_0208b9c8(arg0 + 0x190, 6);
    }
}
