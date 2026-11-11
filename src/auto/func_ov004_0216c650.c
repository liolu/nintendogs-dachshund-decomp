#include "m2c.h"

extern u8 *data_ov004_0216e3c4;

s32 func_ov004_0216c650(s32 arg0) {
    u8 *p = data_ov004_0216e3c4;
    if (arg0 == *(s16 *) (p + 0x44)) {
        return *(s32 *) (p + 0);
    }
    if (arg0 == *(s16 *) (p + 0x46)) {
        return *(s32 *) (p + 8);
    }
    return 0;
}
