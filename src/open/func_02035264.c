#include "m2c.h"
extern s16 data_02139b78[];
s32 func_02035264(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s16 *, 0x162 + arg1 * 2) == M2C_FIELD(arg0, s16 *, 0x152 + arg1 * 2)) {
        s32 *ptr = (s32 *) (M2C_FIELD(arg0, s32 *, 0x74) +
                            M2C_FIELD(data_02139b78, s16 *, arg1 * 4) * 0x24);
        if (ptr != NULL) {
            if (M2C_FIELD(arg0, s8 *, 0xBE + arg1) > 0) {
                if ((M2C_FIELD(ptr, s32 *, 0x20) >> 12) >= M2C_FIELD(ptr, s16 *, 0x18) - 1) {
                    return 1;
                }
            } else if ((M2C_FIELD(ptr, s32 *, 0x20) >> 12) <= 1) {
                return 1;
            }
        }
    }
    return 0;
}
