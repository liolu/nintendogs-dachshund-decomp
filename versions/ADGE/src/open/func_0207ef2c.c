#include "m2c.h"
extern s32 data_027c0004[];
extern u8 data_02153e04[];
void func_0207ef2c(u32 arg0, s32 arg1) {
    s32 i;
    u8 *entry;

#pragma opt_strength_reduction off
    for (i = 0; i < 0x16; i++) {
        if (arg0 & 1) {
            entry = 0;
            if (i >= 8 && i <= 0xB) {
                entry = data_02153e04 + (i - 8) * 0xC;
            } else if (i >= 3 && i <= 6) {
                entry = data_02153e04 + (i + 1) * 0xC;
            } else {
                data_027c0004[i] = arg1;
            }
            if (entry != 0) {
                *(s32 *) (entry + 0) = arg1;
                *(s32 *) (entry + 8) = 0;
                *(s32 *) (entry + 4) = 1;
            }
        }
        arg0 >>= 1;
    }
}
