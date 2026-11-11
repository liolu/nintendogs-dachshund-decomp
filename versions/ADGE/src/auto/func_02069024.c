#include "m2c.h"

M2C_UNK func_0206906c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214f460;

void func_02069024(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_0206906c(&data_0214f460);
}
