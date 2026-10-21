#include "m2c.h"
void func_020d6068(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg0) {
    case 0:
    case 1:
        if (arg2 != 0) {
            *(u32 *) 0x04000000 |= arg1 << 8;
        } else {
            *(u32 *) 0x04000000 &= ~(arg1 << 8);
        }
        break;
    case 2:
    case 3:
        if (arg2 != 0) {
            *(u32 *) 0x04001000 |= arg1 << 8;
        } else {
            *(u32 *) 0x04001000 &= ~(arg1 << 8);
        }
        break;
    }
}
