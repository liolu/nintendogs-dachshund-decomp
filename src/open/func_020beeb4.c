#include "m2c.h"
extern void *data_02155660;
s32 func_020c07ec(void);
s32 func_020beeb4(void) {
    s32 x = M2C_FIELD(data_02155660, s32 *, 0x20);

    if (x == 2) {
        if (func_020c07ec() != 0) {
            return 1;
        }
    } else if (x == 3) {
        return 1;
    }
    return 0;
}
