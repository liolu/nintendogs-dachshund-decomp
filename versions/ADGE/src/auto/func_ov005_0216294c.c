#include "m2c.h"

extern u8 *data_ov005_02165fa4;

s32 func_ov005_0216294c(void) {
    u8 *p = data_ov005_02165fa4;
    if (*(s16 *) (p + 0x8C) == 0) {
        if (*(s32 *) (p + 0x88) != 0) {
            return 1;
        }
    }
    return 0;
}
