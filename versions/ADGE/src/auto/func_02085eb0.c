/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02086410();                                /* extern */

u8 func_02085eb0(void *arg0) {
    return *(s8 *) (M2C_FIELD(arg0, s32 *, 0xC) + (func_02086410() * 2));
}