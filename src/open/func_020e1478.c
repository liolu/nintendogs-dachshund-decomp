#include "m2c.h"
extern void *data_02159e70;
extern void **data_0215a044;
void func_020e1478(void) {
    s8 *base;

    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(&data_0215a044, void **, 0), void **, 4), u16 *, 2) != 0) {
        base = (s8 *) data_02159e70 + 0x1000;
        M2C_FIELD(base, s32 *, 0xD14) = 0xA;
    } else {
        base = (s8 *) data_02159e70 + 0x1000;
        M2C_FIELD(base, s32 *, 0xD14) = 0xC;
    }
}
