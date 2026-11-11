/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207ca98(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_02159e70;

void func_020ec4a0(s32 arg0) {
    if (!(M2C_FIELD(data_02159e70, s32 *, 0x4870) & 0x40000000)) {
        return;
    }
    func_0207ca98(0x13, M2C_FIELD(data_02159e70, s32 *, 0x4840), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x1C));
    func_0207ca98(0xE, 0x1C0, M2C_FIELD(arg0, s32 *, 0x10), 0x40);
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
