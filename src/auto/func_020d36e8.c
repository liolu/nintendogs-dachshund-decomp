/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02044644(s16);                             /* extern */
s32 func_02092df4(s32, void *, s32);                /* extern */
M2C_UNK func_020d37a8(void *);                      /* extern */
M2C_UNK func_020ec2a0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0210835c(void *, void *);              /* extern */
M2C_UNK func_0210843c(void *, void *, s32);         /* extern */
M2C_UNK func_0210fdc8(void *);                      /* extern */

void func_020d36e8(void *arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_02044644(M2C_FIELD(arg0, s16 *, 0x9C));
    temp_r5 = M2C_FIELD(arg0, void **, 0x214);
    func_0210835c(arg0, arg0 + 0xC8);
    if (temp_r4 == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s16 *, 0x88) == 0) {
        func_0210843c(arg0, arg0 + 0xBC, 0x4010);
        if (func_02092df4(temp_r4, arg0 + 0xBC, 0x333) != 0) {
            func_020ec2a0(arg0 + 0x190, 5);
            func_0210fdc8(arg0);
        }
        func_020d37a8(arg0);
        return;
    }
    if (M2C_FIELD(temp_r5, s32 *, 8) == 0) {
        return;
    }
    func_0210fdc8(arg0);
    M2C_FIELD(temp_r5, s32 *, 8) = 0;
    M2C_FIELD(temp_r5, s32 *, 4) = 1;
}
