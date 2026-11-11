/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206a3c0(s32, s32, s32, s32, s32);
s32 func_020d128c(void);

void func_020a19cc(s32 arg0) {
    s32 temp_r0;
    s32 temp_r3;

    if (func_020d128c() == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    if ((temp_r0 != 0) && (temp_r0 != 1) && (temp_r0 != 2)) {
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0);
    func_0206a3c0(0x04001050, 0, 4, temp_r3, 0x10 - temp_r3);
}
