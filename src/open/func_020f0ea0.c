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
void func_020f0ea0(void *arg0) {
    u16 temp_r4;
    s32 var_r8;
    s16 temp_r7;
    s16 temp_r6;
    s32 var_r5;
    s32 temp_r0;
    s32 temp_r4_2;
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 0x14) = 3;
    M2C_FIELD(arg0, u16 *, 0x1C) = M2C_FIELD(arg0, u16 *, 0xE);
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return;
    }
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x1C);
    temp_r6 = M2C_FIELD(arg0, s16 *, 0x18);
    var_r8 = M2C_FIELD(arg0, u16 *, 0xE);
    var_r5 = var_r8 - temp_r4;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0xA) * var_r5 + temp_r6 * temp_r4;
    temp_r7 = M2C_FIELD(arg0, s16 *, 0x1A);
    temp_r4_2 = func_0205df50(temp_r0, var_r8);
    var_r0 = func_0205df50(M2C_FIELD(arg0, s16 *, 0xC) * var_r5 + temp_r7 * temp_r4, var_r8);
    func_020f0df0(arg0, (s16) (temp_r4_2 - temp_r6), (s16) (var_r0 - temp_r7));
}
