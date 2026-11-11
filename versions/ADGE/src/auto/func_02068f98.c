#include "m2c.h"

M2C_UNK func_0206906c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214f466;

void func_02068f98(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_0206906c(&data_0214f466);
}
