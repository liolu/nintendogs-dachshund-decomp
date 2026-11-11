/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205eb98(s16 *arg0, s32 *arg1, s32 arg2) {
    if (arg1 == NULL) {
        return 0;
    }
    if (arg2 == 0) {
        return -1;
    }
    if (arg0 != NULL) {
        *arg0 = (s16) (u8) *arg1;
    }
    if ((u8) *arg1 == 0) {
        return 0;
    }
    return 1;
}
