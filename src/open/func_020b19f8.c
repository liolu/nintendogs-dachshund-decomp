#include "m2c.h"

extern u16 *data_0215a04c;
extern s32 func_020344e8(s32 arg0);
extern void func_020274a8(s32 arg0, void *arg1);
extern void func_0202706c(s32 arg0, s32 arg1);
extern void func_02027484(s32 arg0, void *arg1);

void func_020b19f8(s32 arg0, s32 arg1, s32 arg2) {
    if (*(s16 *) (arg0 + 0x90) != 1) {
        return;
    }
    if (*data_0215a04c == 1) {
        return;
    }
    if (func_020344e8(arg1) != 0) {
        return;
    }
    switch (arg2) {
    case 1:
        func_020274a8(arg1, (void *) (arg0 + 0xBC));
        func_0202706c(arg1, 4);
        break;
    case 2:
        func_0202706c(arg1, 3);
        break;
    case 3:
        func_0202706c(arg1, 2);
        break;
    case 4:
        func_02027484(arg1, (void *) (arg0 + 0xBC));
        func_0202706c(arg1, 1);
        break;
    }
}
