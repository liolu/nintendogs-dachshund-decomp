#include "m2c.h"

M2C_UNK func_0206a464(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214e9c8;

void func_0206a368(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_0206a464(&data_0214e9c8);
}
