#include "m2c.h"
void func_0211436c(s32, s32);
s32 func_020a5d38(void);
s32 func_021144e4(s32, s32);
void func_020a5a1c(s32, s32);
s32 func_020a5fcc(void);
extern s32 data_0214da80;
void func_02033dd4(s32 arg0) {
    s8 *base;
    s8 i;
    s32 ok;

    func_0211436c(data_0214da80, M2C_FIELD(arg0, s8 *, 0x88));
    if (func_020a5d38() == 0) {
        return;
    }
    ok = 1;
    for (i = 0; i < 3; i++) {
        if (func_021144e4(data_0214da80, i) != -1) {
            ok = 0;
            break;
        }
    }
    if (ok == 0) {
        return;
    }
    func_020a5a1c(1, -1);
    base = (s8 *) func_020a5fcc() + 0x88;
    *(s32 *) (base + 0x6C) = 0;
}
