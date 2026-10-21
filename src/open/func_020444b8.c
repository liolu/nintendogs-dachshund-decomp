#include "m2c.h"
extern u8 data_0213aa1c[];
void func_020444b8(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    s32 *ent;
    s32 seed;
    s16 v;
    s32 a;
    s32 r;

    ent = (s32 *) (data_0213aa1c + arg3 * 0x64);
    seed = *arg2 * 0x10DCD + 1;
    *arg2 = seed;
    v = (s16) (u16) (seed & 0xFFF);
    a = (s32) (((s64) v * 0x19A + 0x800) >> 12);
    *arg0 = (s32) (((s64) ent[0] * (a + 0xF33) + 0x800) >> 12);
    *arg1 = (s32) (((s64) *arg0 * ent[1] + 0x800) >> 12);
    r = *arg1;
    switch (r < 0xCCD ? 0 : r <= 0x119A ? 1 : 2) {
    case 0:
        if (r < 0xA66) {
            *arg1 = 0xA66;
        }
        if (*arg1 > 0xC00) {
            *arg1 = 0xC00;
        }
        break;
    case 1:
        if (r < 0xE66) {
            *arg1 = 0xE66;
        }
        break;
    case 2:
        if (r < 0x1400) {
            *arg1 = 0x1400;
        }
        break;
    }
}
