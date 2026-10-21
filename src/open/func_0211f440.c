#include "m2c.h"

typedef struct Unk211f440 {
    u8 unk00[0x20];
    s16 unk20;
    s16 unk22;
    s16 unk24;
    s16 unk26;
    s16 unk28;
    s16 unk2A;
    s16 unk2C;
} Unk211f440;

void func_0211f440(Unk211f440 *o, s32 arg1) {
    s16 i;
    s16 *p;
    s8 *base;
    s16 v;
    s16 d;

    base = (s8 *) o + 0x42;
    v    = (arg1 * 2) / 3;
    for (i = 0; i < 3; i++) {
        p = (s16 *) (base + o->unk20 * 2);
        switch (i) {
        case 0:
            *p -= o->unk2A * 10;
            if (o->unk22 == 0) {
                *p -= 0xC8;
            } else {
                *p -= (o->unk2C - o->unk22) * 0x14;
            }
            break;
        case 1:
            d = (s16) (arg1 - *(s16 *) ((s8 *) o + 2) - v);
            if (0 > d) {
                d = 0;
            }
            *p -= d / 60 * 10;
            if (o->unk22 == 0) {
                *p -= 0xC8;
            } else {
                *p -= (o->unk2C - o->unk22) * 0x14;
            }
            break;
        case 2:
            *p -= o->unk2A / 2 * 10;
            if (o->unk22 == 0) {
                *p -= 0xC8;
            } else {
                *p -= (o->unk2C - o->unk22) / 2 * 0x14;
            }
            break;
        }
        if (*p < 0) {
            *p = 0;
        }
        base += 0xA;
    }
}
