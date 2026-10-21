#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

typedef struct {
    s32 m[9];
} Mtx33;

extern u8 data_02150e58[];
extern void *data_0215a064;
extern const s64 data_02124d28;

s32 func_02044980(s16 arg0);
void func_02068270(Vec *arg0, Vec *arg1, Vec *arg2);
s32 func_02006a20(Vec *arg0, Vec *arg1);
void func_0206823c(Vec *arg0, Vec *arg1, Vec *arg2);
void func_0206810c(const Vec *arg0, const Vec *arg1, Vec *arg2);

void func_02100a4c(void *arg0, Mtx33 *arg1) {
    Vec a;
    Vec d;
    Vec b;
    Vec c;

    func_02044980(M2C_FIELD(arg0, s16 *, 0x9C));
    a.x = M2C_FIELD(data_02150e58, s32 *, 0x4C);
    a.y = M2C_FIELD(data_02150e58, s32 *, 0x58);
    a.z = M2C_FIELD(data_02150e58, s32 *, 0x64);
    a.x >>= 2;
    a.y >>= 2;
    a.z >>= 2;
    b = *(Vec *) (M2C_FIELD(data_0215a064, u8 **, 0x1C) + 0x48);
    c.x = b.x >> 2;
    c.y = b.y >> 2;
    c.z = b.z >> 1;
    func_02068270(&b, &a, &b);
    if ((s64) b.x * b.x + (s64) b.y * b.y + (s64) b.z * b.z >= data_02124d28) {
        func_02006a20(&b, &b);
    }
    d.x = 0;
    d.y = 0x1000;
    d.z = 0;
    func_0206823c(&d, &c, &d);
    if ((s64) d.x * d.x + (s64) d.y * d.y + (s64) d.z * d.z >= data_02124d28) {
        func_02006a20(&d, &d);
    }
    func_0206810c(&d, &b, &a);
    func_0206810c(&a, &d, &b);
    arg1->m[0] = a.x;
    arg1->m[1] = a.y;
    arg1->m[2] = a.z;
    arg1->m[3] = d.x;
    arg1->m[4] = d.y;
    arg1->m[5] = d.z;
    arg1->m[6] = b.x;
    arg1->m[7] = b.y;
    arg1->m[8] = b.z;
}
