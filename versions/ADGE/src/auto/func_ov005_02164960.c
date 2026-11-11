/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02044980(s32);
extern void *data_0215a064;

s32 func_ov005_02164960(void *arg0, u32 *arg1, u32 *arg2) {
    u32 *p;

    p = *(u32 **) ((u8 *) arg0 + 0x214);
    if (func_02044980(M2C_FIELD(arg0, s16 *, 0x9C)) != 0 && (M2C_FIELD(data_0215a064, u16 *, 0x84) & 1) != 0) {
        arg1[0] = p[1];
        arg1[1] = p[2];
        arg1[2] = p[3];
        arg2[0] = p[4];
        arg2[1] = p[5];
        arg2[2] = p[6];
        return 1;
    }
    return 0;
}
