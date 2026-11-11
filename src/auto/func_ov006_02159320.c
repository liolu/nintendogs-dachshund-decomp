/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02066250(M2C_UNK *, M2C_UNK, M2C_UNK, u32, s32, s32, s32); /* extern */
void *func_0212015c();                              /* extern */
extern void *data_ov006_0215bb60;
extern M2C_UNK func_ov006_02157e10;

void func_ov006_02159320(M2C_UNK arg0, u32 arg1) {
    if (arg1 > (u32) M2C_FIELD(func_0212015c(), u16 *, 0x4E)) {
        return;
    }
    if (M2C_FIELD(data_ov006_0215bb60, s32 *, 0x3C) == 0) {
        return;
    }
    M2C_FIELD(data_ov006_0215bb60, s32 *, 0x3C) = 0;
    if (func_02066250(&func_ov006_02157e10, 0, arg0, arg1, 0xFFFF, 5, 2) != 2) {
        M2C_FIELD(data_ov006_0215bb60, s32 *, 0x3C) = 1;
    }
}
