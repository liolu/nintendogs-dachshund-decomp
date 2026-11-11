/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0211eba4();                            /* extern */
extern void *data_02154c78;

void func_020cfe10(s32 arg0, s32 arg1) {
    func_0211eba4();
    M2C_FIELD(data_02154c78, s16 *, 0)    = 1;
    M2C_FIELD(data_02154c78, s16 *, 6)    = 1;
    M2C_FIELD(data_02154c78, s32 *, 0xC)  = arg0;
    M2C_FIELD(data_02154c78, s32 *, 0x10) = arg1;
    M2C_FIELD(data_02154c78, s16 *, 2)    = 1;
}
