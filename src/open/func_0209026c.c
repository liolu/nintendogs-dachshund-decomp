#include "m2c.h"
extern s32 data_0215449c[];
void func_02070e7c(void *arg0, s32 arg1, s32 arg2);
extern u8 data_02154578[];
extern u8 data_02154580[];
extern s32 *data_0215467c[];
extern volatile s32 data_02154670[];
void func_02070f88(void *arg0, s32 arg1);
void func_02070efc(u8 *, s32);
void func_0209026c(s32 arg0) {
    s16 i;
    s32 *base;
    s32 *p;

    base = (s32 *) data_0215449c;
    p = (s32 *) ((u8 *) base + 0x28);
    i = 0;
    for (; i < 4; i = (s16) (i + 1)) {
        if (M2C_FIELD((u8 *) base + i * 4, s32 *, 0x28) != 0) {
            func_02070e7c(p, M2C_FIELD((u8 *) base + i * 2, u16 *, 0x10), arg0);
        }
        p++;
    }
}
