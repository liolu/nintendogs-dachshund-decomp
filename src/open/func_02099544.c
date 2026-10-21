#include "m2c.h"
extern u64 func_0205e15c(u32 arg0, u32 arg1);
extern void func_0206cdc0(u8 *arg0, u16 *arg1, s32 arg2);
extern void func_020977a0(u8 *arg0, u16 *arg1, s32 arg2, u16 *arg3);
extern u32 data_0213d1ac;
extern u16 data_02154e50[];
extern s32 data_02154e38;
void func_02099544(u8 *arg0) {
    struct Pair {
        u16 a;
        u16 b;
    };
    u16 local[2];
    u16 temp[2];
    u32 count;
    u32 i;
    u8 *p;

    i = 0;
    p = arg0 + 0xC;
    if (data_02154e38 == 0) {
        func_0206cdc0(p, local, 4);
        p += 4;
        for (; i < (count = data_0213d1ac); i += 2) {
            if ((u32) (func_0205e15c(i, count / 40) >> 32) == 0) {
                u32 j = (u32) func_0205e15c(i, count / 40);
                struct Pair *dst = (struct Pair *) (data_02154e50 + j * 2);
                *dst = *(struct Pair *) local;
            }
            func_020977a0(p, temp, 2, local);
            p++;
        }
        data_02154e38 = 1;
    }
}
