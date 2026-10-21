#include "m2c.h"
s32 func_020ebcf0(void *arg0) {
    u32 sp[129];
    s32 temp_r1;
    void *temp_r2;
    u16 temp_r0;
    s32 temp_r9;
    s32 temp_r8;
    void *temp_r7;
    s32 temp_r6;
    s32 temp_r5;
    s32 temp_r4;

    temp_r2 = M2C_FIELD(arg0, void **, 0x8);
    temp_r0 = 0;
    temp_r8 = M2C_FIELD(temp_r2, u16 *, 0x6);
    temp_r7 = (void *) ((s8 *) temp_r2 + 0x8);
    temp_r1 = temp_r0;
    temp_r4 = 1;
    for (; temp_r1 < temp_r8; temp_r1++, temp_r7 = (void *) ((s8 *) temp_r7 + 8)) {
        temp_r5 = temp_r4;
        temp_r6 = M2C_FIELD(temp_r7, u32 *, 4);
        for (temp_r9 = 0; temp_r9 < temp_r0; temp_r9++) {
            if (temp_r6 == sp[temp_r9]) {
                temp_r5 = 0;
                break;
            }
        }
        if (temp_r5 != 0) {
            sp[temp_r0] = temp_r6;
            temp_r0 = temp_r0 + 1;
        }
    }
    return temp_r0;
}
