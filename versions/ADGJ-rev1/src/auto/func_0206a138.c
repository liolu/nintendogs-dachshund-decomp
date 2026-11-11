#include "m2c.h"

M2C_UNK func_0206a284(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214e9c8;

void func_0206a138(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_0206a284(&data_0214e9c8);
}
