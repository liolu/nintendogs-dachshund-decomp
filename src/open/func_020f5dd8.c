#include "m2c.h"

typedef struct {
    s32 x, y, z;
} UnkVec32;

s32 func_02044980(s16);                             /* extern */
void func_020a8128(void *, void *);                 /* extern */
s32 func_0206823c(void *, void *, void *);          /* extern */
M2C_UNK func_02006a20(void *, void *);              /* extern */
void func_0206810c(void *, void *, void *);         /* extern */
M2C_UNK func_020afbc4(void *);                      /* extern */
M2C_UNK func_020afbf4(void *);                      /* extern */
M2C_UNK func_0208b9c8(void *, s32);                 /* extern */
void func_020f5f64(void *);                         /* extern */
s32 func_021144f0(s32, void *, s32);                /* extern */

extern void *data_0215a064;
extern void *data_021555f8;

#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))

void func_020f5dd8(void *arg0) {
    UnkVec32 up;
    UnkVec32 vec_a;
    UnkVec32 vec_b;
    UnkVec32 tmp;
    s32 temp_r4;

    temp_r4 = func_02044980(M2C_FIELD(arg0, s16 *, 0x9C));
    func_020a8128(arg0, (s8 *) arg0 + 0xBC);
    func_02044980(M2C_FIELD(arg0, s16 *, 0x9C));
    tmp = *(UnkVec32 *) ((s8 *) M2C_FIELD(data_0215a064, void **, 0x1C) + 0x30);
    func_0206823c((s8 *) arg0 + 0xBC, &tmp, &vec_a);
    vec_a.y = 0;
    func_02006a20(&vec_a, &vec_a);
    up.x = 0;
    up.z = 0;
    up.y = -0x1000;
    func_0206810c(&vec_a, &up, &vec_b);
    M2C_FIELD(arg0, s32 *, 0xC8) = vec_b.x;
    M2C_FIELD(arg0, s32 *, 0xCC) = vec_b.y;
    M2C_FIELD(arg0, s32 *, 0xD0) = vec_b.z;
    M2C_FIELD(arg0, s32 *, 0xD4) = vec_a.x;
    M2C_FIELD(arg0, s32 *, 0xD8) = vec_a.y;
    M2C_FIELD(arg0, s32 *, 0xDC) = vec_a.z;
    M2C_FIELD(arg0, s32 *, 0xE0) = up.x;
    M2C_FIELD(arg0, s32 *, 0xE4) = up.y;
    M2C_FIELD(arg0, s32 *, 0xE8) = up.z;
    if (M2C_FIELD(data_021555f8, s32 *, 0x24) != 0) {
        func_020afbc4(arg0);
        return;
    }
    if (temp_r4 == 0) {
        return;
    }
    if (func_021144f0(temp_r4, (s8 *) arg0 + 0xBC, FX_Mul(M2C_FIELD(arg0, s32 *, 0x24), 0x166C)) != 0) {
        func_020afbf4(arg0);
        func_0208b9c8((s8 *) arg0 + 0x190, 5);
    }
    func_020f5f64(arg0);
}
