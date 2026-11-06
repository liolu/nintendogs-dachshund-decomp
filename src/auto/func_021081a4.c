#include "m2c.h"

extern s32 data_02148b04;
extern void *data_02153704;

s32 func_021081a4(void) {
    return data_02148b04 + M2C_FIELD(data_02153704, s32 *, 0xC);
}
