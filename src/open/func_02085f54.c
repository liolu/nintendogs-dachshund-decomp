#include "m2c.h"
s32 func_02085fe4(s32);
s32 func_02085fe4(s32 arg0);
s32 func_02085f54(s32 arg0, u16 *str, s32 *out, s32 arg3) {
    s32 total;
    u16 c;

    total = 0;
    for (c = *str; c != 0; c = *(++str)) {
        if (c == '\n') {
            if (out != NULL) {
                if (total > arg3) {
                    total -= arg3;
                }
                *out = total;
            }
            return (s32) (str + 1);
        }
        if (c != '\r') {
            total += arg3 + func_02085fe4(arg0);
        }
    }
    if (out != NULL) {
        if (total > arg3) {
            total -= arg3;
        }
        *out = total;
    }
    return 0;
}
