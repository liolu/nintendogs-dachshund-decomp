/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201408c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202fa18(void *);                      /* extern */
s32 func_0203535c(void *);                          /* extern */
M2C_UNK func_021058ac(s32);                         /* extern */
s32 func_02106ef0();                                /* extern */

void func_ov004_02163850(void *arg0) {
    M2C_UNK var_r1;

    M2C_FIELD(arg0, s32 *, 0x484) = 0;
    M2C_FIELD(arg0, s32 *, 0x2A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x2A0) - M2C_FIELD(arg0, s32 *, 0x484));
    M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3F0) - M2C_FIELD(arg0, s32 *, 0x484));
    M2C_FIELD(arg0, s32 *, 0x3FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3FC) - M2C_FIELD(arg0, s32 *, 0x484));
    M2C_FIELD(arg0, s32 *, 0x488) = (s32) (M2C_FIELD(arg0, s32 *, 0x488) + 1);
    if (func_02106ef0() != 0) {
        func_021058ac(M2C_FIELD(arg0, s32 *, 0x484));
    }
    if (func_0203535c(arg0) == 0) {
        var_r1 = 0;
    } else {
        func_0202fa18(arg0);
        var_r1 = 1;
    }
    func_0201408c(arg0, var_r1);
}
