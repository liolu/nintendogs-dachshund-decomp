/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02065c50(M2C_UNK);
s32 func_02066388(void *, s32 *, s32);

M2C_UNK func_0206cdc0(s32, s32, u32);               /* extern */
M2C_UNK func_020801f4(s32, M2C_UNK);                /* extern */

void func_02065b94(s32 arg0) {
    u32 temp_r7;
    u32 var_r8;

    temp_r7 = arg0 + 0xE0;
loop_1:
    var_r8 = M2C_FIELD(arg0, u32 *, 0x20);
    if (var_r8 > 0x100U) {
        var_r8 = 0x100;
    }
    func_020801f4(temp_r7, 0x100);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x10) = temp_r7;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 0x14) = var_r8;
    if (func_02066388((void *) arg0, (s32 *) 6, 1) != 0) {
        func_0206cdc0(temp_r7, M2C_FIELD(arg0, s32 *, 0x1C), var_r8);
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + var_r8);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + var_r8);
        M2C_FIELD(arg0, u32 *, 0x20) = (u32) (M2C_FIELD(arg0, u32 *, 0x20) - var_r8);
        if (M2C_FIELD(arg0, u32 *, 0x20) != 0) {
            goto loop_1;
        }
    }
    func_02065c50(arg0);
}
