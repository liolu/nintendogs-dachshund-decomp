#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

extern void *data_0215a064;
s32 func_02044980(s16 arg0);
void func_01ff832c(M2C_UNK arg0, void *arg1, void *arg2, M2C_UNK arg3);

void func_020a8128(void *arg0, M2C_UNK arg1) {
    M2C_S12 buf0;
    M2C_S12 buf1;
    void *temp_r0;
    void *p;

    func_02044980(M2C_FIELD(arg0, s16 *, 0x9C));
    p = data_0215a064;
    temp_r0 = (s8 *) M2C_FIELD(p, void **, 0x1C) + 0x48;
    buf0 = *(M2C_S12 *) temp_r0;
    temp_r0 = (s8 *) M2C_FIELD(p, void **, 0x1C) + 0x30;
    buf1 = *(M2C_S12 *) temp_r0;
    func_01ff832c(0x5000, &buf0, &buf1, arg1);
}
