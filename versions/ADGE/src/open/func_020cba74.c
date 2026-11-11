#include "m2c.h"
s32 func_020cba74(u8 *arg0, s32 arg1, s32 arg2) {
    s32 res;
    u32 i;
    s32 hi;
    s32 lo;
    u32 entry;

    res = -1;
    for (i = 0; i < *(u16 *) (*(u8 **) (arg0 + 0xC) + 8); i++) {
        entry = ((u32 *) *(u32 *) (arg0 + 0x10))[i];
        switch (*(u8 *) (*(u8 **) (arg0 + 0xC) + 0xB)) {
            case 1:
                hi = entry >> 8;
                lo = entry & 0xFF;
                break;
            case 2:
                hi = entry >> 16;
                lo = entry & 0xFFFF;
                break;
        }
        if (hi == arg1 && lo == arg2) {
            res = i;
            break;
        }
    }
    return res;
}
