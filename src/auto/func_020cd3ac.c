/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_02154c70;

void func_020cd3ac(void) {
    if (M2C_FIELD(data_02154c70, s16 *, 0x6C) == 2) {
        M2C_FIELD(data_02154c70, s16 *, 0x6C) = 3;
        M2C_FIELD(data_02154c70, s16 *, 0x6E) = 0;
    }
}
