#include "m2c.h"
extern s32 data_02159e18;
s32 func_020c8cb8(s32 *arg0) {
    s32 res = 0;
    s32 a = M2C_FIELD(&data_02159e18, s32 *, 0);
    s32 ok = 1;

    if (M2C_FIELD(&data_02159e18, u32 *, 0) == 0) {
        ok = M2C_FIELD(&data_02159e18, s32 *, 4) != 0;
    }
    if (ok && a == arg0[0] && M2C_FIELD(&data_02159e18, s32 *, 4) == arg0[1]) {
        res = 1;
    }
    return res;
}
