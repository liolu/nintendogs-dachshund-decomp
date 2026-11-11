#include "m2c.h"
void func_020f0d14(void *p, s32 arg);
s32 func_020f0af4(void *p);
s32 func_01ffdb08(s16 arg);
void func_020ea964(void);
s32 func_01ffdb08(s16);
s32 func_020276f8(s32);
s32 func_020449ac(s32);
s32 func_020ebab8(s32, u16);
void func_020e83d0(s32, u16, s32, s32, s32, s32, s32, s32);
void func_020d6a1c(void);
void func_020ea62c(s32 arg0) {
    s32 i;
    s16 *p;
    u8 *q;

    p = (s16 *) ((u8 *) arg0 + 0x1C84);
    func_020f0d14((u8 *) arg0 + 0xB8, 0);
    func_020f0d14((u8 *) arg0 + 0xD8, 0);
    func_020f0d14((u8 *) arg0 + 0xF8, 0);
    if (p[2] >= 0) {
        return;
    }
    q = (u8 *) arg0 + 4;
    for (i = 0; i < 3; i++) {
        if (func_020f0af4(q) != 0) {
            if (func_01ffdb08((s16) i) != 0) {
                p[2] = i;
            }
        }
        q += 0x3C;
    }
}
