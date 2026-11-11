/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02085e88(s32, s32);                    /* extern */
M2C_UNK func_020863bc(s32, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern s32 data_02159e5c;
extern s32 data_02159e74;

void func_020dae20(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4, s32 arg5) {
    u32 temp_r4;
    u32 temp_r5;

    temp_r4 = data_02159e5c;
    temp_r5 = (arg1 * 0x1B8) + (data_02159e74 + 4);
    func_02085e88(temp_r4, 0xE011);
    func_020863bc(temp_r4, temp_r5 + 0x24, arg2, arg3, (s32) arg4, arg5);
    M2C_FIELD(temp_r5, s32 *, 0x38) = 1;
}
