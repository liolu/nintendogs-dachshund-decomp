/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02067048(M2C_UNK);
M2C_UNK func_02067780(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0206e1b8(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02080820(M2C_UNK, M2C_UNK);

void func_02066f8c(s32 arg0) {
    u32 temp_r7;
    u32 var_r8;

    temp_r7 = arg0 + 0xE0;
loop_1:
    var_r8 = M2C_FIELD(arg0, u32 *, 0x20);
    if (var_r8 > 0x100U) {
        var_r8 = 0x100;
    }
    func_02080820(temp_r7, 0x100);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x10) = temp_r7;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 0x14) = var_r8;
    if (func_02067780(arg0, 6, 1) != 0) {
        func_0206e1b8(temp_r7, M2C_FIELD(arg0, s32 *, 0x1C), (s32) var_r8);
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + var_r8);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + var_r8);
        M2C_FIELD(arg0, u32 *, 0x20) = (u32) (M2C_FIELD(arg0, u32 *, 0x20) - var_r8);
        if (M2C_FIELD(arg0, u32 *, 0x20) != 0) {
            goto loop_1;
        }
    }
    func_02067048(arg0);
}
