/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);
M2C_UNK func_02027f68(M2C_UNK, M2C_UNK);

extern void *data_0215a04c;
extern void *data_0215a064;

void func_0211cf24(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) < 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = func_02027f68(func_01ffdb08((s32) M2C_FIELD(data_0215a04c, s16 *, 0xE)), 7);
    }
    if (M2C_FIELD(data_0215a064, s16 *, 0x100) != 7) {
        return;
    }
    temp_r0 = func_01ffdb08((s32) M2C_FIELD(data_0215a04c, s16 *, 0xE));
    if (M2C_FIELD(arg0, void **, 0x1C) != NULL) {
        temp_r0_2 = func_02027f68(temp_r0, 7);
        if ((s32) (s16) (temp_r0_2 - M2C_FIELD(arg0, s32 *, 0x20)) > 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s16 *, 4) = (s16) temp_r0_2;
        } else {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s16 *, 4) = 0;
        }
    }
    M2C_FIELD(arg0, s16 *, 4)    = 1;
    M2C_FIELD(arg0, s32 *, 0xC)  = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = 9;
}
