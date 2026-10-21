#include "m2c.h"
s32 func_020972d4(void);
extern u8 data_02154688[];
extern u32 data_021555e8;
s32 func_02099c68(void) {
    u32 t;

    if (func_020972d4() == 0) {
        return 0;
    }
    t = *(u32 *) (data_02154688 + 0x10);
    if (t > 0x12C && *(u32 *) (data_02154688 + 0x14) > t * 7 / 10 &&
        *(u32 *) (data_02154688 + 0x18) < t * 8 / 100) {
        if (data_021555e8 < 0xFFFF) {
            data_021555e8++;
        }
        if (data_021555e8 == 4) {
            return 1;
        }
    } else {
        data_021555e8 = 0;
    }
    return 0;
}
