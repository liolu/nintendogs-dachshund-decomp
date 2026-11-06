/* compiler: 1.2/sp2p3 -O2 */
#include "m2c.h"

M2C_UNK func_02009280(void *, s16);                 /* extern */

void func_020091f8(void *arg0, s32 arg1, s32 arg2) {
    s16 var_lr;
    void *var_ip;

    var_ip = arg0;
    var_lr = 0;
loop_1:
    if ((M2C_FIELD((arg0 + (var_lr * 4)), s32 *, 0x914) == 0) || (arg1 != M2C_FIELD((arg0 + (var_lr * 2)), s16 *, 0x834)) ||
        (arg2 != M2C_FIELD(var_ip, s8 *, 0x850))) {
        var_lr += 1;
        var_ip += 1;
        if ((s32) var_lr >= 7) {
            var_lr = -1;
        } else {
            goto loop_1;
        }
    }
    if (var_lr == -1) {
        return;
    }
    func_02009280(arg0, var_lr);
}
