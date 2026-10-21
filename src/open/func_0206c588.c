#include "m2c.h"
M2C_UNK func_0206c470(M2C_UNK);                          /* extern */
M2C_UNK func_0207ee54(M2C_UNK, M2C_UNK (*)(s32), s32);  /* extern */
u32 func_02080c28(void);                                /* extern */
M2C_UNK func_02080c3c(u32);                             /* extern */
M2C_UNK func_01ffdb98(M2C_UNK, M2C_UNK, M2C_UNK, s32);  /* extern */
M2C_UNK func_0206c470(M2C_UNK);
M2C_UNK func_0207ee54(M2C_UNK, M2C_UNK (*)(s32), s32);
u32 func_02080c28(void);
M2C_UNK func_02080c3c(u32);
M2C_UNK func_01ffdb98(M2C_UNK, M2C_UNK, M2C_UNK, s32);
void func_0206c588(s32 arg0, s32 arg1, s32 arg2, u32 arg3, M2C_UNK (*arg4)(s32), s32 arg5) {
    u32 state;

    if (arg3 == 0) {
        if (arg4 == NULL) {
            return;
        }
        arg4(arg5);
        return;
    }
    func_0206c470(arg0);
    if (arg4 != NULL) {
        func_0207ee54(arg0, arg4, arg5);
        state = func_02080c28();
        *(u32 *) (0x4000000 + arg0 * 4 + 0xE0) = arg2;
        func_01ffdb98(arg0, 0x40000E0 + arg0 * 4, arg1, (arg3 >> 2) | 0xC5000000);
        func_02080c3c(state);
        return;
    }
    state = func_02080c28();
    *(u32 *) (0x4000000 + arg0 * 4 + 0xE0) = arg2;
    func_01ffdb98(arg0, 0x40000E0 + arg0 * 4, arg1, (arg3 >> 2) | 0x85000000);
    func_02080c3c(state);
}
