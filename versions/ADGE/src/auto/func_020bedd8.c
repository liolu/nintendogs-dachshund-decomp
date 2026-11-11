/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064db4(M2C_UNK *, M2C_UNK, M2C_UNK, u32, s32, s32, s32); /* extern */
void *func_020c0834();                              /* extern */
extern void *data_02155660;
extern M2C_UNK func_020bd8b8;

void func_020bedd8(M2C_UNK arg0, u32 arg1) {
    if (arg1 > (u32) M2C_FIELD(func_020c0834(), u16 *, 0x34)) {
        return;
    }
    if (M2C_FIELD(data_02155660, s32 *, 0x34) == 0) {
        return;
    }
    M2C_FIELD(data_02155660, s32 *, 0x34) = 0;
    if (func_02064db4(&func_020bd8b8, 0, arg0, arg1, 0xFFFF, 5, 2) != 2) {
        M2C_FIELD(data_02155660, s32 *, 0x34) = 1;
    }
}
