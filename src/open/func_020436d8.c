#include "m2c.h"
extern void *data_0214da84;
void func_020c8050(void *arg0, s32 arg1);
void func_020c7fa4(s32 arg0, u16 arg1, u8 arg2);
void func_020436d8(s32 arg0) {
    s16 i;
    s32 j;
    s32 e;
    u8 *p;

    i = 0;
    do {
        e = M2C_FIELD((u8 *) data_0214da84 + i * 4, s32 *, 0x48);
        if (e != 0) {
            func_020c8050((void *) e, arg0);
        }
        i = (s16) (i + 1);
    } while (i < 3);

    j = 0;
    do {
        p = (M2C_FIELD((u8 *) data_0214da84 + j, s8 *, 0x19) != 0) ?
            ((u8 *) data_0214da84 + 0x1A4 + j * 0x85C) : 0;
        if (p != 0) {
            e = M2C_FIELD((u8 *) data_0214da84 + j * 4, s32 *, 0x48);
            if (e != 0) {
                func_020c7fa4(e, M2C_FIELD(p, u16 *, 0), M2C_FIELD(p, u8 *, 2));
            }
        }
        j = (s16) (j + 1);
    } while (j < 3);
}
