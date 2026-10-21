#include "m2c.h"
extern s32 func_0205df50(s32 dividend, s32 divisor);
extern void func_020f0df0(void *arg0, s16 arg1, s16 arg2);
extern s32 func_020ce6b4(void);
extern void func_020f0fd8(s32 arg0);
extern void func_020f1098(s32 arg0);
extern void func_020f094c(s32 arg0, s32 arg1);
extern void func_020e24a8(void);
extern void func_020e251c(void);
extern void func_020eb9fc(s32 arg0, s32 arg1, s32 arg2);
extern void func_020d5a60(void *arg0, s32 arg1);
extern s32 func_020e5304(void);
extern void func_020e5064(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 func_020a5d54(void);
extern void func_020ef10c(s32 arg0);
void func_020f0f3c(void *arg0) {
    s32 x0;
    s32 y1;
    s32 y0;
    s32 w;
    s32 res1;
    s32 res2;

    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    M2C_FIELD(arg0, u16 *, 0x1C) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return;
    }
    w = M2C_FIELD(arg0, u16 *, 0x1C);
    y0 = M2C_FIELD(arg0, s16 *, 0x18);
    x0 = M2C_FIELD(arg0, u16 *, 0xE);
    y1 = M2C_FIELD(arg0, s16 *, 0x1A);
    res1 = func_0205df50(M2C_FIELD(arg0, s16 *, 0xA) * (x0 - w) + y0 * w, x0);
    res2 = func_0205df50(M2C_FIELD(arg0, s16 *, 0xC) * (x0 - w) + y1 * w, x0);
    func_020f0df0(arg0, (s16) (res1 - y0), (s16) (res2 - y1));
}
