/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct L {
    s32 head;
    s32 tail;
    u16 cnt;
    u16 off;
} L;

void func_0207d7e8(L *l, s32 n);
void func_0207d784(L *l, s32 n);

void func_0207d704(L *l, s32 prev, s32 n) {
    if (prev == 0) {
        func_0207d7e8(l, n);
        return;
    }
    if (prev == l->head) {
        func_0207d784(l, n);
        return;
    }
    {
        s32 off                  = l->off;
        s32 *np                  = (s32 *) (n + off);
        s32 nx                   = *(s32 *) (prev + off);
        *np                      = nx;
        np[1]                    = prev;
        *(s32 *) (nx + off + 4)  = n;
        *(s32 *) (prev + l->off) = n;
        {
            u16 *c = &l->cnt;
            *c     = *c + 1;
        }
    }
}
