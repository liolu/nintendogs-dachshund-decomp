#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} S12;

void func_0200db3c(s32 p) {
    s32 r;
    s32 found;
    void *dog;
    s8 i;
    s32 local[3];

    r = func_02036164(p);
    found = -1;
    dog = 0;
    if (r != 0) {
        *(S12 *) (p + 0x26C) = *(S12 *) (r + 8);
        func_0203910c(p);
        func_02037130(p, 0x302);
    }
    for (i = 0; i < 3; i++) {
        if (func_0203278c(p, i) != 0) {
            dog = (void *) func_01ffdb08(i);
            if (dog != 0) {
                func_02027658((s32) dog, local);
                func_0206823c(local, p + 0x2A0, local);
                if (func_02009f28(local, p + 0x1A4) != 0) {
                    found = i;
                    break;
                }
            }
        }
    }
    if (func_02028714(p, 0, 1) != 0) {
        if (func_02022e04(p, 0x28) != 0 || func_02022e04(p, 0x29) != 0) {
            func_02029248(p);
        }
        return;
    }
    if (func_0203560c(p, 0) != 0) {
        if (func_02022e04(p, 0x28) != 0 || func_02022e04(p, 0x29) != 0) {
            func_02029248(p);
        }
        return;
    }
    if (found != -1) {
        if (func_02022e04(p, 0x28) != 0 || func_02022e04(p, 0x29) != 0) {
            func_02029248(p);
        }
        func_02035fcc(p, (s16) found);
        func_020554bc(p, dog);
        return;
    }
    if (r == 0) {
        if (func_02022e04(p, 0x28) != 0 || func_02022e04(p, 0x29) != 0) {
            func_02029248(p);
        }
        func_0202fa5c(p);
        return;
    }
    if (*(s8 *) (p + 0xA0) == 0) {
        func_0202f6e8(p);
        return;
    }
    if (*(u16 *) (p + 0xFC) <= 0x190) {
        return;
    }
    if (func_02022e04(p, 0x28) != 0 || func_02022e04(p, 0x29) != 0) {
        func_02029248(p);
    }
    func_0202fa5c(p);
}
