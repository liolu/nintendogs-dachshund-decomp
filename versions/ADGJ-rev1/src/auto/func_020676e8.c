/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct G {
    u8 p[0x18];
    u32 f18;
    u32 f1c;
    u32 f20;
} G;
extern G data_0214e180;
extern void func_0206e1b8(void *, u32, u32);
typedef struct B {
    u8 p[8];
    u32 f8;
    u8 pc[0x14];
    u8 d[1];
} B;
s32 func_020676e8(B *b) {
    G *g  = &data_0214e180;
    u32 t = g->f18 & ~0x1FF;
    if (t == b->f8) {
        u32 off = g->f18 - t;
        u32 n   = 0x200 - off;
        if (n > g->f20) {
            n = g->f20;
        }
        func_0206e1b8(b->d + off, g->f1c, n);
        {
            u32 *p = &g->f18;
            *p     = *p + n;
        }
        {
            u32 *p = &g->f1c;
            *p     = *p + n;
        }
        {
            u32 *p = &g->f20;
            *p     = *p - n;
        }
    }
    if (g->f20 != 0) {
        return 1;
    }
    return 0;
}
