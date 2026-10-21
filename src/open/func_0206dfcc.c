#include "m2c.h"
s32 func_0206fff8(void);
s32 func_02070144(void);
s32 func_0206eda0(u32, s32);
s32 func_0206f148(s32, s32, s32, s32, s32, s32, s32);
s32 func_0206dfcc(char *base, s32 idx, s32 c) {
    s32 r = 0;
    char *e = base + 0x1d4 + idx * 0x68;
    s32 flag;

    if (*(u8 *) e == 2) {
        flag = func_0206fff8() == 0 ? 0xffff : 1;
        if (*(u8 *) (e + 1) == 6) {
            s32 v1 = func_0206eda0(*(u32 *) (e + 0x10), *(u32 *) (e + 0x14));
            s32 v2 = func_02070144();

            r = func_0206f148(c, flag, *(u8 *) (e + 2), *(u32 *) (e + 0x10), *(u32 *) (e + 0x14), v1, v2);
            *(u8 *) e = 1;
        }
    }
    return r;
}
