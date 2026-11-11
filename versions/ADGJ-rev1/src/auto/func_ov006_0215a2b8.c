/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern void *data_ov006_0215bb64;

s32 func_ov006_0215a2b8(void) {
    if ((M2C_FIELD(data_ov006_0215bb64, s32 *, 0x10C) == 1) && (M2C_FIELD(data_ov006_0215bb64, s32 *, 0x110) == 1)) {
        return 1;
    }
    return 0;
}
