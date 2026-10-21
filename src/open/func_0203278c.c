#include "m2c.h"
extern void *data_0214da84;
s32 func_0203278c(s32 arg0, s32 arg1) {
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 >= 3) {
        return 0;
    }
    if (*(s32 *) (arg0 + 0x924) & (1 << arg1)) {
        return 1;
    }
    return 0;
}
