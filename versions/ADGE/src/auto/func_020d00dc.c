#include "m2c.h"

void func_020d00dc(void *arg0, s32 arg1, s16 arg2) {
    switch (arg1) {                                 /* irregular */
        case 2:
            M2C_FIELD(arg0, s16 *, 0x6C) = arg2;
            return;
        case 0:
            M2C_FIELD(arg0, s16 *, 0x68) = arg2;
            return;
        case 1:
            M2C_FIELD(arg0, s16 *, 0x6A) = arg2;
            return;
    }
}
