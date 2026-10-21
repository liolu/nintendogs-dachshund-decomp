#include "m2c.h"
#pragma opt_strength_reduction off
extern void *data_0214da84;
void *func_020ca574(void);
void func_020ca4b0(void *, void *);
void func_020ca4f4(void *, void *);
void *func_020caa6c(void *, s32, s32);
void func_020ca7ac(void *, s32);
void func_020ca7a0(void *, void *);
void *func_020c91d0(s32);
void *func_02041bfc(void *);
extern void func_02024148(void);
extern void func_0203e3b4(void);
#pragma opt_strength_reduction off
void func_02041ffc(void *arg0, void *arg1) {
    void *ctx;
    void *obj;
    u8 *base;
    s16 i;
    s32 zero;

    ctx = func_020ca574();
    func_020ca4b0(ctx, func_02024148);
    func_020ca4f4(arg1, ctx);
    zero = 0;
    for (i = 0; i < 3; i++) {
        base = data_0214da84;
        obj = func_020caa6c(arg0, 0x8C, *(s32 *) (base + 0x7408));
        *(u16 *) ((u8 *) obj + 0x20) |= 8;
        *(u16 *) ((u8 *) obj + 0x84) = 0;
        *(u16 *) ((u8 *) obj + 0x86) = 0;
        func_020ca4b0(obj, func_0203e3b4);
        func_020ca7ac(obj, 8);
        func_020ca7a0(obj, func_020c91d0(zero));
        *(s16 *) ((u8 *) obj + 0x88) = i;
        base = data_0214da84;
        *(void **) (base + i * 4 + 0x740C) = obj;
        base = data_0214da84;
        func_020ca4f4(arg1, (void *) *(s32 *) (base + i * 4 + 0x740C));
    }
    base = data_0214da84;
    *(s32 *) (base + 0x7420) = (s32) func_02041bfc(arg0);
    base = data_0214da84;
    func_020ca4f4(arg1, (void *) *(s32 *) (base + 0x7420));
}
