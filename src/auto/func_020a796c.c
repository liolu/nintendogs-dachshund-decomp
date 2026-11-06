/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020aeb78();                            /* extern */
s32 func_020b86c0(M2C_UNK, u8, u8);                 /* extern */
extern M2C_UNK data_0214b024;
extern void *data_02153740;

void func_020a796c(void) {
    if (M2C_FIELD(data_02153740, s32 *, 0x34D0) == 0) {
        return;
    }
    if (!(M2C_FIELD(&data_0214b024, u16 *, 2) & 2)) {
        return;
    }
    if (func_020b86c0(2, M2C_FIELD(&data_0214b024, u8 *, 0), M2C_FIELD(&data_0214b024, u8 *, 1)) != 0) {
        return;
    }
    func_020aeb78();
}
