#include "m2c.h"

extern void *data_ov006_0215bc30;

s32 func_ov006_0215ad04(void) {
    if (data_ov006_0215bc30 != NULL) {
        return M2C_FIELD(data_ov006_0215bc30, s32 *, 4);
    }
    return 0;
}
