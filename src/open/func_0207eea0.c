#include "m2c.h"
extern u32 data_027c0004[];
extern u8 data_02153e04[];
u32 func_0207eea0(u32 arg0) {
    s32 i;
    u32 *p = data_027c0004;

    for (i = 0; i < 0x16; i++) {
        if (arg0 & 1) {
            if (8 <= i && i <= 0xB) {
                return *(u32 *) ((u8 *) data_02153e04 + (i - 8) * 0xC);
            }
            if (3 <= i && i <= 6) {
                return *(u32 *) ((u8 *) data_02153e04 + (i + 1) * 0xC);
            }
            return *p;
        }
        arg0 >>= 1;
        p++;
    }
    return 0;
}
