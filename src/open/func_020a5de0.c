#include "m2c.h"
extern void *data_021555f4;
void func_020a5de0(s32 arg0) {
    u8 *p;
    s32 v;

    *(s32 *) ((u8 *) data_021555f4 + 0x7c) = arg0;
    p = (u8 *) data_021555f4;
    v = *(s32 *) (p + 0x7c);
    switch (v) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        *(u16 *) (p + 0x82) = 1;
        break;
    case 5:
        *(u16 *) (p + 0x82) = 4;
        break;
    case 6:
    case 9:
    case 12:
    case 13:
        *(u16 *) (p + 0x82) = 5;
        break;
    case 7:
        *(u16 *) (p + 0x82) = 1;
        break;
    case 8:
        *(u16 *) (p + 0x82) = 6;
        break;
    case 10:
    case 11:
        *(u16 *) (p + 0x82) = 7;
        break;
    case 14:
        *(u16 *) (p + 0x82) = 8;
        break;
    case 15:
        *(u16 *) (p + 0x82) = 9;
        break;
    case 16:
        *(u16 *) (p + 0x82) = 10;
        break;
    case 17:
    case 18:
        *(u16 *) (p + 0x82) = 11;
        break;
    }
}
