#include "engine.h"
#include "m2c.h"

void func_020a7108(M2C_UNK, M2C_UNK);
void func_020abb70(M2C_UNK);
void func_020abbcc(M2C_UNK);

extern s16 data_02155600;

void func_020abb48(s32 arg0) {
    data_02155600 = (s16) arg0;
    func_020a7108((s32) func_020abbcc, (s32) func_020abb70);
}
