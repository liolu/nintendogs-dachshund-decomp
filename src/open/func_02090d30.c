#include "m2c.h"
s32 func_02027050(s32 arg0);
extern u8 data_021544dc[];
extern u8 data_02154300[];
s32 func_02090d30(s32 arg0) {
    u8 *p = data_021544dc;

    if ((*(s32 *)(p + 0x94) != 0) && (*(s32 *)(p + 0x98) != 0) &&
        (func_02027050(arg0) != 0) && (*(s16 *)(data_02154300 + 6) == 0x4F)) {
        return 1;
    }
    return 0;
}
