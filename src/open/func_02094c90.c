#include "m2c.h"
void *func_0207d6a4(s32 arg0, u32 arg1, s32 arg2); /* extern */
void func_0209417c(s32 arg0); /* extern */
extern s32 data_021545e0;
extern void *data_021545d8;
s32 func_02094c90(void **arg0, u32 arg1) {
    void *temp_r4;
    u32 temp_r8;

    if (arg0 != NULL) {
        temp_r4 = func_0207d6a4(data_021545e0, arg1 * 0x18 + 0x94, 4);
        M2C_FIELD(temp_r4, u32 *, 0x0) = arg1;
        for (temp_r8 = 0; temp_r8 < arg1; temp_r8++) {
            func_0209417c((s32) ((s8 *) temp_r4 + 0x94 + temp_r8 * 0x18));
        }
        M2C_FIELD(temp_r4, void **, 0x90) = data_021545d8;
        M2C_FIELD(temp_r4, u32 *, 0x4) = 0;
        *arg0 = temp_r4;
        return 1;
    }
    return 0;
}
