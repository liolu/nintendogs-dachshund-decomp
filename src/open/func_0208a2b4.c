#include "m2c.h"
s32 func_0208a56c(void *arg0, s32 arg1);
s32 func_0208a2b4(void *arg0, s32 arg1, s32 arg2) {
    s32 newId;
    s32 flag = 0;
    s32 idx;

    *(u16 *)((char *)arg0 + 0x28) = arg1;
    switch (arg1) {
    case -2:
        newId = 0x30;
        break;
    case 0x35:
        newId = 0x31;
        flag = 1;
        break;
    case 0x36:
    case 0x37:
        newId = 0x32;
        flag = 1;
        break;
    case 0x38:
    case 0x39:
        newId = 0x35;
        flag = 1;
        break;
    case 0x3A:
        newId = 0x33;
        break;
    case 0x3B:
        newId = 0x34;
        break;
    default:
        return -1;
    }

    if (newId == -1) {
        return -1;
    }

    if (flag != 0) {
        idx = func_0208a56c(arg0, newId);
        if (idx == -1) {
            return idx;
        }
        *(s32 *)((char *)arg0 + idx * 4 + 0x2C) = arg2;
        *(u16 *)((char *)arg0 + 0x2A) |= 1 << idx;
        return idx;
    }
    return func_0208a56c(arg0, newId);
}
