#include "m2c.h"
s32 func_0209a558(s32 arg0, s32 arg1, s32 arg2) {
    s32 found = -1;
    s32 i;

    for (i = 0; i < arg1; i++) {
        if (arg2 == ((s16 *) arg0)[i * 16 + 1]) {
            found = i;
            break;
        }
    }
    return found;
}
