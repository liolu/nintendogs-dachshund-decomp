/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020706f4(M2C_UNK);
void func_020c5078(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020c5274(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020c5538(void);
void func_020c5578(M2C_UNK);

void func_02070840(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r2;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_r4, s32 *, 0x1C) != 0) {
        func_020c5578(2);
    }
    func_020c5274((s32) M2C_FIELD(arg0, u8 *, 0x3C), arg1, arg2, arg3);
    temp_r2 = M2C_FIELD(temp_r4, s32 *, 0x1C);
    if (temp_r2 != 0) {
        func_020c5078((s32) M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFF, temp_r2);
    }
    func_020706f4(arg0);
    M2C_FIELD(arg0, s32 *, 0x30) = func_020c5538();
    M2C_FIELD(arg0, s8 *, 0x2C)  = 1;
}
