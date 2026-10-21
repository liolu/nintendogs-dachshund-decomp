#include "m2c.h"

s32 *func_02044148(void);
void func_02068270(s32, s32, s32);

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

void func_0200c0f4(S *p) {
    s32 *rng;
    s32 r;

#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))

    if (p->mode != 1) {
        return;
    }
    func_02068270((s32) &p->x, (s32) &p->vx, (s32) &p->x);
    if (p->y > 0x6000) {
        p->y = 0x6000;
    }
    if (p->y < 0) {
        p->y = 0;
    }

    rng = func_02044148();
    r = *rng * 0x10DCD + 1;
    *rng = r;
    p->vx = FX_Mul(p->vx, 0xE6A) - 0x80 + FX_Mul((s16) (u16) (r & 0xFFF), 0x100) +
            FX_Mul(p->x, -4);

    rng = func_02044148();
    r = *rng * 0x10DCD + 1;
    *rng = r;
    p->b = FX_Mul(p->b, 0xE6A) - 0x80 + FX_Mul((s16) (u16) (r & 0xFFF), 0x100);

    rng = func_02044148();
    r = *rng * 0x10DCD + 1;
    *rng = r;
    p->c = FX_Mul(p->c, 0xE6A) - 0x80 + FX_Mul((s16) (u16) (r & 0xFFF), 0x100) +
           FX_Mul(p->z, -4);
}
