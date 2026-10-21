#include "m2c.h"
void func_02111ca4(M2C_UNK arg0, s16 arg1, s16 arg2, s16 arg3) {
    u8 *p = (u8 *) arg0 + 0x18;
    int off = arg1 * 10;

    *(s16 *) (p + off) = arg1;
    *(s16 *) (p + off + 2) = -2;
    *(s16 *) (p + off + 4) = arg2;
    *(s16 *) (p + off + 6) = arg3;
}
