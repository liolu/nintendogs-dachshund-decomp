#include "m2c.h"
extern s32 *data_0215a034;
void func_020fe8f0(s32);
s32 func_020fd484(s32);
s32 func_020fe214(s32 arg0) {
    s16 *p = (s16 *) data_0215a034;

    if (p[arg0] == 0) {
        return 1;
    }
    if (p[arg0] == 2) {
        p[arg0] = 0;
        if (*(s32 *) ((s8 *) data_0215a034 + (arg0 << 2) + 8) != 0) {
            func_020fe8f0(*(s32 *) ((s8 *) data_0215a034 + (arg0 << 2) + 8));
            *(s32 *) ((s8 *) data_0215a034 + arg0 * 4 + 8) = 0;
        }
        if (func_020fd484(arg0) != 0) {
            return 1;
        }
    }
    return 0;
}
