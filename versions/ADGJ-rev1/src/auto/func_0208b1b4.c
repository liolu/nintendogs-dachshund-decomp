/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207fc44(M2C_UNK);
M2C_UNK func_0208120c(void);
void func_02081220(M2C_UNK);
M2C_UNK func_0208a85c(M2C_UNK, M2C_UNK);
M2C_UNK func_0208b250(M2C_UNK);

void func_0208b1b4(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r1;
    s32 var_r5;

    var_r5  = arg0;
    temp_r4 = M2C_FIELD(var_r5, volatile s32 *, 8);
    if (var_r5 == 0) {
        return;
    }
loop_3:
    temp_r0 = func_0208120c();
    if (M2C_FIELD(var_r5, volatile s32 *, 0xC) & 4) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        func_0207fc44(var_r5 + 0x18);
        return;
    }
    M2C_FIELD(var_r5, volatile s32 *, 0xC) = (s32) (M2C_FIELD(var_r5, volatile s32 *, 0xC) | 8);
    func_02081220(temp_r0);
    if (func_0208a85c(var_r5, M2C_FIELD(var_r5, volatile s32 *, 0x10)) == 6) {
        return;
    }
    var_r5 = func_0208b250(temp_r4);
    if (var_r5 == 0) {
        return;
    }
    goto loop_3;
}
