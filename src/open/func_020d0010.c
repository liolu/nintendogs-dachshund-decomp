#include "m2c.h"
s32 func_02028714(void *, M2C_UNK, M2C_UNK);
s32 func_0202c9f0(void *, M2C_UNK);
void *func_020350fc(void *);
M2C_UNK func_0203e5ac(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_0203e5e8(void *, M2C_UNK);
s32 func_ov003_02196338(void *);
extern char data_0214da84[];
void func_02022b6c(M2C_UNK);
s32 func_02022ddc(void *, s16, u8);
extern void *data_02159e70;
void func_020ccd00(s32, s32, s32, s32);
extern void *data_02159e74;
extern s32 data_02159e38;
s32 func_020d0010(s32 base, s32 which, s32 x, s32 y) {
    s32 flag = 0;
    s16 *p = NULL;

    switch (which) {
    case 0:
        p = (s16 *) (base + 0x7D0);
        break;
    case 1:
        p = (s16 *) (base + 0x7D8);
        break;
    case 2:
        p = (s16 *) (base + 0x7E0);
        break;
    }

    if (x > p[0]) {
        flag = 1;
    } else if (x == p[0]) {
        if (y >= 1 && y <= 3 && y < p[1]) {
            flag = 1;
        }
    }

    if (flag != 0) {
        p[0] = x;
        p[1] = y;
    }

    if (x == 5) {
        if (y == 1) {
            p[2]++;
            if (p[2] >= 99) {
                p[2] = 99;
            }
        } else {
            p[2] = 0;
        }
        flag = 1;
    }

    return flag;
}
