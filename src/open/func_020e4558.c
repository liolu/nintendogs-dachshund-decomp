#include "m2c.h"
extern M2C_UNK func_020eb9fc(s32, u16, M2C_UNK);
extern void func_020d5a60(void *arg0, s32 arg1);
void func_020e4558(s32 arg0) {
    s32 *ptr;
    s32 i;

    ptr = (s32 *) ((s8 *) arg0 + 0x144);
    for (i = 0; i < 10; i++) {
        func_020eb9fc(0, i, 0);
    }
    for (i = 0; i < 10; i++) {
        func_020eb9fc(0, i + 0xA, 0);
    }
    for (i = 0; i < 3; i++) {
        func_020eb9fc(0, i + 0x1B, 1);
    }
    for (i = 0; i < 3; i++) {
        func_020eb9fc(0, i + 0x20, 1);
        func_020eb9fc(0, i + 0x14, 0);
    }
    for (i = 0; i < 3; i++) {
        func_020eb9fc(0, i + 0x23, 1);
    }
    if (M2C_FIELD(arg0, u16 *, 0xA4) == 10) {
        func_020eb9fc(0, 0x1E, 1);
        func_020eb9fc(0, 0x1F, 0);
    } else {
        func_020eb9fc(0, 0x1E, 0);
        func_020eb9fc(0, 0x1F, 1);
    }
    if (M2C_FIELD(arg0, u16 *, 0xA8) != 1) {
        func_020eb9fc(0, 0x26, 0);
        func_020eb9fc(0, 0x27, 1);
    } else {
        func_020eb9fc(0, 0x26, 1);
        func_020eb9fc(0, 0x27, 0);
    }
    func_020d5a60((void *) (arg0 + 4), ptr[1]);
    if (*ptr == 3 || *ptr == 0) {
        for (i = 0; i < 2; i++) {
            func_020eb9fc(0, i + 0x17, 0);
        }
        func_020eb9fc(0, 0x1A, 0);
        func_020eb9fc(0, 0x19, 0);
    } else {
        if (ptr[1] != 1) {
            func_020eb9fc(0, 0x19, 1);
            func_020eb9fc(0, 0x1A, 0);
        } else {
            func_020eb9fc(0, 0x19, 0);
            func_020eb9fc(0, 0x1A, 1);
        }
    }
    switch (*ptr) {
    case 1:
        func_020eb9fc(0, 0x16, 1);
        break;
    case 2:
        func_020eb9fc(0, 0x15, 1);
        break;
    case 3:
        func_020eb9fc(0, 0x14, 1);
        break;
    }
    if (ptr[2] > 0) {
        ptr[2] = ptr[2] - 1;
        if (ptr[2] == 0) {
            *ptr = 0;
        }
    }
    if (M2C_FIELD(arg0, u16 *, 0xA4) >= 100) {
        M2C_FIELD(arg0, u16 *, 0x46) = 3;
    } else {
        M2C_FIELD(arg0, u16 *, 0x46) = 2;
        func_020eb9fc(0, 0x1D, 0);
    }
    func_020d5a60((void *) (arg0 + 0x2C), M2C_FIELD(arg0, u16 *, 0xA4));
    func_020d5a60((void *) (arg0 + 0x54), M2C_FIELD(arg0, u16 *, 0xA6));
    func_020d5a60((void *) (arg0 + 0x7C), M2C_FIELD(arg0, u16 *, 0xA8));
}
