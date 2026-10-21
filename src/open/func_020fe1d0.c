#include "m2c.h"
extern void *data_0215a034;
#pragma opt_strength_reduction off
extern u8 *data_02159e70;
extern void *data_0215a04c;
extern u8 *data_0214da84;
s32 func_020ec050(s32, u16);
void func_020eb9fc(s32, u16, s32);
void func_020d5a60(s32, s32);
void *func_020038a8(s32 arg0, s32 arg1);
void func_020fdc5c(s32 arg0);
void func_020fd470(void *arg0);
void func_020fdb30(void);
void func_020fe4cc(void);
void func_020fe1d0(s32 arg0) {
    s32 i;

    for (i = 0; i < 3; i++) {
        s32 t = M2C_FIELD((s8 *) data_0215a034 + i * 4, s32 *, 8);
        if (t != 0 && arg0 == M2C_FIELD((s8 *) t, s16 *, 0x8C)) {
            M2C_FIELD((s8 *) t, u16 *, 0x20) &= ~1;
        }
    }
}
