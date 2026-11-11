/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0211f530();                                /* extern */
M2C_UNK func_0211fb3c(M2C_UNK *, M2C_UNK *);        /* extern */
extern void *data_ov006_0215bb60;
extern M2C_UNK func_ov006_02158808;

void func_ov006_02158aa0(void) {
    M2C_UNK sp0;

    if (func_0211f530() == 0) {
        return;
    }
    M2C_FIELD(data_ov006_0215bb60, s16 *, 0x58) = 0x384;
    func_0211fb3c(&func_ov006_02158808, &sp0);
}
