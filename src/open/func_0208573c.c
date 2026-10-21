#include "m2c.h"
void func_0208573c(void *arg0, void *arg1) {
    s32 y;
    s32 x;

    switch ((u32) (M2C_FIELD(arg0, u16 *, 0x6) << 30) >> 30) {
    case 0:
        x = M2C_FIELD(arg0, s32 *, 0x0);
        y = M2C_FIELD(arg1, s32 *, 0xC);
        if (y < x && y + M2C_FIELD(arg1, s32 *, 0x18) > x) {
            M2C_FIELD(arg1, u16 *, 0x2E) = M2C_FIELD(arg1, u16 *, 0x2C);
            return;
        }
        if (y >= x && y + M2C_FIELD(arg1, s32 *, 0x18) < x) {
            M2C_FIELD(arg1, u16 *, 0x2E) = M2C_FIELD(arg1, u16 *, 0x2C);
        }
        break;
    case 1:
        x = M2C_FIELD(arg0, s32 *, 0x0);
        y = M2C_FIELD(arg1, s32 *, 0xC);
        if (M2C_FIELD(arg1, s32 *, 0xC) < x && M2C_FIELD(arg1, s32 *, 0xC) + M2C_FIELD(arg1, s32 *, 0x18) > x) {
            M2C_FIELD(arg1, s32 *, 0x18) = x - M2C_FIELD(arg1, s32 *, 0xC);
            M2C_FIELD(arg1, s32 *, 0x24) = -(s32) (((s64) M2C_FIELD(arg1, s32 *, 0x24) * M2C_FIELD(arg0, s16 *, 0x4) + 0x800) >> 12);
            return;
        }
        if (M2C_FIELD(arg1, s32 *, 0xC) >= x && M2C_FIELD(arg1, s32 *, 0xC) + M2C_FIELD(arg1, s32 *, 0x18) < x) {
            M2C_FIELD(arg1, s32 *, 0x18) = x - M2C_FIELD(arg1, s32 *, 0xC);
            M2C_FIELD(arg1, s32 *, 0x24) = -(s32) (((s64) M2C_FIELD(arg1, s32 *, 0x24) * M2C_FIELD(arg0, s16 *, 0x4) + 0x800) >> 12);
        }
        break;
    }
}
