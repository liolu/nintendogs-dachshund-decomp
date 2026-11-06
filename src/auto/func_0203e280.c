#include "m2c.h"

void func_0203e280(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD((arg0 + (arg1 * 2)), s16 *, 0x150) = arg2;
    switch (arg1) {                                 /* irregular */
        case 0:
            M2C_FIELD(arg0, s16 *, 0xFC) = arg2;
            return;
        case 2:
            if ((s32) arg2 >= 0x14) {
                M2C_FIELD(arg0, s16 *, 0x100) = arg2;
            }
            return;
    }
}
