#include "m2c.h"
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
extern s32 func_0205df50(s32 dividend, s32 divisor);
extern void func_020f0df0(void *arg0, s16 arg1, s16 arg2);
s32 func_020f0af4(void *arg0) {
    s32 var_r4 = 0;

    if (M2C_FIELD(arg0, s32 *, 0x1C) != 5) {
        switch (M2C_FIELD(arg0, s32 *, 0x1C)) {
        case 1:
            M2C_FIELD(arg0, s16 *, 0x20) -= 1;
            if (M2C_FIELD(arg0, s16 *, 0x20) < 0) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 2;
                M2C_FIELD(arg0, s16 *, 0x20) = M2C_FIELD(arg0, s16 *, 0x1A);
                if (M2C_FIELD(arg0, u16 *, 0x4) != 0xFFFF) {
                    if (M2C_FIELD(arg0, s32 *, 0x8) != 0) {
                        func_020ebb0c(M2C_FIELD(arg0, s32 *, 0x0), M2C_FIELD(arg0, u16 *, 0x4),
                                      M2C_FIELD(arg0, u16 *, 0xC));
                    }
                    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
                        func_020ebbdc(M2C_FIELD(arg0, s32 *, 0x0), M2C_FIELD(arg0, u16 *, 0x4), 0, 0);
                    }
                }
                if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
                    ((void (*)(void *)) M2C_FIELD(arg0, s32 *, 0x2C))(arg0);
                }
            }
            break;
        case 2:
            M2C_FIELD(arg0, s16 *, 0x20) -= 1;
            if (M2C_FIELD(arg0, s16 *, 0x20) < 0) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 3;
                var_r4 = 1;
                if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
                    ((void (*)(void *)) M2C_FIELD(arg0, s32 *, 0x30))(arg0);
                }
            }
            break;
        case 3:
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            break;
        }
    }
    return var_r4;
}
