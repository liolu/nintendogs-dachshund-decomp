#include "m2c.h"
extern u8 data_0215449c[];
extern s32 data_021544c4[];
extern u8 data_0215422c[];
extern u8 data_0212942d[];
extern u8 data_0212942c[];
extern u16 data_0213ceb0;
s32 func_02090578(u8, s32, s32, s32);
s32 func_02089c5c(void *);
s32 func_02089c24(void *);
s32 func_0205df50(s32, s32);
void func_02070f88(s32 *, s32);
void func_02070ed4(s32 *, s32);
void func_02070d7c(s32 *, u16, s32);
s32 func_0208f588(u8 arg0, s32 arg1, void *arg2) {
    u8 *base;
    s32 idx;
    s32 *p;
    u8 b;
    s32 i;
    u8 a;
    u32 v;
    s32 level;
    u16 mask;

    base = data_0215449c;
    idx = func_02090578(arg0, arg1, 0x7f, 0);
    if (idx != -1) {
        p = &data_021544c4[idx];
        if (*p != 0) {
            i = M2C_FIELD(&data_0215422c, u16 *, 0x18) * 6;
            b = data_0212942d[i];
            v = func_02089c5c(arg2);
            a = data_0212942c[i];
            if (v <= a) {
                level = 0x7f;
            } else if (v < b) {
                level = func_0205df50((b - v) * 0x7f, b - a);
            } else {
                func_02070f88(p, 0);
                mask = (u16) (1 << idx);
                M2C_FIELD(base, u16 *, 0x18) &= ~mask;
                M2C_FIELD(base, u16 *, 0x1c) &= ~mask;
                return -1;
            }
            func_02070ed4(p, level);
            func_02070d7c(p, data_0213ceb0, func_02089c24(arg2));
        }
    }
    return idx;
}
