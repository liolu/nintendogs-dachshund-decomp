#include "m2c.h"
extern s32 *data_021555fc;
extern s32 data_0213e8fc;
s32 func_0200c488(s32, s32);
void func_020b777c(s32, s32, s32, s32, s32);

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

typedef struct {
    s16 a;
    u16 c;
} Out;

void func_020a7c84(void) {
    s8 *p;
    s32 *q;
    Out s;
    s32 b;
    s32 v[3];
    s32 w[3];

    p = (s8 *) func_0200c488(0xD, 0);
    v[0] = -M2C_FIELD(p, s32 *, 8);
    v[1] = -M2C_FIELD(p, s32 *, 0xC);
    v[2] = -M2C_FIELD(p, s32 *, 0x10);
    v[1] = data_0213e8fc;
    q = data_021555fc;
    w[0] = 0;
    w[1] = 0;
    w[2] = 0;
    func_020b777c((s32) v, (s32) w, (s32) &b, (s32) &s, (s32) &s.c);
    *(u16 *) q = s.c;
    M2C_FIELD(q, s32 *, 4) = v[1];
}
