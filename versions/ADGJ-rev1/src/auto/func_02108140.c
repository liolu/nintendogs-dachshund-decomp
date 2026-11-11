#include "m2c.h"

extern void *data_02156084;

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_02108140(void *arg0) {
    void *temp_r0;

    temp_r0                        = data_02156084 + 0xC;
    *(M2C_S12 *) ((s8 *) arg0 + 0) = *(M2C_S12 *) ((s8 *) data_02156084 + 12);
}
