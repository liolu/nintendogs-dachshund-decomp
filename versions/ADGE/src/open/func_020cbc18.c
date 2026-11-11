#include "m2c.h"
s32 func_020cbc18(s32 *arg0, s32 arg1) {
    s32 *table = *(s32 **) ((s8 *) arg0 + 4);

    return *(s32 *) ((s8 *) arg0 + 8) + table[arg1 & 0xFFFF];
}
