#include "m2c.h"
extern s32 data_0215449c[];
void func_02070e7c(void *arg0, s32 arg1, s32 arg2);

s32 func_0209032c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct S {
        u16 k0[4];
        u16 k1[4];
        u16 out[4];
        u8 pad[0x10];
        s32 fn[4];
    };
    struct S *s;
    s16 i;

    s = (struct S *) data_0215449c;
    for (i = 0; i < 4; i = (s16) (i + 1)) {
        if (s->fn[i] != 0 && s->k0[i] == arg0 && s->k1[i] == arg1) {
            func_02070e7c(&s->fn[i], arg2, arg3);
            s->out[i] = arg2;
            return i;
        }
    }
    return -1;
}
