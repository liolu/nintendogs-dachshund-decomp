#include "m2c.h"

extern u16 data_02157b40;

s32 func_02120748(void) {
    if (data_02157b40 != 0) {
        return 1;
    }
    return 0;
}
