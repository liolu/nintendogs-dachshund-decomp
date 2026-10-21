#include "m2c.h"
extern s16 data_02139b88[];
extern s32 *data_0214da84;
s32 func_02044340(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 >= 0 && arg2 < 8) {
        return data_02139b88[arg2];
    }
    if (arg2 < 8) {
        goto tail;
    }
    if (arg2 < 0xe) {
        return 0;
    }
 tail:
    return (arg2 >= 0xe) ? 0 : (s32) (((u64) (u32) arg1) >> 32);
}
