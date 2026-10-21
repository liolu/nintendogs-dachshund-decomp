#include "m2c.h"
extern void *data_0215a04c;
void func_0202614c(u8 *arg0) {
    s32 v;
    s32 k;

    switch (*(u16 *) data_0215a04c) {
    case 1:
    case 3:
        v = *(s32 *) (*(u8 **) (arg0 + 0x9E8) + 0xC);
        if (v < 0xCCD) {
            k = 0;
        } else if (v <= 0x119A) {
            k = 1;
        } else {
            k = 2;
        }
        switch (k) {
        case 0:
            *(u32 *) (arg0 + 0x240) = (u32) (((s64) v * 0x2D0 + 0x800) >> 12);
            break;
        case 1:
            *(u32 *) (arg0 + 0x240) = (u32) (((s64) v * 0x200 + 0x800) >> 12);
            break;
        case 2:
            *(u32 *) (arg0 + 0x240) = (u32) (((s64) v * 0x180 + 0x800) >> 12);
            break;
        }
        break;
    default:
        v = *(s32 *) (*(u8 **) (arg0 + 0x9E8) + 0xC);
        if (v < 0xCCD) {
            k = 0;
        } else if (v <= 0x119A) {
            k = 1;
        } else {
            k = 2;
        }
        switch (k) {
        case 0:
            *(u32 *) (arg0 + 0x240) = (u32) (((s64) v * 0x1F0 + 0x800) >> 12);
            break;
        case 1:
            *(u32 *) (arg0 + 0x240) = (u32) (((s64) v * 0x160 + 0x800) >> 12);
            break;
        case 2:
            *(u32 *) (arg0 + 0x240) = (u32) (((s64) v * 0x100 + 0x800) >> 12);
            break;
        }
        break;
    }
    *(u32 *) (arg0 + 0x244) = 0x200;
    *(u32 *) (arg0 + 0x24C) = 0x99C;
}
