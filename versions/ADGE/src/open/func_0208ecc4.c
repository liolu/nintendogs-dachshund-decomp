#include "m2c.h"
extern s32 data_02154474[];
extern s32 data_0215446c[];
void func_02070f88(void *arg0, s32 arg1);
void func_0208ecc4(s32 arg0) {
    s16 i;
    s32 *base;
    s32 *p;

    base = data_0215446c;
    if (data_02154474[0] != 0) {
        func_02070f88(data_02154474, arg0);
    }
    p = (s32 *) ((u8 *) base + 0xc);
    i = 0;
    for (; i < 2; i = (s16) (i + 1)) {
        if (M2C_FIELD((u8 *) base + i * 4, s32 *, 0xc) != 0) {
            func_02070f88(p, arg0);
        }
        p++;
    }
    M2C_FIELD(base, s32 *, 0x14) = -1;
}
