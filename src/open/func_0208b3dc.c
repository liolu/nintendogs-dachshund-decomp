#include "m2c.h"
extern u32 data_0213cf48[];
extern u8 data_02154300[];
extern u8 data_02154350[];
extern u8 data_02154354[];
void func_0208cfcc(s32 arg0, s32 arg1);
void func_0208cf44(s32 arg0);
void func_0208d310(s16 arg0);
void func_02091784(s32 arg0);
s32 func_0208b5c4(s32 arg0, s32 arg1);
s32 func_0208b3dc(s32 arg0, s32 arg1, s32 arg2) {
    u8 *p50 = data_02154350;
    u8 *p00 = data_02154300;
    u8 *p54;
    s32 entry;
    s16 type;
    u8 b;
    s32 res = -1;

    entry = data_0213cf48[*(u16 *) (arg0 + 0x24)];
    type = *(s16 *) (entry + 2);
    b = *(u8 *) (entry + 1);

    if (type != -1) {
        p54 = data_02154354;
        switch (type) {
        case 0x21:
            if (arg2 == 0) {
                if (*(s32 *) p54 != 0 && *(s16 *) (p50 + 0x22) != 0x40) {
                    func_0208cfcc(0x40, 0x3C);
                    func_0208cf44(0xE6);
                }
                return -1;
            }
            if (*(s32 *) p54 == 0) {
                func_0208d310(0x21);
                break;
            }
            if (*(s16 *) (p50 + 0x22) == 0x7F) {
                break;
            }
            if (arg2 == 0) {
                break;
            }
            func_0208cfcc(0x7F, 0x1E);
            func_0208cf44(0x100);
            break;

        case 8:
        case 0x1A:
        case 0x20:
            if ((u32) (arg1 - 4) > 1) {
                break;
            }
            if (*(s32 *) p54 == 0) {
                func_0208d310(type);
            } else {
                if (*(s16 *) (p50 + 0x22) == 0x7F) {
                    break;
                }
                if (arg2 == 0) {
                    break;
                }
                func_0208cfcc(0x7F, 0x1E);
                func_0208cf44(0x100);
            }
            break;
        }
    }

    if (b == 0x1E) {
        func_02091784(arg2);
    }
    if (b == 0x19 && arg1 == 6) {
        *(s32 *) (p00 + 0x24) = 1;
        *(s32 *) (p00 + 0x28) = arg2;
        *(s32 *) (p00 + 0x2C) = 0;
    } else {
        res = func_0208b5c4(arg0, arg1);
    }
    if (res == -1) {
        return -1;
    }
    if (arg2 < 0) {
        arg2 = -arg2;
    }
    *(s32 *) (arg0 + res * 4 + 0x28) = arg2;
    *(u16 *) (arg0 + 0x26) = (u16) (*(u16 *) (arg0 + 0x26) | (1 << res));
    return res;
}
