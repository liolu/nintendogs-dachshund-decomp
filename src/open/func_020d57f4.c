#include "m2c.h"
s32 func_02080c28(void);
s32 func_020c1750(void);
s32 func_020c1794(void);
s32 func_020c189c(void);
s32 func_020bee8c(void);
void func_02080c3c(s32);
s32 func_020c1988(void);
void func_020c1b28(s32);
void func_020c1b0c(s32, s32);
s32 func_020c1a70(void);
s32 func_020c1848(void);
s32 func_020c1780(void);
s32 func_020c1824(void);
s32 func_020c17a8(void);
s32 func_020bee78(void);
void func_020c19f4(void);
void func_020d57f4(s16 *arg0) {
    s32 handle;
    s32 flag1;
    s32 flag2;
    s32 ok;

    handle = func_02080c28();
    flag1 = func_020c1750();
    flag2 = func_020c1794();
    if (func_020c189c() == 5) {
        switch (func_020bee8c()) {
        case 0x14:
            ok = 1;
            goto test;
        }
    }
    ok = 0;
test:
    func_02080c3c(handle);
    switch (arg0[3]) {
    case 1:
        if (func_020c1988() != 0) {
            func_020c1b28(0);
            func_020c1b0c(*(s32 *) ((u8 *) arg0 + 0xC), *(s32 *) ((u8 *) arg0 + 0x10));
            arg0[3] = 2;
        }
        break;
    case 2:
        if (func_020c1a70() != 0) {
            arg0[3] = 3;
        }
        break;
    case 3:
        flag2 = 0;
        if (func_020c1848() != 0) {
            if (func_020c1780() != 0) {
                flag2 = 1;
            }
        } else if (func_020c1824() != 0) {
            flag2 = 1;
        }
        if (flag2 != 0) {
            if (func_020c17a8() != 0) {
                arg0[3] = 4;
            }
        }
        break;
    case 4:
        if (func_020bee78() != 0) {
            if (flag2 != 0) {
                arg0[3] = 5;
            }
        } else if (flag1 != 0) {
            arg0[3] = 5;
        }
        break;
    case 5:
        arg0[0] = 2;
        arg0[2] = 1;
        func_020c19f4();
        break;
    }
    if (arg0[3] == 5) {
        return;
    }
    if (arg0[4] != 0) {
        arg0[0] = 4;
        return;
    }
    if (ok == 0) {
        return;
    }
    func_020c19f4();
    arg0[3] = 2;
}
#pragma opt_propagation reset
