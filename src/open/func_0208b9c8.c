#include "m2c.h"
s32 func_020969e4(void);
s32 func_0208fe1c(void);
s32 func_02089d60(void *arg0);
s32 func_02088ecc(void);
s32 func_0208b9c8(s32 arg0, s32 arg1) {
    s32 i;
    s32 idx;
    s32 count;
    u16 bit;

    if ((func_020969e4() != -0xB) && (func_0208fe1c() == 0)) {
        count = *(s32 *) arg0;
        for (i = 0; i < count; i = (s16) (i + 1)) {
            if (*(s32 *) (arg0 + i * 4 + 0x18) != 0) {
                if (arg1 == *(s16 *) (arg0 + i * 2 + 0x12)) {
                    return -1;
                }
            }
        }
        idx = func_02089d60((void *) arg0);
        if (idx != -1) {
            *(s16 *) (arg0 + idx * 2 + 0x12) = arg1;
            bit = 1 << idx;
            *(u16 *) (arg0 + 8) |= bit;
            *(s32 *) (arg0 + idx * 4 + 0x28) = 0;
            *(u16 *) (arg0 + 0x26) &= ~bit;
        }
        if (*(u16 *) (arg0 + 0x24) == 0x64 && arg1 == 0xE && func_02088ecc() != 0) {
            func_0208b9c8(arg0, 0xF);
        }
        return idx;
    }
    return -1;
}
