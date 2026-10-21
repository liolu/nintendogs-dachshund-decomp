#include "m2c.h"

typedef struct Entry_s {
    unsigned short flags;
    short idx;
    void *a;
    void *b;
    void *c;
    unsigned char pad[4];
} Entry;

typedef struct T_s {
    unsigned char pad[0x20];
    Entry entries[3];
} T;

extern unsigned char *data_0215a04c;
extern void func_02111b88(void *, int);
void func_02111134(int id, void *base) {
    unsigned char *p = data_0215a04c;
    short idx;
    short next;
    Entry *e;

    func_02111b88(p, 0xB);
    *(unsigned short *) (p + 4) = 5;
    *(short *) (p + 0xE) = id;

    idx = *(short *) (p + 0xE);
    e = ((T *) data_0215a04c)->entries + idx;
    e->flags |= 1;
    e->idx = idx;

    next = (*(short *) (p + 0xE) + 1) % 3;
    e = ((T *) data_0215a04c)->entries + next;
    e->flags |= 1;
    e->flags |= 2;
    e->a = base;
    e->b = (unsigned char *) base + 0x85C;
    e->c = (unsigned char *) base + 0x210C;
    *(short *) (p + 0x1C) = next;
}
