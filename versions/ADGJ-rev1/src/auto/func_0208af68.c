/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    u8 p0[0xC];
    u8 f0c[4];
    u32 flags;
    u32 pad;
    void *q;
} S;
typedef struct Q {
    u8 p[0x14];
    s32 v;
} Q;
extern void func_0207fc44(void *);
extern void func_0208a9ec(void *, s32);
extern void func_0208b1b4(void);
extern s32 func_0208b250(void *);
extern u32 func_0208120c(void);
extern void func_02081220(u32);
void func_0208af68(S *s, s32 a) {
    s32 b;
    if (s->flags & 0x100) {
        b = 1;
    } else {
        b = 0;
    }
    if (b != 0) {
        u32 *fp = &s->flags;
        u32 t   = *fp;
        void *q = s->q;
        *fp     = t & ~0x100;
        func_0208a9ec(q, a);
        if (func_0208b250(s) == 0) {
            return;
        }
        func_0208b1b4();
        return;
    } else {
        Q *q    = (Q *) s->q;
        u32 irq = func_0208120c();
        u32 *fp;
        q->v = a;
        fp   = &s->flags;
        *fp  = *fp & ~0x200;
        func_0207fc44(s->f0c);
        func_02081220(irq);
    }
}
