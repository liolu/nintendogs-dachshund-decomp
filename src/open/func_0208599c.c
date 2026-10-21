#include "m2c.h"

typedef struct {
    s16 x;
    s16 y;
    s16 z;
    u16 unk6;
} S;

extern u32 data_021541a4;
extern s64 func_0205df50(s32, s32);

void func_0208599c(S *arg0, void *arg1, s32 *arg2) {
    u32 rnd;
    s32 h;

    if ((s32) (func_0205df50(M2C_FIELD(arg1, u16 *, 0x2E), M2C_FIELD(arg0, u16 *, 6)) >> 32) != 0) {
        return;
    }

    rnd = (data_021541a4 * 0x5EEDF715) + 0x1B0CB173;
    data_021541a4 = rnd;
    h = arg0->x;
    arg2[0] += ((s32) (h * (rnd >> 23)) - (h << 8)) >> 8;

    rnd = (data_021541a4 * 0x5EEDF715) + 0x1B0CB173;
    data_021541a4 = rnd;
    h = arg0->y;
    arg2[1] += ((s32) (h * (rnd >> 23)) - (h << 8)) >> 8;

    rnd = (data_021541a4 * 0x5EEDF715) + 0x1B0CB173;
    data_021541a4 = rnd;
    h = arg0->z;
    arg2[2] += ((s32) (h * (rnd >> 23)) - (h << 8)) >> 8;
}
