#include "m2c.h"

extern M2C_UNK data_ov004_0216e3c4;

void func_ov004_0216c814(s16 v) {
    u8 *a                              = *(u8 **) &data_ov004_0216e3c4;
    *(s16 *) (a + 0x44)                = v;
    a                                  = *(u8 **) &data_ov004_0216e3c4;
    *(s16 *) (*(u8 **) a + 0xDC)       = v;
    a                                  = *(u8 **) &data_ov004_0216e3c4;
    *(s16 *) (*(u8 **) (a + 4) + 0x88) = v;
}
