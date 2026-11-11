/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020d1bc4(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020d1b24(s32 arg0) {
    s32 var_r6;
    u16 temp_r5;

    temp_r5 = (u16) arg0;
    func_020d1bc4(4, (s32) temp_r5, 0);
    var_r6 = 0;
    do {
        func_020d1bc4(5, (s32) temp_r5, var_r6);
        var_r6 = (s32) (u16) (var_r6 + 1);
    } while ((u32) var_r6 < 0x14U);
}
