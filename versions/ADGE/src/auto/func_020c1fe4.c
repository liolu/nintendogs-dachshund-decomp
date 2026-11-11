/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020a7de0(M2C_UNK);
M2C_UNK func_020b29bc(M2C_UNK);
void func_020b95c4(M2C_UNK);
void func_020b95d0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020c1fe4(s32 arg0) {
    func_020b95d0(arg0, 4, func_020b29bc(-1), 0);
    func_020b95c4(arg0);
    func_020a7de0(1);
    M2C_FIELD(arg0, s32 *, 0x6C) = 1;
}
