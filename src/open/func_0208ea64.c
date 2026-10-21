#include "m2c.h"
extern u8 data_0215446c[];
extern s32 data_02154474;
s32 func_02070c3c(s32 arg0);
s32 func_02070bec(void **arg0, s32 arg1, s16 *arg2);
s32 func_0208e824(s32 arg0);
void func_02091d1c(s32 arg0, s32 arg1, s32 arg2);
void func_02091ce4(void);
void func_0208ea64(void) {
    u8 *base;
    u8 *t;
    s16 i;
    s16 old;
    s16 v;
    s16 buf;
    s32 v1;

    base = data_0215446c;
    if (*(s32 *) (base + 0x14) == -1) {
        return;
    }
    for (i = 0; i < 2; i = (s16) (i + 1)) {
        u16 bit = (u16) (1 << i);
        if (*(s32 *) (base + 0xc + i * 4) == 0 && (*(u16 *) (base + 4) & bit) != 0) {
            *(u16 *) (base + 4) &= ~bit;
        }
    }
    t = data_0215446c;
    if (data_02154474 != 0) {
        old = *(s16 *) (t + 2);
        func_02070bec((void **) &data_02154474, 0, (s16 *) (t + 2));
        v = *(s16 *) (t + 2);
        if (v != old && v > 0) {
            func_0208e824(v);
        }
    }
    if (*(s32 *) (base + 0x1c) != 0) {
        if (*(s32 *) (base + 0x24) != 0 && *(s32 *) (*(s32 *) (base + 0x24)) != 0) {
            v1 = func_02070c3c(*(s32 *) (base + 0x24));
            if (v1 == 1 || v1 == 0x28 || v1 == 0x29) {
                (*(u16 *) (base + 0x20))++;
                if (*(u16 *) (base + 0x20) > 0x3c) {
                    func_02091d1c(0x35, 1, 0);
                    *(s32 *) (base + 0x1c) = 0;
                    *(u16 *) (base + 0x20) = 0;
                    *(s32 *) (base + 0x24) = 0;
                }
            }
        } else {
            *(s32 *) (base + 0x1c) = 0;
            *(u16 *) (base + 0x20) = 0;
            *(s32 *) (base + 0x24) = 0;
        }
    }
    if (*(s32 *) (base + 0x28) == 0) {
        return;
    }
    if (*(s32 *) (base + 0x2c) != 0 && *(s32 *) (*(s32 *) (base + 0x2c)) != 0) {
        switch (func_02070c3c(*(s32 *) (base + 0x2c))) {
        case 2:
        case 0x1E:
        case 0x1F:
        case 0x20:
        case 0x2A:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
            func_02070bec((void **) *(s32 *) (base + 0x2c), 0, &buf);
            if (buf == 5) {
                func_02091ce4();
                *(s32 *) (base + 0x28) = 0;
                *(s32 *) (base + 0x2c) = 0;
            }
            break;
        }
    } else {
        *(s32 *) (base + 0x28) = 0;
        *(s32 *) (base + 0x2c) = 0;
    }
}
