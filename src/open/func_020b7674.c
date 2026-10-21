#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

extern s64 data_02124d28;
void func_0206823c(s32 *, s32 *, s32 *);
M2C_UNK func_02006a20(s32 *, s32 *);
void func_0206810c(s32 *, s32 *, s32 *);

void func_020b7674(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    Vec3 mat;
    Vec3 *v0 = (Vec3 *) a0;
    Vec3 *v1 = (Vec3 *) a1;
    Vec3 *v2 = (Vec3 *) a2;
    s64 limit;
    s64 d;

    mat.x = 0;
    mat.y = 0x1000;
    mat.z = 0;
    func_0206823c((s32 *) a4, (s32 *) a3, (s32 *) v2);
    limit = data_02124d28;
    d = (s64) v2->x * v2->x + (s64) v2->y * v2->y + (s64) v2->z * v2->z;
    if (d >= limit) {
        func_02006a20((s32 *) v2, (s32 *) v2);
    }
    func_0206810c((s32 *) &mat, (s32 *) v2, (s32 *) v0);
    d = (s64) v0->x * v0->x + (s64) v0->y * v0->y + (s64) v0->z * v0->z;
    if (d >= limit) {
        func_02006a20((s32 *) v0, (s32 *) v0);
    }
    func_0206810c((s32 *) v2, (s32 *) v0, (s32 *) v1);
    d = (s64) v1->x * v1->x + (s64) v1->y * v1->y + (s64) v1->z * v1->z;
    if (d < limit) {
        return;
    }
    func_02006a20((s32 *) v1, (s32 *) v1);
}
