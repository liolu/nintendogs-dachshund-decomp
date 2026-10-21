#include "m2c.h"

typedef struct Unk211f214 {
    u8 unk00[2];
    s16 unk02;
    u8 unk04[0x1C];
    s16 unk20;
    s16 unk22;
    u8 unk24[4];
    s16 unk28;
    s16 unk2A;
    u8 unk2C[0x10];
    s16 unk3C;
} Unk211f214;

void func_0211f214(Unk211f214 *o, s32 arg1) {
    s16 i;
    s16 *p;
    s8 *base;
    s16 v;
    s16 d;
    s16 e;

    base = (s8 *) o + 0x42;
    v    = (arg1 * 4) / 5;
    for (i = 0; i < 3; i++) {
        p = (s16 *) (base + o->unk20 * 2);
        switch (i) {
        case 0:
            *p -= o->unk2A * 10;
            if (o->unk22 == 0) {
                *p -= 0xC8;
            } else {
                d = (s16) (o->unk3C - o->unk28);
                if (d < 0) {
                    d = 0;
                }
                *p -= d / 60 * 0x14;
            }
            break;
        case 1:
            d = (s16) (arg1 - o->unk02 - v);
            if (d < 0) {
                d = 0;
            }
            *p -= d / 60 * 10;
            if (o->unk22 == 0) {
                *p -= 0xC8;
            } else {
                e = (s16) (o->unk3C - o->unk28);
                if (e < 0) {
                    e = 0;
                }
                *p -= e / 60 * 0x14;
            }
            break;
        case 2:
            *p -= o->unk2A / 2 * 10;
            if (o->unk22 == 0) {
                *p -= 0xC8;
            } else {
                d = (s16) (o->unk3C - o->unk28);
                if (d < 0) {
                    d = 0;
                }
                *p -= d / 120 * 0x14;
            }
            break;
        }
        if (*p < 0) {
            *p = 0;
        }
        base += 0xA;
    }
}
