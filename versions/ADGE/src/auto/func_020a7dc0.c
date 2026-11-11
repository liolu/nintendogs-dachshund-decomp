#include "m2c.h"

extern void *data_021555fc;

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_020a7dc0(void *arg0) {
    void *temp_r0;

    temp_r0                        = data_021555fc + 0xC;
    *(M2C_S12 *) ((s8 *) arg0 + 0) = *(M2C_S12 *) ((s8 *) data_021555fc + 12);
}
