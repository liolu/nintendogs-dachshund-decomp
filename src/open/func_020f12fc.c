#include "m2c.h"
extern s8 *data_0215a044;
extern void func_020d5a60(void *arg0, s32 arg1);
extern void func_020f0d14(void *arg0, s32 arg1);
extern s32 func_020e3b2c(void);
extern void func_020f0fd8(void *arg0);
extern s32 func_020ec078(void);
extern void func_020db44c(s32 arg0, s32 arg1);
extern void func_020da98c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_020f1098(void *arg0);
extern void func_020f1644(s32 arg0, s32 arg1);
extern void func_020d6068(s32 arg0, s32 arg1, s32 arg2);
void func_020f12fc(s32 arg0) {
    s8 *q;
    s8 *p;
    s32 v;
    s32 r6;

    q = (s8 *) M2C_FIELD(data_0215a044, s32 *, 4);
    p = (s8 *) (arg0 + 0x150);
    M2C_FIELD(arg0, s32 *, 0x30) = (u16) ((M2C_FIELD(q, s16 *, 2) + 0x3B) / 60);
    func_020d5a60((void *) (arg0 + 8), M2C_FIELD(arg0, s32 *, 0x30));
    func_020f0d14((void *) (arg0 + 0x40), 1);
    func_020f0d14((void *) (arg0 + 0x60), 1);
    if (func_020e3b2c() == 4) {
        func_020f0fd8((void *) (arg0 + 0x40));
        func_020f0fd8((void *) (arg0 + 0x60));
    } else if (M2C_FIELD(p, s32 *, 0x20) != 0) {
        r6 = ((s32 (*)(s32)) func_020ec078)(0);
        func_020db44c(M2C_FIELD(arg0, s32 *, 0x34), 0);
        func_020da98c(1, r6, 4, 0, M2C_FIELD(p, s32 *, 0x1C));
        M2C_FIELD(p, s32 *, 0x20) = 0;
        func_020f1098((void *) (arg0 + 0x40));
        func_020f1098((void *) (arg0 + 0x60));
    }
    func_020f1644(0, arg0);
    v = M2C_FIELD(arg0, s32 *, 0x3C);
    if (v <= 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = v - 1;
    v = M2C_FIELD(arg0, s32 *, 0x3C);
    if (v == 0x75) {
        func_020d6068(0, 4, 1);
        return;
    }
    if (v != 0) {
        return;
    }
    func_020d6068(0, 4, 0);
}
