#include "m2c.h"

typedef struct {
    u16 count;
    u8 unk2[2];
    s32 off4;
    u8 unk8[4];
    s32 offC;
} Hdr;

extern s32 func_02073944(s32);
extern s32 func_02073918(s32, s32);
void func_02073888(Hdr *h) {
    u16 i;
    s32 delta;
    s32 p;

    h->off4 += (s32) h;
    delta = func_02073944((s32) h);
    for (i = 0; i < h->count; i++) {
        p = func_02073918((s32) h, i);
        *(s32 *) (p + 4) += delta;
    }
    p = h->offC;
    if (p == 0) {
        return;
    }
    h->offC = p + (s32) h;
    p = h->offC;
    *(s32 *) (p + 4) += p;
    h->offC = p;
}
