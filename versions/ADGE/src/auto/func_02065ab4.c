/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02065c50(M2C_UNK);
s32 func_02066388(void *, s32 *, s32);
void func_0208025c(void);

M2C_UNK func_0206cdc0(s32, s32, u32);               /* extern */
M2C_UNK func_0208022c(s32, u32);                    /* extern */

void func_02065ab4(s32 arg0) {
    u32 temp_r8;
    u32 var_r9;

    temp_r8 = arg0 + 0xE0;
loop_1:
    var_r9 = M2C_FIELD(arg0, u32 *, 0x20);
    if (var_r9 > 0x100U) {
        var_r9 = 0x100;
    }
    func_0206cdc0(M2C_FIELD(arg0, s32 *, 0x18), temp_r8, var_r9);
    func_0208022c(temp_r8, var_r9);
    func_0208025c();
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0xC)  = temp_r8;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 0x14) = var_r9;
    if ((func_02066388((void *) arg0, (s32 *) 7, 0xA) != 0) && (func_02066388((void *) arg0, (s32 *) 9, 1) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + var_r9);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + var_r9);
        M2C_FIELD(arg0, u32 *, 0x20) = (u32) (M2C_FIELD(arg0, u32 *, 0x20) - var_r9);
        if (M2C_FIELD(arg0, u32 *, 0x20) != 0) {
            goto loop_1;
        }
    }
    func_02065c50(arg0);
}
