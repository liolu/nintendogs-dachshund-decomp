#include "m2c.h"
s32 func_020038a8(s32 *, M2C_UNK);
M2C_UNK func_020667d8();
void func_020ca0b4(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;
    s32 i;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    temp_r1 = 0;
    if (temp_r0 != 0) {
        temp_r1 = M2C_FIELD(temp_r0, s32 *, 0xC);
    }
    M2C_FIELD(arg0, s32 *, 0x60) = func_020038a8((s32 *) arg1, M2C_FIELD(temp_r1, u8 *, 0x17) * 0x30);
    for (i = 0; (temp_r1 = 0, (temp_r0 = M2C_FIELD(arg0, s32 *, 0)) != 0 && (temp_r1 = M2C_FIELD(temp_r0, s32 *, 0xC)), i < M2C_FIELD(temp_r1, u8 *, 0x17)); i++) {
        temp_r2 = M2C_FIELD(arg0, s32 *, 0x60) + i * 0x30;
        func_020667d8((s32 *) temp_r2);
        M2C_FIELD(temp_r2, s32 *, 0x24) = 0;
        M2C_FIELD(temp_r2, s32 *, 0x28) = 0;
        M2C_FIELD(temp_r2, s32 *, 0x2C) = 0;
    }
}
