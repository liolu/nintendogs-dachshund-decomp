#include "m2c.h"
s32 func_02080978(void);
void func_02119744(s16 *, u32, u32 *);
void func_0211e684(s32 arg0, u32 arg1) {
    s16 i;
    u32 rand;
    s16 buf[0x20];
    s16 y;
    s16 d;
    s16 *p;

    rand = func_02080978();
    func_02119744(buf, 0x20, &rand);
    y = 0;
    switch (arg1) {
    case 1:
        rand = rand * 0x10DCD + 1;
        y = (s16) (0x352 + (u16) (((u32) (u16) rand * 0x33) >> 16));
        break;
    case 2:
        rand = rand * 0x10DCD + 1;
        y = (s16) (0x352 + (u16) (((u32) (u16) rand * 0x33) >> 16));
        break;
    case 3:
        rand = rand * 0x10DCD + 1;
        y = (s16) (0x352 + (u16) (((u32) (u16) rand * 0x33) >> 16));
        break;
    case 4:
        rand = rand * 0x10DCD + 1;
        y = (s16) (0x384 + (u16) (((u32) (u16) rand * 0x29) >> 16));
        break;
    case 5:
        rand = rand * 0x10DCD + 1;
        y = (s16) (0x3B6 + (u16) (((u32) (u16) rand * 0x15) >> 16));
        break;
    }
    p = (s16 *) (arg0 + 0x18);
    for (i = 0; i < 4; i++) {
        if (i > 0) {
            p[0] = i;
            p[2] = y;
            p[1] = buf[i];
            switch (p[0]) {
            case 1:
                d = (s16) (((u16) (((u32) (u16) (rand = rand * 0x10DCD + 1) * 3) >> 16) * 10) + 30);
                break;
            default:
                d = (s16) (((u16) (((u32) (u16) (rand = rand * 0x10DCD + 1) * 3) >> 16) * 10) + 30);
                break;
            }
            y = (s16) (y - d);
        }
        p = (s16 *) ((s8 *) p + 0xA);
    }
}
