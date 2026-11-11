/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020a67c0(M2C_UNK);
void func_020a7460(M2C_UNK);
void func_020ab968(M2C_UNK, M2C_UNK);

void func_020abb70(s32 arg0) {
    void **temp_r2;
    void *temp_r2_2;
    void *temp_r4;

    temp_r4                         = M2C_FIELD(arg0, void **, 0x1B0);
    M2C_FIELD(temp_r4, s16 *, 0x9C) = 0;
    func_020ab968((s32) temp_r4, M2C_FIELD(arg0, s32 *, 0x28));
    temp_r2                           = M2C_FIELD(temp_r4, void ***, 0x214);
    *temp_r2                          = M2C_FIELD(arg0, void **, 0x1BC);
    temp_r2_2                         = *temp_r2;
    M2C_FIELD(temp_r2_2, u16 *, 0x20) = (u16) (M2C_FIELD(temp_r2_2, u16 *, 0x20) | 1);
    func_020a7460((s32) temp_r4);
    func_020a67c0((s32) temp_r4);
}
