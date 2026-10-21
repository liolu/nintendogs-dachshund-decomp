#include "m2c.h"
extern s32 data_0214da84;
void func_0203e138(s32 arg0, s16 arg1) {
    s32 i;
    s32 flag;
    s32 base;
    s32 entry;

    if (M2C_FIELD((s8 *) arg0, s16 *, 0x88) != -1) {
        return;
    }
    flag = 1;
    i = 0;
    base = data_0214da84;
    do {
        if ((i < 0) || (i >= 3)) {
            entry = 0;
        } else {
            entry = M2C_FIELD(base + i * 4, s32 *, 0x54);
        }
        if (entry == 0) {
            flag = 1;
            break;
        }
        if (M2C_FIELD((s8 *) M2C_FIELD((s8 *) entry, s32 *, 0x9E8), s16 *, 6) != -1) {
            flag = 0;
        }
        i = (s32) (s8) (i + 1);
    } while (i < 3);
    if (flag != 0) {
        M2C_FIELD((s8 *) arg0, s16 *, 0x88) = arg1;
        M2C_FIELD((s8 *) arg0, s16 *, 0x8A) = 0;
    }
}
