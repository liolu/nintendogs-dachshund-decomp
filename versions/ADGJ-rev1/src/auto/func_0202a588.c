/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202a588(void *arg0) {
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E4), s16 *, 0x1E) > 0x708) {
        M2C_FIELD(arg0, s16 *, 0xE8) = 0x41F;
        return 1;
    }
    M2C_FIELD(arg0, s16 *, 0xE8) = 0x420;
    return 1;
}
