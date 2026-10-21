#include "m2c.h"

s32 func_0208a418(u8 *arg0, s16 arg1) {
    u16 mask;
    s16 i;
    s32 slot;

    if (func_020969e4() != -0xB) {
        for (i = 0; i < *(s32 *) arg0; i++) {
            mask = (u16) (1 << i);
            if ((*(u16 *) (arg0 + 0x4) & mask) != 0) {
                if (((s16 *) (arg0 + 0x12))[i] == arg1) {
                    if (((s32 *) (arg0 + 0x18))[i] != 0) {
                        *(u16 *) (arg0 + 0x6) |= mask;
                        return i;
                    }
                }
            }
        }
        slot = func_02089d60(arg0);
        if (slot == -1) {
            return slot;
        }
        ((s16 *) (arg0 + 0x12))[slot] = arg1;
        mask = (u16) (1 << slot);
        *(u16 *) (arg0 + 0x4) |= mask;
        *(u16 *) (arg0 + 0x6) |= mask;
        *(u16 *) (arg0 + 0x8) |= mask;
        ((s32 *) (arg0 + 0x2C))[slot] = 0;
        ((s32 *) (arg0 + 0x38))[slot] = 0;
        *(u16 *) (arg0 + 0x2A) &= ~mask;
        return slot;
    }
    return -1;
}
