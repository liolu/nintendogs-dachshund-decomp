#include "m2c.h"

extern s8 *data_ov003_0216be20;

s32 func_ov003_0215849c(void) {
    if (*data_ov003_0216be20 == 2) {
        return 1;
    }
    return 0;
}
