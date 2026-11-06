/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Nd {
    s32 w0;
    u32 size;
    s32 w8;
    struct Nd *next;
} Nd;

typedef struct {
    Nd *head;
    u8 pad[0x12 - 4];
    u16 f;
} H;

typedef struct {
    u8 pad[0x24];
    H h;
} S;

s32 func_0207e00c(H *, Nd *, u32, u32, s32);

s32 func_0207df44(S *p, u32 a, s32 align) {
    H *h = &p->h;
    Nd *n;
    Nd *found;
    u32 best;
    u32 bestpos;
    s32 nofirst;
    u32 sz;
    u32 pos;
    u8 *data;

    nofirst = (u16) (h->f & 1) == 0;
    found   = 0;
    bestpos = 0;
    best    = -1;
    n       = h->head;
    if (n != 0) {
        do {
            data = (u8 *) n + 0x10;
            pos  = ~(align - 1) & ((align - 1) + (u32) data);
            sz   = n->size;
            if (sz >= a + (pos - (u32) data) && best > sz) {
                found   = n;
                best    = sz;
                bestpos = pos;
                if (nofirst != 0 || sz == a) {
                    break;
                }
            }
            n = n->next;
        } while (n != 0);
    }
    if (found == 0) {
        return 0;
    }
    return func_0207e00c(h, found, bestpos, a, 0);
}
