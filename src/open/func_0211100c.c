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

void func_0211100c(void) {
    unsigned char *p = data_0215a04c;
    unsigned char *b;
    Entry *e;
    func_02111b88(p, 0x12);
    *(unsigned short *) (p + 4) = 8;
    b = data_0215a04c + 0x20;
    e = (Entry *) b;
    e[0].flags |= 1;
    e[0].flags |= 2;
    b = data_0215a04c + 0x20;
    e = (Entry *) b;
    e[1].flags |= 1;
    e[1].flags |= 2;
    b = data_0215a04c + 0x20;
    e = (Entry *) b;
    e[2].flags |= 1;
    e[2].flags |= 2;
    *(unsigned short *) (p + 0x1c) = 0;
}
