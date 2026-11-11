/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02081174(M2C_UNK, M2C_UNK);

extern s32 *data_0215a02c;
extern void *data_0215a03c;

void func_02106808(void) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 var_r4;

    if (data_0215a02c != NULL) {
        var_r4 = *data_0215a02c;
    } else {
        var_r4 = 0;
    }
    if (var_r4 != 0) {
        temp_r1 = M2C_FIELD(data_0215a03c, s32 *, 0x2C);
        if (temp_r1 != 0) {
            func_02081174(var_r4, temp_r1);
        }
        temp_r1_2 = M2C_FIELD(data_0215a03c, s32 *, 0x30);
        if (temp_r1_2 != 0) {
            func_02081174(var_r4, temp_r1_2);
        }
        temp_r1_3 = M2C_FIELD(data_0215a03c, s32 *, 0x34);
        if (temp_r1_3 != 0) {
            func_02081174(var_r4, temp_r1_3);
        }
        temp_r1_4 = M2C_FIELD(data_0215a03c, s32 *, 0x38);
        if (temp_r1_4 != 0) {
            func_02081174(var_r4, temp_r1_4);
        }
        temp_r1_5 = M2C_FIELD(data_0215a03c, s32 *, 0x3C);
        if (temp_r1_5 != 0) {
            func_02081174(var_r4, temp_r1_5);
        }
    }
    data_0215a03c = NULL;
}
