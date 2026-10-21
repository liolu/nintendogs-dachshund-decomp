#include "m2c.h"
u8 *func_0205ec24(u8 *arg0, s32 arg1, s32 arg2) {
    u8 val = arg1 & 0xff;
    while (arg2 != 0) {
        if ((*(u32 *) arg0++ & 0xff) == val) {
            return arg0 - 1;
        }
        arg2--;
    }
    return 0;
}
