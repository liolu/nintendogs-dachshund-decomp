#include "m2c.h"
extern s32 data_0215449c[];
void func_02070f88(void *arg0, s32 arg1);
extern u8 data_02154578[];
extern u8 data_02154580[];
extern s32 *data_0215467c[];
extern volatile s32 data_02154670[];
void func_02070e7c(void *arg0, s32 arg1, s32 arg2);
void func_02070efc(u8 *, s32);
s32 func_020903bc(s32 arg0) {
    s32 *base;
    s16 i;
    s32 off;
    u16 mask;

    base = (s32 *) data_0215449c;
    for (i = 0; i < 4; i = (s16) (i + 1)) {
        mask = (u16) (1 << i);
        off = i * 4;
        if (*(s32 *) ((u8 *) base + off + 0x28) != 0) {
            if ((*(u16 *) ((u8 *) base + 0x1A) & mask) != 0) {
                func_02070f88((u8 *) base + 0x28 + off, arg0);
                *(u16 *) ((u8 *) base + 0x1A) &= ~mask;
                *(u16 *) ((u8 *) base + 0x18) &= ~mask;
                return i;
            }
        }
    }
    return -1;
}
