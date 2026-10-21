#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} S12;

extern u8 *data_0215a064;

s32 func_0200b890(s32 arg0, s32 arg1, S12 *arg2);

s32 func_021144f0(s32 arg0, s32 arg1, s32 arg2) {
    u8 *p = data_0215a064;
    S12 buf;

    if (*(u16 *) (p + 0x84) & 2) {
        buf = *(S12 *) (p + 0x9C);
        if (func_0200b890(arg1, *(s32 *) (arg0 + 0x1C) + 0x30, &buf) < arg2) {
            return 1;
        }
    }
    return 0;
}
