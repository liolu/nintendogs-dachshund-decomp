#include "m2c.h"
extern s8 *data_02159e70;
extern void func_020d5a60(void *arg0, s32 arg1);
extern s32 func_020e5304(void);
extern void func_020e5064(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 func_020a5d54(void);
extern void func_020eb9fc(s32 arg0, s32 arg1, s32 arg2);
extern void func_020ef10c(s32 arg0);
extern s32 func_020ce6b4(void);
extern void func_020f0fd8(s32 arg0);
extern void func_020f1098(s32 arg0);
extern void func_020f094c(s32 arg0, s32 arg1);
extern void func_020e24a8(void);
extern void func_020e251c(void);
extern s32 func_0205df50(s32 dividend, s32 divisor);
extern void func_020f0df0(void *arg0, s16 arg1, s16 arg2);
void func_020f0384(s32 arg0) {
    s32 *tab;
    s32 buf[3];
    s32 i;
    s32 r;

    tab = (s32 *) (data_02159e70 + 0x53F4);
    if (M2C_FIELD(tab, s32 *, 0x28) != 0) {
        func_020d5a60((void *) (arg0 + 8), M2C_FIELD(tab, s32 *, 0));
        func_020d5a60((void *) (arg0 + 0x30), M2C_FIELD(tab, s32 *, 4));
        func_020d5a60((void *) (arg0 + 0x58), M2C_FIELD(tab, s32 *, 8));
        if (func_020e5304() == 0) {
            func_020d5a60((void *) (arg0 + 0x80), M2C_FIELD(tab, s32 *, 0xC));
            func_020d5a60((void *) (arg0 + 0xA8), M2C_FIELD(tab, s32 *, 0x10));
        }
    }
    func_020e5064(2, 0x11, 0x12, 0xFFFF);
    r = func_020a5d54();
    for (i = 0; i < 3; i++) {
        buf[i] = 0;
    }
    if (r >= 0 && r < 3) {
        buf[r] = 1;
    }
    func_020eb9fc(2, 0xD, buf[0]);
    func_020eb9fc(2, 0xE, buf[1]);
    func_020eb9fc(2, 0xF, buf[2]);
    func_020ef10c(0xD);
}
