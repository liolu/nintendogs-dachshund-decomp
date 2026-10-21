#include "m2c.h"
extern u8 data_02154350[];
extern s32 data_02154358[];
void func_02070f88(void *p, s32 arg);
s32 func_0208c9ac(s32 arg0) {
    u8 *base;
    s32 *other;

    base = data_02154350;
    other = data_02154358;
    if (M2C_FIELD(base, s32 *, 0x40) != 0) {
        M2C_FIELD(base, s32 *, 0x40) = 0;
        M2C_FIELD(base, s16 *, 0x34) = -1;
        M2C_FIELD(base, s32 *, 0x3C) = -1;
        M2C_FIELD(base, u16 *, 0x38) = 0;
        M2C_FIELD(base, s32 *, 0x44) = 0;
        if (other[0] != 0) {
            func_02070f88(other, arg0);
        }
        if (M2C_FIELD(base, s32 *, 0) != 0) {
            func_02070f88(base, arg0);
            return 1;
        }
    }
    return 0;
}
