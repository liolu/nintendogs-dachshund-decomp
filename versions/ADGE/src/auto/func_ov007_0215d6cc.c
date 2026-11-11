#include "m2c.h"

extern void *data_ov007_0215e8cc;

s32 func_ov007_0215d6cc(void) {
    if (data_ov007_0215e8cc != NULL) {
        return M2C_FIELD(data_ov007_0215e8cc, s32 *, 4);
    }
    return 0;
}
