#include "m2c.h"
extern s32 *data_0215467c[];
extern volatile s32 data_02154670[];
extern s32 data_0215449c[];
extern u8 data_02154578[];
extern u8 data_02154580[];
void func_02070e7c(void *arg0, s32 arg1, s32 arg2);
void func_02070f88(void *arg0, s32 arg1);
void func_02070efc(u8 *, s32);
void func_0209582c(s32 arg0, s32 arg1) {
    u32 i;
    u32 bit;
    s32 *p;

    p = (s32 *) ((u8 *) data_0215467c[arg0] + 0x94);
    i = 0;
    bit = 1;
    if ((arg1 ^ data_02154670[arg0]) == 0) {
        return;
    }
    for (; i < 20; i++, bit <<= 1, p += 6) {
        if (bit & (arg1 ^ data_02154670[arg0])) {
            if (arg1 & bit) {
                if (p[1] == 1) {
                    p[0] = 1;
                }
            } else {
                p[0] = 0;
            }
        }
    }
    data_02154670[arg0] = arg1;
}
