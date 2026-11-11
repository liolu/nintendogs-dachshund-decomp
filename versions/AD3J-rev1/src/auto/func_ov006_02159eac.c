/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov006_0215bb64;

u8 *func_02120154(void);
s32 func_0205e83c(void *, void *, s32);

s32 func_ov006_02159eac(void) {
    u8 *r4;
    u8 *r0;

    r4 = data_ov006_0215bb64 + 0x12E;
    r0 = func_02120154();
    return func_0205e83c(r0 + 4, r4, 6) != 0;
}
