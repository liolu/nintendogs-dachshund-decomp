#include "m2c.h"

typedef struct {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x88];
    s32 fB0;
    s32 fB4;
    s32 fB8;
    u8 padBC[0xD4];
    s32 f190;
    u8 pad194[0x80];
    s32 f214;
} Obj;

void func_020f6474(Obj *arg0, s32 arg1) {
    s32 *p;
    s32 b0;
    s32 b4;
    s32 b8;
    s32 sum;
    u32 v;

    p = (s32 *) arg0->f214;
    func_020b182c(arg0, arg1, 0);
    if (arg0->fB0 > 0x802) {
        arg0->fB0 = 0x802;
    }
    if (arg0->fB4 > 0x802) {
        arg0->fB4 = 0x802;
    }
    if (arg0->fB8 > 0x802) {
        arg0->fB8 = 0x802;
    }
    if (arg0->fB0 < -0x802) {
        arg0->fB0 = -0x802;
    }
    if (arg0->fB4 < -0x802) {
        arg0->fB4 = -0x802;
    }
    if (arg0->fB8 < -0x802) {
        arg0->fB8 = -0x802;
    }
    arg0->fB4 += 0x29;
    b4 = arg0->fB4;
    b0 = arg0->fB0;
    b8 = arg0->fB8;
    if (b4 <= 0) {
        b4 = -b4;
    }
    if (b0 <= 0) {
        b0 = -b0;
    }
    if (b8 <= 0) {
        b8 = -b8;
    }
    sum = b0 + b4 + b8;
    v = (u32) (((s64) sum * arg0->f24 + 0x800) >> 12);
    if (M2C_FIELD(p, s32 *, 0x14) == 0) {
        func_0208b948(&arg0->f190, 2, (s32) v);
    }
}
