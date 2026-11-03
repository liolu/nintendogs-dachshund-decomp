/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0206b7b8(s32, s32, s32, s32, s32);

void func_020fb8e4(s32 arg0) {
    s32 temp_r1;
    s32 temp_r3;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xC);
    if ((temp_r1 != 0) && (temp_r1 != 1)) {
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0);
    func_0206b7b8(0x04001050, 0, 4, temp_r3, 0x10 - temp_r3);
}
