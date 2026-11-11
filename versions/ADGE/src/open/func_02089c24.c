#include "m2c.h"
#pragma opt_propagation off
s32 func_02089c24(void *arg0) {
    if (arg0 != NULL) {
        s32 v;

        v = -(*(s32 *) arg0 >> 0xA);
        if (v < -128) {
            v = -128;
        } else if (v > 127) {
            v = 127;
        }
        return v;
    }
    return 0;
}
