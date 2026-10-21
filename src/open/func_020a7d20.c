#include "m2c.h"
extern s32 *data_021555fc;
void func_020b777c(s32, s32, s32, s32, s32);
void func_020a7d20(s32 *arg0) {
    typedef struct {
        s16 a;
        u16 c;
    } Out;
    s32 *p;
    Out s;
    s32 b;
    s32 v[3];

    p = data_021555fc;
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    func_020b777c((s32) arg0, (s32) v, (s32) &b, (s32) &s, (s32) &s.c);
    *(u16 *) p = s.c;
    M2C_FIELD(p, s32 *, 4) = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(p, u16 *, 8) = 0;
}
