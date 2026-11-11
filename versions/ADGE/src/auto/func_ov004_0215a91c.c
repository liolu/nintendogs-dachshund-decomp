#include "m2c.h"

extern s8 *data_ov004_0216e3c0;

s32 func_ov004_0215a91c(void) {
    if (*data_ov004_0216e3c0 == 2) {
        return 1;
    }
    return 0;
}
