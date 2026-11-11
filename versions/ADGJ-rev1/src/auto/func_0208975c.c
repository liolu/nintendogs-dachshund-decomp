/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02089b88();                                /* extern */

u8 func_0208975c(void *arg0) {
    return M2C_FIELD((M2C_FIELD(arg0, s32 *, 0xC) + (func_02089b88() * 2)), u8 *, 1);
}
