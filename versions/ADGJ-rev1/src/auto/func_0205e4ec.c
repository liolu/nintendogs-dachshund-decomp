/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    s32 f0;
    u32 f4;
    u8 p8[0x10];
    s32 f18;
    s32 f1c;
    u8 p20[4];
    s32 f24;
    s32 f28;
    u8 p2c[0x14];
    s32 (*f40)(s32, s32, void *, s32);
    u8 p44[4];
    s32 f48;
} S;
extern void func_0205e588(S *);
extern void func_0205e5bc(s32, void *);
s32 func_0205e4ec(S *s, s32 *out) {
    s32 d = s->f24 - s->f1c;
    if (d != 0) {
        s32 r;
        s->f28 = d;
        if (((s->f4 << 0x13) >> 0x1f) == 0) {
            func_0205e5bc(s->f1c, &s->f28);
        }
        r = s->f40(s->f0, s->f1c, &s->f28, s->f48);
        if (out != 0) {
            *out = s->f28;
        }
        if (r != 0) {
            return r;
        }
        {
            s32 *p = &s->f18;
            *p     = *p + s->f28;
        }
    }
    func_0205e588(s);
    return 0;
}
