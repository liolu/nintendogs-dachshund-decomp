#include "m2c.h"
extern s32 data_02154228;
extern u16 *data_02159e68;
extern void *func_020d049c(s32 arg0);
extern void func_0200718c(void *arg0, void *arg1);
extern s32 func_020cd6bc(void *arg0);
extern s64 func_020cd01c(void *arg0, void *arg1, void *arg2);
extern void func_020d218c(void);
extern s32 func_020ced34(void);
extern void func_02117c20(void);
extern void func_020ce0e8(s32 arg0);
extern u8 func_020cec44(void);
extern void func_02096e4c(s32 arg0);
extern s32 func_020ceb08(void);
extern s32 func_020d01f8(void);
void func_021131b8(u8 *arg0) {
    s16 i;
    u8 a[0x10];
    u8 b[0x10];
    u8 *r9;
    u16 *p;

    for (i = 0; i < 3; i++) {
        r9 = (u8 *) func_020d049c(i);
        if (*(u16 *) r9 == 0xFFFF) {
            continue;
        }
        func_0200718c(a, b);
        if (func_020cd6bc(r9 + 0x7F8) != 0) {
            func_020cd01c(r9 + 0x7F8, a, b);
        }
        if (func_020cd6bc(r9 + 0x834) != 0) {
            func_020cd01c(r9 + 0x834, a, b);
        }
        if (func_020cd6bc(r9 + 0x848) != 0) {
            func_020cd01c(r9 + 0x848, a, b);
        }
    }
    func_020d218c();
    if (func_020ced34() != 0) {
        func_02117c20();
    }
    func_020ce0e8(data_02154228);
    func_02096e4c(func_020cec44());
    if (func_020ceb08() != 0) {
        p = data_02159e68;
        *p |= 1;
        *(s32 *) ((u8 *) data_02159e68 + 8) = 0;
    } else {
        p = data_02159e68;
        *p &= ~1;
    }
    *(s32 *) (arg0 + 0x28) = func_020d01f8();
    *(u16 *) (arg0 + 4) = 0xD;
    *(u16 *) (arg0 + 6) = 0;
}
