#include "m2c.h"

typedef struct {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 b3 : 1;
    u32 b4 : 1;
    u32 b5 : 1;
    u32 b6 : 1;
    u32 b7 : 1;
    u32 b8 : 1;
    u32 b9 : 1;
    u32 b10 : 1;
    u32 b11 : 1;
    u32 b12 : 1;
    u32 b13 : 1;
    u32 b14 : 1;
    u32 b15 : 1;
    u32 b16 : 1;
    u32 b17 : 1;
    u32 b18 : 1;
    u32 b19 : 1;
    u32 b20 : 1;
    u32 b21 : 1;
    u32 b22 : 1;
    u32 b23 : 1;
    u32 b24 : 1;
    u32 b25 : 1;
    u32 b26 : 1;
    u32 b27 : 1;
    u32 b28 : 1;
    u32 b29 : 1;
    u32 b30 : 1;
    u32 b31 : 1;
} WordBits;

typedef struct SPLEmitter SPLEmitter;
typedef struct SPLManager SPLManager;

typedef struct SPLSource {
    u32 unk00;
    u8 pad04[0x2E];
    u16 unk32;
    u8 pad34[4];
    u16 unk38;
} SPLSource;

struct SPLEmitter {
    SPLEmitter *next;
    u8 pad04[8];
    u32 unk0C;
    u8 pad10[4];
    u32 unk14;
    SPLSource **unk18;
    u32 flags;
    u8 pad20[0x18];
    u16 unk38;
};

struct SPLManager {
    u8 pad00[4];
    SPLEmitter *first;
    u32 unk08;
    u32 unk0C;
};

void func_02081e6c(SPLManager *mgr, SPLEmitter *e);
u32 func_02085a98(SPLEmitter **p, SPLEmitter *e);
void func_02085b48(u32 *p, u32 v);

void func_02081380(SPLManager *mgr) {
    SPLEmitter *e;
    SPLEmitter *next;
    SPLSource *p;
    u32 flags;
    u32 r;

    e = mgr->first;
    if (e == 0) {
        return;
    }
    do {
        flags = e->flags;
        p = *e->unk18;
        next = e->next;
        if (((WordBits *) &e->flags)->b4 == 0) {
            if (e->unk38 >= p->unk32) {
                e->flags = flags | 0x10;
                e->unk38 = 0;
            }
        }
        if (((WordBits *) &e->flags)->b2 == 0) {
            func_02081e6c(mgr, e);
        }
        if ((((WordBits *) &p->unk00)->b14 != 0) && p->unk38 != 0 &&
                (((WordBits *) &e->flags)->b4 != 0) && e->unk38 > p->unk38 ||
            ((WordBits *) &e->flags)->b0 != 0) {
            if (e->unk0C == 0 && e->unk14 == 0) {
                r = func_02085a98(&mgr->first, e);
                func_02085b48(&mgr->unk0C, r);
            }
        }
        e = next;
    } while (e != 0);
}
