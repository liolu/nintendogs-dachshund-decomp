#include "m2c.h"
s32 func_020ec050(s32, u16);
void func_020eb9fc(s32, u16, s32);
void func_020d5a60(s32, s32);
extern u8 *data_02159e70;
extern void *data_0215a034;
extern void *data_0215a04c;
extern u8 *data_0214da84;
void *func_020038a8(s32 arg0, s32 arg1);
void func_020fdc5c(s32 arg0);
void func_020fd470(void *arg0);
void func_020fdb30(void);
void func_020fe4cc(void);
void func_020d5bb4(s32 arg0, s32 arg1, s32 arg2, u16 arg3, u16 arg4, s32 arg5, s32 arg6, u16 arg7) {
    s32 i;
    s32 v;

    *(s32 *) (arg0 + 0x0) = arg1;
    *(u16 *) (arg0 + 0x18) = arg3;
    *(u16 *) (arg0 + 0x1A) = arg4;
    *(u16 *) (arg0 + 0x1C) = arg7;
    *(s32 *) (arg0 + 0x20) = arg5;
    *(s32 *) (arg0 + 0x24) = arg6;
#pragma opt_strength_reduction off
    for (i = 0, v = arg2; i < 10; i++, v++) {
        *(u16 *) (arg0 + i * 2 + 0x4) = func_020ec050(arg1, v);
        func_020eb9fc(arg1, v, 0);
    }
    func_020d5a60(arg0, arg5);
}
