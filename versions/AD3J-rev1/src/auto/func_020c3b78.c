/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020c4da0();                                /* extern */
extern void *data_02154c34;

void func_020c3b78(void) {
    M2C_FIELD(data_02154c34, s32 *, 0x40) = func_020c4da0();
}
