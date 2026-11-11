/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02080210(M2C_UNK, M2C_UNK);
void func_020c52a8(void);
void func_020c52bc(void);

void func_020c5e54(s32 arg0, s32 arg1, s32 arg2) {
    func_020c52bc();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_02080210(arg0 + 0x3C + (arg1 * 4), 4);
    func_020c52a8();
}
