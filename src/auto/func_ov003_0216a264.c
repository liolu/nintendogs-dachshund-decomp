#include "m2c.h"

extern u8 *data_ov003_0216be24;

void func_ov003_0216a264(s16 arg0) {
    *(s16 *) (data_ov003_0216be24 + 0x46)                  = arg0;
    *(s16 *) (*(u8 **) (data_ov003_0216be24 + 0x8) + 0xDC) = arg0;
    *(s16 *) (*(u8 **) (data_ov003_0216be24 + 0xC) + 0x88) = arg0;
}
