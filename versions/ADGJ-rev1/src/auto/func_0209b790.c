/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
s32 func_02027f40(s32, M2C_UNK);                    /* extern */
extern void *data_02153708;
extern void *data_02153720;

void func_0209b790(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) < 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = func_02027f40(func_01ffda04(M2C_FIELD(data_02153708, s16 *, 0xE)), 7);
    }
    if (M2C_FIELD(data_02153720, s16 *, 0x100) != 7) {
        return;
    }
    temp_r0 = func_01ffda04(M2C_FIELD(data_02153708, s16 *, 0xE));
    if (M2C_FIELD(arg0, void **, 0x1C) != NULL) {
        temp_r0_2 = func_02027f40(temp_r0, 7);
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
