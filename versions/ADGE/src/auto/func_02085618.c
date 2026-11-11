/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0205df50(M2C_UNK, M2C_UNK);

void func_02085618(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_r5;
    s16 temp_r5_2;
    u8 temp_r1;
    u8 temp_r3;
    void *temp_ip;

    temp_ip = M2C_FIELD(arg1, void **, 4);
    temp_r1 = M2C_FIELD(temp_ip, u8 *, 6);
    temp_r3 = M2C_FIELD(temp_ip, u8 *, 7);
    if (arg2 < (s32) temp_r1) {
        temp_r5 = M2C_FIELD(temp_ip, s16 *, 0);
        M2C_FIELD(arg0, s16 *, 0x34) =
            (s16) (temp_r5 + func_0205df50(arg2 * (M2C_FIELD(temp_ip, s16 *, 2) - temp_r5), (s32) temp_r1));
        return;
    }
    if (arg2 < (s32) temp_r3) {
        M2C_FIELD(arg0, s16 *, 0x34) = (s16) M2C_FIELD(temp_ip, s16 *, 2);
        return;
    }
    temp_r5_2 = M2C_FIELD(temp_ip, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 0x34) =
        (s16) (temp_r5_2 + func_0205df50((arg2 - 0xFF) * (temp_r5_2 - M2C_FIELD(temp_ip, s16 *, 2)), 0xFF - temp_r3));
}
