#include "m2c.h"

extern s8 *data_021555f8;
s32 func_020a6b10();
s32 func_020abb3c();
void func_020cf19c();
void func_020a6610();

void func_02118c10(s32 arg0) {
    s16 buf[2];
    s32 idx;
    s32 v;
    s32 x;

    if (*(s16 *) (arg0 + 0x7C) != -1) {
        x = func_020a6b10(*(s16 *) (arg0 + 0x7C));
        *(s16 *) (arg0 + 0x7E) = -1;
        switch (x) {
        case 2:
        case 7:
        case 0xF: {
            s16 cur = *(s16 *) (arg0 + 0x7C);

            buf[0] = 0;
            buf[1] = cur;
            func_020cf19c((M2C_UNK) buf, 1);
            break;
        }
        case 0:
        case 1: {
            s16 buf2[2];
            s16 cur;
            s32 r;

            idx = *(s16 *) (arg0 + 0x7A);
            if ((idx < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= idx)) {
                v = 0;
            } else {
                v = M2C_FIELD(data_021555f8 + idx * 4, s32 *, 4);
            }
            if (v != 0) {
                r = (func_020abb3c(v) << 4) >> 16;
                cur = *(s16 *) (arg0 + 0x7C);
                buf2[0] = 0;
                buf2[1] = cur;
                func_020cf19c((M2C_UNK) buf2, r);
            }
            break;
        }
        }
    }
    *(s16 *) (arg0 + 0x7C) = -1;
    func_020a6610(0);
    *(u16 *) (arg0 + 0x76) = 0;
    *(u16 *) (arg0 + 0x78) = 0;
}
