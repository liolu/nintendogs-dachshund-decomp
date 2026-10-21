#include "m2c.h"
void func_0206cdc0(register const void *src, register void *dest, register u32 count); /* extern */
extern void *data_021545d8;
void func_02094bf0(void **arg0, u32 arg1) {
    void *temp_r7;
    void *temp_r6;
    s8 *temp_r5;
    u32 temp_r4;
    void *temp_r2;

    if (arg0 == NULL) {
        return;
    }
    temp_r2 = *arg0;
    if (temp_r2 == NULL) {
        return;
    }
    if (arg1 >= M2C_FIELD(temp_r2, u32 *, 0x0)) {
        return;
    }
    temp_r4 = arg1 * 0x18;
    temp_r5 = (s8 *) temp_r2 + 0x94;
    temp_r6 = *(void **) &data_021545d8;
    temp_r7 = temp_r5 + temp_r4;
    func_0206cdc0(M2C_FIELD(temp_r6, const void **, 0x14), M2C_FIELD(temp_r7, void **, 0x14), 0x13C);
    M2C_FIELD(temp_r5, u32 *, temp_r4) = M2C_FIELD(temp_r6, u32 *, 0x0);
    M2C_FIELD(temp_r7, u32 *, 0x4) = M2C_FIELD(temp_r6, u32 *, 0x4);
    M2C_FIELD(temp_r7, u32 *, 0x8) = M2C_FIELD(temp_r6, u32 *, 0x8);
}
