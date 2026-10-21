#include "m2c.h"

typedef struct { u16 base : 12; u16 mode : 2; u16 unk : 2; } BF;
typedef union { BF b; s16 s; } U;
typedef struct {
    U a;
    U b;
    u8 unk4;
    u8 unk5;
} Entry6;

s32 func_02085e80(void *arg0);

s32 func_02085ca0(U arg0, s32 arg1);
s32 func_02085c58(U arg0, s32 arg1);

/* Index of the entry whose box contains (x, y), or -1. Needs mwcc 1.2/b56: 1.2/sp2p3 passes the 2-byte union by
   value with an r11 frame and sp moves around each call, b56 with one static sp-4 temp like the original. */
s32 func_02085d7c(void *obj, s32 x, s32 y) {
    s32 i;
    Entry6 *e;
    s32 x0, y0, x1, y1;

    e = (Entry6 *)((u8 *)obj + 8);
    for (i = 0; i < func_02085e80(obj); i++, e++) {
        x0 = func_02085ca0(e->a, e->unk4);
        y0 = func_02085c58(e->b, e->unk5);
        x1 = x0 + e->unk4;
        y1 = y0 + e->unk5;
        if (x0 <= x && x <= x1 && y0 <= y && y <= y1) {
            return i;
        }
    }
    return -1;
}
