#include "m2c.h"

extern void *data_02159e70;

s32 func_020cd9cc(s16 arg0);
void func_020daae8(s32 arg0, s32 arg1);
void func_020da540(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_020da3b8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_02099d3c(s32 arg0, s16 *arg1);

void func_020a5334(s32 arg0, s32 arg1) {
    s32 u;
    s16 *p;
    s32 v;

    u = *(s32 *) ((s8 *) data_02159e70 + 0x232C);
    p = (s16 *) func_020cd9cc(*(s16 *) ((s8 *) data_02159e70 + arg1 * 2 + 0x150));
    v = *(u16 *) ((s8 *) p + 0x5C);
    {
        s16 name[19] = {0};
        s16 num[4]    = {0};

        func_020daae8(0, arg0 + 0xC);
        func_020da540(0, u, arg0 + 0xC, arg0, 0, 2, (s32) p + 0xC);
        num[0] = 0x78;
        num[1] = '0' + v / 10 % 10;
        num[2] = '0' + v % 10;
        num[3] = 0;
        func_020da3b8(0, u, arg0 + 0xC, arg0 + 0xC, 7, -8, 2, (s32) num);
        func_02099d3c((s32) p + 0x60, name);
        func_020da540(0, u, arg0 + 0xC, arg0 + 0x6, 0, -2, (s32) name);
    }
}
