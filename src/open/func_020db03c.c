#include "m2c.h"

typedef struct {
    u8 pad[4];
    u32 lo : 12;
    u32 hi : 4;
    u32 top : 16;
} Entry;

extern void *data_02159e74;

void func_020db03c(s32 arg0, s32 arg1, s32 arg2) {
    s8 *base = (s8 *) data_02159e74;
    s8 *recs;
    s8 *p;
    s32 i;
    s8 *q;

    recs = base + 4;
    if (arg2 < 0) {
        return;
    }
    if (arg2 > 0xF) {
        return;
    }
    if (arg1 < 0) {
        return;
    }
    if (arg1 > 0x18) {
        return;
    }
    p = recs + arg1 * 0x1B8;
    i = 0;
    q = p + 0x18;
    if (M2C_FIELD(q, s32 *, 8) <= 0) {
        return;
    }
    do {
        Entry *e = (Entry *) (M2C_FIELD(q, u32 *, 0x10) + i * 0xC);

        e->hi = arg2;
        i++;
    } while (i < M2C_FIELD(q, s32 *, 8));
}
