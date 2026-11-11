#include "m2c.h"

extern void *data_ov027_02159b34;

void func_ov027_021589a8(s32 arg0, s32 arg1) {
    M2C_FIELD(data_ov027_02159b34, s32 *, 0x114) = arg0;
    M2C_FIELD(data_ov027_02159b34, s32 *, 0x118) = arg1;
}
