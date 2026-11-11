/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0203535c(void *);                          /* extern */
M2C_UNK func_0203e5e8(void *, s32);                 /* extern */
M2C_UNK func_021058ac(s32);                         /* extern */
s32 func_02106ef0();                                /* extern */
M2C_UNK func_ov004_02168094(void *);                /* extern */

void func_ov004_021640cc(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x484) = 0;
    M2C_FIELD(arg0, s32 *, 0x2A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x2A0) - M2C_FIELD(arg0, s32 *, 0x484));
    M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3F0) - M2C_FIELD(arg0, s32 *, 0x484));
    M2C_FIELD(arg0, s32 *, 0x3FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3FC) - M2C_FIELD(arg0, s32 *, 0x484));
    M2C_FIELD(arg0, s32 *, 0x488) = (s32) (M2C_FIELD(arg0, s32 *, 0x488) + 1);
    if (func_02106ef0() != 0) {
        func_021058ac(M2C_FIELD(arg0, s32 *, 0x484));
    }
    func_ov004_02168094(arg0);
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x48A);
}
