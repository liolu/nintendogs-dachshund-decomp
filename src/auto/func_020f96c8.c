/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02066f88(M2C_UNK);
void func_020a7460(M2C_UNK);
void func_020a7470(M2C_UNK);

void func_020f96c8(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {
        case 1:
            return;
        case 0:
            func_020a7460(arg0);
            return;
        case 2:
            M2C_FIELD(arg0, s32 *, 0xBC) = 0;
            M2C_FIELD(arg0, s32 *, 0xC0) = 0;
            M2C_FIELD(arg0, s32 *, 0xC4) = 0;
            func_02066f88(arg0 + 0xC8);
            func_020a7470(arg0);
            return;
    }
}
