#include "m2c.h"
extern void *data_02159e70;
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
void func_020efe00(s32 arg0) {
    s32 state;
    s16 *prev_p;

    prev_p = (s16 *) (arg0 + 0x1CB8);
    state = func_020ce6b4();
    if (state != *prev_p) {
        switch (state) {
        case 0:
            func_020f0fd8(arg0 + 0x294);
            func_020f0fd8(arg0 + 0x2B4);
            func_020f0fd8(arg0 + 0x2D4);
            func_020e24a8();
            break;
        case 1:
            func_020f1098(arg0 + 0x294);
            func_020f0fd8(arg0 + 0x2B4);
            func_020f0fd8(arg0 + 0x2D4);
            func_020e24a8();
            break;
        case 2:
            func_020f1098(arg0 + 0x294);
            func_020f1098(arg0 + 0x2B4);
            func_020f1098(arg0 + 0x2D4);
            M2C_FIELD(data_02159e70, s32 *, 0x5034) = 0;
            func_020e251c();
            break;
        }
    }
    if (state != 0) {
        func_020f094c(arg0 + 0x18, 1);
    } else {
        func_020f094c(arg0 + 0x18, 0);
    }
    if (state == 2) {
        M2C_FIELD(data_02159e70, s32 *, 0x5034) = 0;
        func_020eb9fc(2, 0x11, 1);
    } else {
        M2C_FIELD(data_02159e70, s32 *, 0x5034) = 1;
        func_020eb9fc(2, 0x11, 0);
    }
    if (state == 2) {
        func_020f094c(arg0 + 0x54, 1);
    } else {
        func_020f094c(arg0 + 0x54, 0);
    }
    *prev_p = state;
}
