#include "m2c.h"

void *func_020038a8(s32, s32);
void func_020ca530(void *, s32);
s32 *func_02044148(void);
void func_020ca4b0(void *, void *);
void func_0200c0f4(void *);

typedef struct {
    u8 pad[0x1C];
    s16 mode;
    s32 x;
    s32 y;
    s32 z;
    s32 vx;
    s32 b;
    s32 c;
} S;

S *func_0200c360(s32 arg0) {
    S *p;
    s32 *rng;
    s32 r;
    s16 a;

#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))

    p = (S *) func_020038a8(arg0, 0x38);
    func_020ca530(p, 0xFF);
    p->mode = 1;

    rng = func_02044148();
    r = *rng * 0x10DCD + 1;
    *rng = r;
    a = (s16) (u16) (r & 0xFFF);
    p->x = FX_Mul(a, 0x14000) - 0xA000;
    p->y = 0x3000;

    rng = func_02044148();
    r = *rng * 0x10DCD + 1;
    *rng = r;
    a = (s16) (u16) (r & 0xFFF);
    p->z = FX_Mul(a, 0x14000) - 0xA000;

    p->vx = 0;
    p->b = 0;
    p->c = 0;

    func_020ca4b0(p, (void *) func_0200c0f4);
    return p;
}
