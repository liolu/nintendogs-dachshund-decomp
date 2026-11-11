#include "m2c.h"

extern void *data_021538b4;

s32 func_020b4ff4(void) {
    if (data_021538b4 != NULL) {
        return M2C_FIELD(data_021538b4, s32 *, 4);
    }
    return 0;
}
