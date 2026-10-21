#include "m2c.h"

extern s32 func_02110cc0(s32 arg0, s32 arg1);
extern char data_02130fb4[];
extern u16 *data_0215a04c;

typedef struct {
    s32 f0;
    u16 f4;
    u16 f6;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
    s32 f24;
    s32 f28;
} Out;

void func_02110bd8(Out *o, s32 arg1, s32 arg2) {
    s32 v;
    u16 x;

    v = func_02110cc0(arg1, arg2);
    o->f0 = 0;
    o->f4 = 8;
    o->f6 = (u16) v;
    o->f8 = 0x1000;
    o->f18 = 0;
    o->f1C = 0;
    o->f20 = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f10 = 0;
    o->f14 = *(s32 *) (data_02130fb4 + v * 0x1C + 0x14);
    x = *data_0215a04c;
    switch (x) {
        case 0xC:
            o->f14 = 0xA000;
            break;
        case 0x8003:
            if (o->f14 > 0x13000) {
                o->f14 = 0x13000;
            }
            break;
    }
    o->f8 = 0x1000;
    if (v == 0x1B) {
        o->f10 = 0x5000;
    }
    o->fC = (s32) (((s64) o->f14 * o->f8 + 0x800) >> 12);
}
