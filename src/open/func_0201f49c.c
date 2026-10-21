#include "m2c.h"
extern s32 *data_0214da84;
s32 func_0203571c(void *arg0);
s32 func_020356ec(void *arg0);
void func_0201f49c(s32 arg0) {
    u32 limit;
    s32 temp;
    u16 r;

    limit = 0;
    if (func_0203571c((void *) arg0) != 0) {
        switch (M2C_FIELD(arg0, s8 *, 0x8D)) {
        case 2:
            limit = 0x50;
            break;
        case 0:
            limit = 0x32;
            break;
        case 1:
            break;
        default:
            limit = 0x64;
            break;
        }
    } else if (func_020356ec((void *) arg0) != 0) {
        switch (M2C_FIELD(arg0, s8 *, 0x8D)) {
        case 2:
            limit = 0x3C;
            break;
        case 0:
            limit = 0x1E;
            break;
        case 1:
            break;
        default:
            limit = 0x64;
            break;
        }
    }
    temp = (*data_0214da84 * 0x10DCD) + 1;
    *data_0214da84 = temp;
    r = (u16) (((u32) (u16) temp * 100) >> 16);
    if (r < limit) {
        M2C_FIELD(arg0, s32 *, 0x464) = 1;
    }
}
