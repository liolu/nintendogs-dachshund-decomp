/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02035450(void *, s32);
void func_02039948(void *);
s32 func_020399a4(void *);
void func_0203e5e8(void *, s32);
void func_020a5a1c(s32, s8);
void func_ov003_0218a0f0(void *, s32);

void func_ov003_02182f04(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02035450(arg0, 6);
    func_ov003_0218a0f0(arg0, 0);
    M2C_FIELD(arg0, s16 *, 0x11C) = 1;
    M2C_FIELD(arg0, s16 *, 0x11E) = 0;
    if (temp_r4 == 0) {
        return;
    }
    if (func_020399a4(arg0) != 0) {
        func_020a5a1c(4, M2C_FIELD(arg0, s8 *, 0x88));
        func_02039948(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x48C) = 0;
    func_0203e5e8(arg0, 0x3A8);
}
