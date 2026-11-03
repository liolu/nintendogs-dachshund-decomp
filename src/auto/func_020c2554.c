/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ffeaf8();    /* extern */
s32 func_020037ec();               /* extern */
M2C_UNK func_0208b5f8();            /* extern */
s32 func_0208b744();                  /* extern */
M2C_UNK func_020c1cfc(); /* extern */

s32 func_020c2554(void *arg0, s16 arg1, s16 arg2) {
    u8 sp0[64];
    s32 temp_r0;
    s32 temp_r8;
    s32 var_r7;

    var_r7 = 0;
    func_020c1cfc(sp0, 0x40, arg1, arg2);
    if (func_0208b744(arg0 + 4, sp0) != 0) {
        temp_r8 = M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(arg0, s32 *, 0x24);
        temp_r0 = func_020037ec(M2C_FIELD(arg0, s32 *, 0x6C), ((temp_r8 + 0xF) & ~0xF) + 0x60, 0x10);
        func_0208b5f8(arg0 + 4, temp_r0 + 0x60, temp_r8);
        M2C_FIELD(arg0, s32 *, 0x84) = temp_r0;
        M2C_FIELD(arg0, s16 *, 0x7A) = arg1;
        M2C_FIELD(arg0, s16 *, 0x7C) = arg2;
        M2C_FIELD(arg0, s16 *, 0)    = 1;
        func_01ffeaf8(arg0, 0, 0);
        var_r7 = 1;
    }
    return var_r7;
}
