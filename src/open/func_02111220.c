#include "m2c.h"

typedef struct Entry_s {
    unsigned short flags;
    short idx;
    unsigned char pad[0x10];
} Entry;

typedef struct T_s {
    unsigned char pad[0x20];
    Entry entries[3];
} T;

extern unsigned char *data_0215a04c;
extern void func_02111b88(void *, int);

void func_02111220(int id) {
    unsigned char *p = data_0215a04c;
    short idx;
    short next;
    Entry *e;
    func_02111b88(p, 0xC);
    *(unsigned short *) (p + 4) = 4;
    *(short *) (p + 0xE) = id;

    idx = *(short *) (p + 0xE);
    e = ((T *) data_0215a04c)->entries + idx;
    e->flags |= 1;
    e->idx = idx;

    next = (*(short *) (p + 0xE) + 1) % 3;
    e = ((T *) data_0215a04c)->entries + next;
    e->flags |= 1;
    e->flags |= 2;
    *(short *) (p + 0x1C) = next;
}
