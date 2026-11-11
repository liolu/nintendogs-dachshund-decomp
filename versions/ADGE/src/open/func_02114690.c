#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} M2C_S12;

s32 func_02114690(void *arg0, M2C_S12 *arg1) {
    s32 v = M2C_FIELD(arg0, u16 *, 0xB8);

    if (v == 0) {
        *arg1 = *(M2C_S12 *) ((s8 *) M2C_FIELD(arg0, void **, 0x1C) + 0x30);
        return 0;
    }
    if (v < 0x3C) {
        *arg1 = *(M2C_S12 *) ((s8 *) M2C_FIELD(arg0, void **, 0x1C) + 0x30);
        return 1;
    }
    *arg1 = *(M2C_S12 *) ((s8 *) arg0 + 0x9C);
    return 1;
}
