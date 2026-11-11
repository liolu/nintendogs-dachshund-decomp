#include "m2c.h"

extern u8 *data_ov004_0216e3c4;

void func_ov004_0216c7e8(s16 arg0) {
    *(s16 *) (data_ov004_0216e3c4 + 0x46)                  = arg0;
    *(s16 *) (*(u8 **) (data_ov004_0216e3c4 + 0x8) + 0xDC) = arg0;
    *(s16 *) (*(u8 **) (data_ov004_0216e3c4 + 0xC) + 0x88) = arg0;
}
