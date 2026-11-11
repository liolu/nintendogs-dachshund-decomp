/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020a7460(M2C_UNK);
void func_020ab804(M2C_UNK);

void func_020ab7a8(s32 arg0) {
    s16 temp_r1;
    void *temp_r2;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {
        case 0:
            temp_r2                         = *M2C_FIELD(arg0, void ***, 0x214);
            M2C_FIELD(temp_r2, u16 *, 0x20) = (u16) (M2C_FIELD(temp_r2, u16 *, 0x20) | 1);
            func_020a7460(arg0);
            return;
        case 1:
            func_020ab804(arg0);
            return;
    }
}
