/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020f5ec0(s16);                             /* extern */
M2C_UNK func_020f614c();                            /* extern */
s32 func_020f7a04();                                /* extern */
s32 func_020fa3f4();                                /* extern */
extern u16 data_0214affc;
extern M2C_UNK data_0214b024;
extern void *data_021538dc;

void func_020c117c(void) {
    s16 temp_r0;
    s16 var_r5;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4;

    temp_r4 = func_020fa3f4();
    temp_r0 = M2C_FIELD(data_021538dc, s16 *, 0xA);
    if ((s32) temp_r0 > 0) {
        M2C_FIELD(data_021538dc, s16 *, 0xA) = (s16) (temp_r0 - 1);
    }
    if ((u16) (data_0214affc & 0xC0F) != 0) {
        M2C_FIELD(data_021538dc, s16 *, 0xA) = 0xA;
    } else if (M2C_FIELD(&data_0214b024, u16 *, 2) & 2) {
        M2C_FIELD(data_021538dc, s16 *, 0xA) = 0xA;
    }
    if (data_021538dc != NULL) {
        M2C_FIELD(data_021538dc, s32 *, 0) = -1;
        M2C_FIELD(data_021538dc, s16 *, 8) = -1;
    }
    func_020f614c();
    var_r5 = 0;
loop_9:
    temp_r0_2 = func_020f5ec0(var_r5);
    if (temp_r0_2 >= 0) {
        M2C_FIELD(data_021538dc, s32 *, 0) = temp_r0_2;
        M2C_FIELD(data_021538dc, s16 *, 8) = var_r5;
    } else {
        var_r5 += 1;
        if ((s32) var_r5 < 3) {
            goto loop_9;
        }
    }
    M2C_FIELD(data_021538dc, s32 *, 0x10) = 0;
    if (((s32) M2C_FIELD(data_021538dc, s32 *, 0) < 0) && (temp_r4 != 0)) {
        M2C_FIELD(data_021538dc, s32 *, 0x10) = 1;
    }
    M2C_FIELD(data_021538dc, s32 *, 0xC) = func_020f7a04();
    temp_r0_3                            = M2C_FIELD(data_021538dc, s32 *, 0);
    if (temp_r0_3 != -1) {
        M2C_FIELD(data_021538dc, s32 *, 4) = temp_r0_3;
    }
}
