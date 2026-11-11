#include "m2c.h"

extern void *data_0214da84;

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_ov006_0216018c(void *arg0) {
    void *temp_r0;

    temp_r0                        = data_0214da84 + 0x74;
    *(M2C_S12 *) ((s8 *) arg0 + 0) = *(M2C_S12 *) ((s8 *) data_0214da84 + 0x74);
}
