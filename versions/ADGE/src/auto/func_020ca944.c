/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020c94ec(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020ca944(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s16 *, 0x6E) = (s16) arg2;
    M2C_FIELD(arg0, s32 *, 0x78) = func_020c94ec(arg1, arg2, M2C_FIELD(arg0, s32 *, 0x1C) + 4);
}
