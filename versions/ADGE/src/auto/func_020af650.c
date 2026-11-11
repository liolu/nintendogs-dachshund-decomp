#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_020af650(void *arg0, void *arg1) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0                        = M2C_FIELD(arg0, void **, 0x214);
    temp_r0_2                      = temp_r0 + 0xC;
    *(M2C_S12 *) ((s8 *) arg1 + 0) = *(M2C_S12 *) ((s8 *) temp_r0 + 12);
}
