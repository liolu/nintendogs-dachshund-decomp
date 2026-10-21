#include "m2c.h"
extern s16 data_02139b78[];
s32 func_020353bc(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s16 *, 0x162) == M2C_FIELD(arg0, s16 *, 0x152)) {
        s32 *ptr = M2C_FIELD(arg0, s32 **, 0x74);
        if (ptr != NULL) {
            if (M2C_FIELD(arg0, s8 *, 0xBE) > 0) {
                if (M2C_FIELD(arg0, s16 *, 0x14E) >= M2C_FIELD(ptr, s16 *, 0x18) - 1 - arg1) {
                    return 1;
                }
            } else if (M2C_FIELD(arg0, s16 *, 0x14E) <= arg1 + 1) {
                return 1;
            }
        }
    }
    return 0;
}
