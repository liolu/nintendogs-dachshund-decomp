#include "m2c.h"

extern s16 data_0215a060;
void func_020e16dc();
void func_020e1674();
void func_02118c10();

void func_02116dfc(u8 *arg0, s32 arg1, s32 arg2) {
    u16 a;
    u16 b;

    *(u16 *) (arg0 + 0x28) = arg1;
    *(u16 *) (arg0 + 0x80) = *(s16 *) (arg0 + 0x26);
    *(u16 *) (arg0 + 0x2E) = 4;
    *(u16 *) (arg0 + 0x30) = 0;

    switch (arg1) {
        case 0:
        case 3:
        case 7:
        case 10:
        case 14:
        case 17:
        case 20:
        case 22:
            break;
        case 5:
            data_0215a060 = *(s16 *) (arg0 + 0x26);
            break;
        case 12:
            func_020e16dc();
            break;
        case 11:
            func_020e1674(arg2);
            break;
        case 21:
            a = *(volatile u16 *) (arg0 + 0x10E);
            b = *(volatile u16 *) (arg0 + 0x110);
            *(u16 *) (arg0 + 0x112) = a;
            *(u16 *) (arg0 + 0x114) = b;
            func_02118c10(arg0);
            break;
        case 0x23:
            break;
        case 0x24:
            break;
    }
}
