#include "m2c.h"

typedef struct {
    s32 f[3];
} Blk3;

extern s32 *data_0214da84;
void func_0208f828(s32, s32, s32, s32);
s32 func_02009f28(s32, s32);
s32 func_0202a688(s32 arg0) {
    s32 c;
    s32 b;
    s32 a;
    s32 sum;
    s32 n;
    s32 *seed;
    u16 r;

    *(Blk3 *) (arg0 + 0x260) = *(Blk3 *) (arg0 + 0x490);
    a = *(s32 *) (arg0 + 0x264);
    b = *(s32 *) (arg0 + 0x260);
    if (a <= 0) {
        a = -a;
    }
    if (b <= 0) {
        b = -b;
    }
    c = *(s32 *) (arg0 + 0x268);
    sum = b + a;
    if (c <= 0) {
        c = -c;
    }
    c = c + sum;
    func_0208f828(0x2A, 2, c, arg0 + 0x950);
    if (*(s32 *) (arg0 + 0x2A4) > 0x400) {
        *(s32 *) (arg0 + 0x260) = *(s32 *) (arg0 + 0x260) >> 2;
        *(s32 *) (arg0 + 0x264) = *(s32 *) (arg0 + 0x264) + 0x400;
        *(s32 *) (arg0 + 0x268) = *(s32 *) (arg0 + 0x268) >> 2;
        seed = data_0214da84;
        n = *seed * 0x10DCD + 1;
        r = (u16) ((u32) (u16) n * 2 >> 16);
        *seed = n;
        switch (r) {
            case 0:
                *(u16 *) (arg0 + 0xEA) = 0x431;
                return 1;
            case 1:
                *(u16 *) (arg0 + 0xEA) = 0x432;
                return 1;
        }
    } else {
        if (func_02009f28(arg0 + 0x260, arg0 + 0x18C) != 0) {
            *(u16 *) (arg0 + 0xEA) = 0x434;
            return 1;
        }
        *(u16 *) (arg0 + 0xEA) = 0x435;
        return 1;
    }
    return 0;
}
