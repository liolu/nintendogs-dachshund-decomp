/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_0207d5f0(void *arg0, s32 arg1) {
    return (u16) ((u32) (arg1 + 1) % (u32) M2C_FIELD(arg0, u32 *, 4));
}
