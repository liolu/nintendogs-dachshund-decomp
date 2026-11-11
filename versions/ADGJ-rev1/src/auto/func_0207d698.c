/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct L {
    s32 head;
    s32 tail;
    u16 cnt;
    u16 off;
} L;

typedef struct N {
    s32 prev;
    s32 next;
} N;

void func_0207d698(L *l, u8 *obj) {
    N *n  = (N *) (obj + l->off);
    s32 p = n->prev;
    if (p == 0) {
        l->head = n->next;
    } else {
        ((N *) (p + l->off))->next = n->next;
    }
    p = n->next;
    if (p == 0) {
        l->tail = n->prev;
    } else {
        *(s32 *) (p + l->off) = n->prev;
    }
    n->prev = 0;
    n->next = 0;
    l->cnt  = l->cnt - 1;
}
