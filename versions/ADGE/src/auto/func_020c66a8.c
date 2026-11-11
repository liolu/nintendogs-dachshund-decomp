/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0209572c(M2C_UNK);
void func_020959b8(void);
M2C_UNK func_02097278(void);
M2C_UNK func_02099c68(void);

extern u16 data_0214d5fc;
extern M2C_UNK data_0214d624;
extern void *data_02158ac4;

void func_020c66a8(void) {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 var_r5;

    temp_r4 = func_02099c68();
    temp_r0 = M2C_FIELD(data_02158ac4, s16 *, 0xA);
    if ((s32) temp_r0 > 0) {
        M2C_FIELD(data_02158ac4, s16 *, 0xA) = (s16) (temp_r0 - 1);
    }
    if ((u16) (data_0214d5fc & 0xC0F) != 0) {
        M2C_FIELD(data_02158ac4, s16 *, 0xA) = 0xA;
    } else if (M2C_FIELD(&data_0214d624, u16 *, 2) & 2) {
        M2C_FIELD(data_02158ac4, s16 *, 0xA) = 0xA;
    }
    if (data_02158ac4 != NULL) {
        M2C_FIELD(data_02158ac4, s32 *, 0) = -1;
        M2C_FIELD(data_02158ac4, s16 *, 8) = -1;
    }
    func_020959b8();
    var_r5 = 0;
loop_9:
    temp_r0_2 = func_0209572c(var_r5);
    if (temp_r0_2 >= 0) {
        M2C_FIELD(data_02158ac4, s32 *, 0) = temp_r0_2;
        M2C_FIELD(data_02158ac4, s16 *, 8) = (s16) var_r5;
    } else {
        var_r5 = (s32) (s16) (var_r5 + 1);
        if (var_r5 < 3) {
            goto loop_9;
        }
    }
    M2C_FIELD(data_02158ac4, s32 *, 0x10) = 0;
    if (((s32) M2C_FIELD(data_02158ac4, s32 *, 0) < 0) && (temp_r4 != 0)) {
        M2C_FIELD(data_02158ac4, s32 *, 0x10) = 1;
    }
    M2C_FIELD(data_02158ac4, s32 *, 0xC) = func_02097278();
    temp_r0_3                            = M2C_FIELD(data_02158ac4, s32 *, 0);
    if (temp_r0_3 != -1) {
        M2C_FIELD(data_02158ac4, s32 *, 4) = temp_r0_3;
    }
}
