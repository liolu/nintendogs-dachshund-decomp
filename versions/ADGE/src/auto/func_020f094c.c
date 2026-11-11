/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020f094c(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r1)(arg0);
    M2C_UNK (*temp_r1_3)(arg0);
    u16 temp_r1_2;
    u16 temp_r1_4;

    if (arg1 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) == 5) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            temp_r1                      = M2C_FIELD(arg0, M2C_UNK(**)(), 0x38);
            if (temp_r1 != NULL) {
                temp_r1(arg0);
            }
        }
        temp_r1_2 = M2C_FIELD(arg0, u16 *, 4);
        if (temp_r1_2 == 0xFFFF) {
            return;
        }
        func_020eb9fc(M2C_FIELD(arg0, s32 *, 0), (s32) temp_r1_2, 1);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 5) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 5;
        temp_r1_3                    = M2C_FIELD(arg0, M2C_UNK(**)(), 0x34);
        if (temp_r1_3 != NULL) {
            temp_r1_3(arg0);
        }
    }
    temp_r1_4 = M2C_FIELD(arg0, u16 *, 4);
    if (temp_r1_4 == 0xFFFF) {
        return;
    }
    func_020eb9fc(M2C_FIELD(arg0, s32 *, 0), (s32) temp_r1_4, 0);
}
