#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

void func_0206823c(Vec3 *, Vec3 *, Vec3 *);
void func_02006a20(Vec3 *, Vec3 *);
void func_0206810c(Vec3 *, Vec3 *, Vec3 *);
extern s64 data_02124d28;
void func_020b758c(Vec3 *a, Vec3 *b, Vec3 *c, Vec3 *d, Vec3 *e, Vec3 *f) {
    s64 limit;
    s64 m;

    func_0206823c(e, d, c);
    limit = data_02124d28;
    m = (s64) c->x * c->x + (s64) c->y * c->y + (s64) c->z * c->z;
    if (m >= limit) {
        func_02006a20(c, c);
    }
    func_0206810c(f, c, a);
    m = (s64) a->x * a->x + (s64) a->y * a->y + (s64) a->z * a->z;
    if (m >= limit) {
        func_02006a20(a, a);
    }
    func_0206810c(c, a, b);
    m = (s64) b->x * b->x + (s64) b->y * b->y + (s64) b->z * b->z;
    if (m >= limit) {
        func_02006a20(b, b);
    }
}
