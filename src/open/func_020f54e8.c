#include "m2c.h"

typedef struct {
    u32 unk[3];
} S12;

typedef struct {
    u32 unk[12];
} S48;

void func_020f54e8(s32 arg0) {
    u32 *p = *(u32 **) (arg0 + 0x214);

    *(u32 *) (arg0 + 0xB0) = 0;
    *(u32 *) (arg0 + 0xB4) = 0;
    *(u32 *) (arg0 + 0xB8) = 0;
    *(u16 *) (arg0 + 0xA6) = 0;
    p[1] = 0;
    p[3] = 0;
    p[5] = 0;
    p[4] = 0;
    p[14] = 0;
    if (p[13] != 0) {
        p[15] = 0xA000;
    } else {
        p[15] = 0x28000;
    }
    *(S12 *) (p + 10) = *(S12 *) (arg0 + 0xBC);
    *(S48 *) (p + 16) = *(S48 *) (arg0 + 0xC8);
    *(u32 *) (arg0 + 0xA8) = 0;
}
