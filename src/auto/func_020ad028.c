/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_02153740;

void func_020ad028(s32 *arg0) {
    *arg0 += 1;
    if ((s32) *arg0 > 0x10) {
        M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
    }
}
