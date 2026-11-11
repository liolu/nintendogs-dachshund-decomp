#include "m2c.h"

extern u8 *data_ov003_0216be24;

s32 func_ov003_0216a0cc(s32 arg0) {
    u8 *p = data_ov003_0216be24;
    if (arg0 == *(s16 *) (p + 0x44)) {
        return *(s32 *) (p + 0);
    }
    if (arg0 == *(s16 *) (p + 0x46)) {
        return *(s32 *) (p + 8);
    }
    return 0;
}
