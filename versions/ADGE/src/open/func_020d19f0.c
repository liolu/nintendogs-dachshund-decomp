#include "m2c.h"

extern void func_020d1bc4(s32 arg0, s32 arg1, s32 arg2);
extern void func_020d1bd4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_020d19f0(s32 arg0) {
    u16 i, j;

    for (i = 0; i < 3; i++) {
        func_020d1bc4(1, i, 0);
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 0x14; j++) {
            func_020d1bc4(2, i, j);
        }
    }
    func_020d1bd4(0, 0, 0, arg0);
    func_020d1bc4(6, 0, 0);
    func_020d1bc4(3, 0, 0);
    for (i = 0; i < 5; i++) {
        func_020d1bc4(4, i, 0);
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 0x14; j++) {
            func_020d1bc4(5, i, j);
        }
    }
}
