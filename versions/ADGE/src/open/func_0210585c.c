#include "m2c.h"
extern void *data_0215a03c;
s32 func_0210585c(void) {
    s32 r;

    r = func_02067ca0(M2C_FIELD(data_0215a03c, s32 *, 4), 0x64000);
    if (r >= 0x1000) {
        M2C_FIELD(data_0215a03c, s32 *, 4) = 0;
        return 0x1000;
    }
    return r;
}
