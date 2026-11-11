#include "m2c.h"

extern void *data_02159fe4;

s32 func_020e7e94(void) {
    if (data_02159fe4 != NULL) {
        return M2C_FIELD(data_02159fe4, s32 *, 4);
    }
    return 0;
}
