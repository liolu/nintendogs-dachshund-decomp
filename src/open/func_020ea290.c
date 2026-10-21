#include "m2c.h"
void func_020ea964(void);
s32 func_01ffdb08(s16);
s32 func_020276f8(s32);
s32 func_020449ac(s32);
s32 func_020ebab8(s32, u16);
void func_020e83d0(s32, u16, s32, s32, s32, s32, s32, s32);
void func_020d6a1c(void);
void func_020f0d14(void *p, s32 arg);
s32 func_020f0af4(void *p);
void func_020ea290(s32 *arg0) {
    s32 i;
    s32 obj;
    s32 entry;
    u16 idx;

    if (arg0[0] == 1) {
        func_020ea964();
    } else if (arg0[0] == 2) {
        for (i = 0; i < 3; i++) {
            entry = func_01ffdb08((s16) i);
            if (entry != 0) {
                obj = func_020449ac(func_020276f8(entry));
                idx = (u16) (i + 3);
                func_020e83d0(2, idx, func_020ebab8(2, idx), M2C_FIELD((u8 *) obj, s32 *, 0x88),
                              M2C_FIELD((u8 *) obj, s32 *, 0x8C), M2C_FIELD((u8 *) obj, s32 *, 0x90), 1, 1);
            }
        }
    }
    arg0[0]++;
    if (arg0[0] > 0x14) {
        func_020d6a1c();
    }
}
