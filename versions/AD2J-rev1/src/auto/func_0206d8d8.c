/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffdb40(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0206d6c0(M2C_UNK, M2C_UNK, u32, M2C_UNK); /* extern */
M2C_UNK func_0206d868(M2C_UNK);                     /* extern */
M2C_UNK _Z24SetDMACompletionCallbackiPFviEi(M2C_UNK, M2C_UNK (*)(s32), s32); /* extern */

void func_0206d8d8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, u32 arg3, M2C_UNK (*arg4)(s32), s32 arg5) {
    func_0206d6c0(arg0, arg1, arg3, 0);
    if (arg3 == 0) {
        if (arg4 == NULL) {
            return;
        }
        arg4(arg5);
        return;
    }
    func_0206d868(arg0);
    if (arg4 != NULL) {
        _Z24SetDMACompletionCallbackiPFviEi(arg0, arg4, arg5);
        func_01ffdb40(arg0, arg1, arg2, (arg3 >> 2) | 0xC4000000);
        return;
    }
    func_01ffdb40(arg0, arg1, arg2, (arg3 >> 2) | 0x84000000);
}
