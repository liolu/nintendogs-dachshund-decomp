#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

extern void *data_0215a064;

void func_02037130();
void func_02037130(void *arg0, s32 arg1);
void func_0202f694(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;

    *(M2C_S12 *) ((s8 *) arg0 + 0x26C) = *(M2C_S12 *) ((s8 *) arg0 + 0x2A0);
    temp_r0 = M2C_FIELD(data_0215a064, void **, 0x1C);
    temp_r0_2 = (s8 *) temp_r0 + 0x30;
    *(M2C_S12 *) ((s8 *) arg0 + 0x278) = *(M2C_S12 *) temp_r0_2;
    func_02037130(arg0, 0x300);
}
