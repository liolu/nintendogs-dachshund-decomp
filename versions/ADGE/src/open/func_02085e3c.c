#include "m2c.h"
extern s32 func_02085e80(s32 arg0);
extern s32 func_02085e80(s32);
s32 func_02085e80(s32 arg0);
s32 func_02085e3c(s32 arg0, s32 arg1) {
    s32 base = arg0 + 8;

    if ((arg1 < 0) || (arg1 >= func_02085e80(arg0))) {
        return 0;
    }
    return base + arg1 * 6;
}
