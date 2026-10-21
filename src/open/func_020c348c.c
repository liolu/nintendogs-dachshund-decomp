#include "m2c.h"
extern s8 *data_0215a048;
extern s32 data_02140bfc;
extern s32 data_02140bf0;
extern s32 data_02140bf4;
extern s32 data_02140bec;
extern s32 data_02140bd8;
extern s32 data_02140bcc;
extern s32 data_02140bd0;
extern s32 data_02140c10;
void func_020c2fec();
s32 func_020a7e24();
s32 func_020a7e14();
s32 func_020b29bc();
void func_020b50d0();
s32 func_02061d7c();
void func_020c348c(s32 arg0) {
    s32 tmp[3];
    s32 x;
    s32 y;
    s32 b;
    s32 a;
    s32 d;
    s32 b2;
    s32 a2;
    s32 f;
    s32 v;

    *(s32 *) arg0 = 1;
    if (*(s32 *) arg0 == 0) {
        return;
    }
    *(s32 *) arg0 = 0;
    switch (*(s32 *) arg0) {
    case 0:
        func_020c2fec(arg0, 1);
        break;
    case 1:
        x = func_020a7e24();
        y = func_020a7e14();
        tmp[1] = y;
        tmp[0] = 0;
        tmp[2] = x;
        *(s16 *) (arg0 + 0x42) = (s16) func_020b29bc(-1);
        func_020b50d0(arg0 + 4, tmp, *(s16 *) (arg0 + 0x42));
        break;
    case 2:
        if (M2C_FIELD(data_0215a048, u16 *, 6) != 0x12) {
            *(s32 *) (arg0 + 0x34) = data_02140bfc;
            a = data_02140bf0;
            b = data_02140bf4;
            f = (func_02061d7c() << 12) / 0x7FFF;
            d = a - b;
            v = b + (s32) (((s64) d * f + 0x800) >> 12);
            *(s16 *) (arg0 + 0x38) = (s16) (((s64) v * 0xB60B60B60BLL + 0x80000000000LL) >> 44);
            *(s32 *) (arg0 + 0x3C) = data_02140bec;
        } else {
            *(s32 *) (arg0 + 0x34) = data_02140bd8;
            a2 = data_02140bcc;
            b2 = data_02140bd0;
            f = (func_02061d7c() << 12) / 0x7FFF;
            d = a2 - b2;
            v = b2 + (s32) (((s64) d * f + 0x800) >> 12);
            *(s16 *) (arg0 + 0x38) = (s16) (((s64) v * 0xB60B60B60BLL + 0x80000000000LL) >> 44);
            *(s32 *) (arg0 + 0x3C) = data_02140c10;
        }
        break;
    }
}
