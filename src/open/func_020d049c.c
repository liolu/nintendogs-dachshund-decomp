#include "m2c.h"
extern s32 data_02159e38;
s32 func_020d049c(s16 arg0) {
    return *(s32 *) ((s8 *) data_02159e38 + arg0 * 0x18 + 0x1000 + 0x44C) + 4;
}
