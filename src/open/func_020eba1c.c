#include "m2c.h"

typedef struct {
    u32 a : 10;
    u32 b : 2;
    u32 c : 20;
    u32 d;
    u32 e;
} S12;

extern void *data_02159e70;
s32 func_02085d64(s32, s32);
void *func_02085d3c(s32, s32);
void func_020eba1c(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 n;
    S12 *p;
    s32 b;
    u8 *base;

    base = (u8 *) data_02159e70 + 0x1dec + arg0 * 0x294;
    b = M2C_FIELD((u8 *) M2C_FIELD(base, s32 *, 8) + arg1 * 8, s32 *, 0xc);
    n = func_02085d64(M2C_FIELD(base, s32 *, 0xc), b);
    p = (S12 *) func_02085d3c(M2C_FIELD(base, s32 *, 0xc), b);
    for (i = 0; i < n; i++, p++) {
        p->b = arg2;
    }
}
