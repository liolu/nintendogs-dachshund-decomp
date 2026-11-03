/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0206b7b8(s32, s32, s32, s32, s32);
s32 func_020cba30(void);

void func_02101da4(s32 arg0) {
    s32 temp_r0;
    s32 temp_r3;

    if (func_020cba30() == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    if ((temp_r0 != 0) && (temp_r0 != 1) && (temp_r0 != 2)) {
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0);
    func_0206b7b8(0x04001050, 0, 4, temp_r3, 0x10 - temp_r3);
}
