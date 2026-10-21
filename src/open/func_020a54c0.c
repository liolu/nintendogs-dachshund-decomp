#include "m2c.h"

extern s8 *data_021555f4;
void func_020b89d8(void *, s32);
void func_020b83e8(void *, s32);
void func_020b9900(void *, s32);
void func_020b8708(void *, s32);
void func_020bc328(void *, s32);
void func_020bc448(void *, s32);
void func_020bd1d8(void *, s32);
void func_020c2d14(void *, s32);
void func_020c1cf0(void *, s32);
void func_020c2cd0(void *, s32);
void func_020c1e28(void *, s32);

void func_020a54c0(void) {
    s8 *p = data_021555f4;

    switch (*(s16 *) (p + 0x84)) {
    case 1:
        func_020b89d8(p + 0x88, 4);
        return;
    case 2:
        func_020b83e8(p + 0x100, 4);
        return;
    case 3:
        func_020b9900(p + 0x108, 4);
        return;
    case 4:
        func_020b8708(p + 0x144, 4);
        return;
    case 5:
        func_020bc328(p + 0x1B4, 4);
        return;
    case 6:
        func_020bc448(p + 0x1F0, 4);
        return;
    case 7:
        func_020bd1d8(p + 0x21C, 4);
        return;
    case 8:
        func_020c2d14(p + 0x27C, 4);
        return;
    case 9:
        func_020c1cf0(p + 0x2C4, 4);
        return;
    case 10:
        func_020c2cd0(p + 0x2F0, 4);
        return;
    case 11:
        func_020c1e28(p + 0x318, 4);
        return;
    }
}
