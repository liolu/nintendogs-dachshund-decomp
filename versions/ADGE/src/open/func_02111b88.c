#include "m2c.h"

typedef struct Blk_s {
    s16 f00;
    u16 f02;
    u16 f04;
    s16 f06;
    s16 f08;
    s16 f0A;
    s16 f0C;
    s16 f0E;
    s16 f10;
    s16 f12;
    s16 f14;
    s16 f16;
    s16 f18;
    s16 f1A;
    s16 f1C;
    s16 f1E;
    s16 entries[3][10];
} Blk;

extern void func_02110ef0(void *);

void func_02111b88(Blk *b, s16 type) {
    s32 i;

    b->f00 = type;
    b->f02 = 0xFFFF;
    b->f04 = 0xFFFF;
    b->f06 = -1;
    b->f08 = -1;
    b->f0A = -1;
    b->f0C = -1;
    b->f0E = -1;
    b->f10 = -1;
    b->f12 = 0;
    b->f14 = 0;
    b->f16 = 0;
    b->f18 = -1;
    b->f1A = 0;
    b->f1C = -1;
    b->f1E = 0;

    for (i = 0; i < 3; i++) {
        func_02110ef0(&b->entries[i][0]);
    }

    switch (type) {
        case 7:
        case 9:
        case 12:
            b->f02 = 0x16;
            break;
        case 8:
        case 16:
            b->f02 = 0x17;
            break;
        case 3:
            b->f02 = 0x18;
            break;
        default:
            b->f02 = 0x1A;
            break;
    }
}
