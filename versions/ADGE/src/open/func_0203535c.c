#include "m2c.h"
s32 func_0203535c(s32 arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x162) == M2C_FIELD(arg0, s16 *, 0x152)) {
        s32 *ptr = M2C_FIELD(arg0, s32 **, 0x74);
        if (ptr != NULL) {
            if (M2C_FIELD(arg0, s8 *, 0xBE) > 0) {
                if (M2C_FIELD(arg0, s16 *, 0x14E) >= M2C_FIELD(ptr, s16 *, 0x18) - 1) {
                    return 1;
                }
            } else if (M2C_FIELD(arg0, s16 *, 0x14E) <= 1) {
                return 1;
            }
        }
    }
    return 0;
}
