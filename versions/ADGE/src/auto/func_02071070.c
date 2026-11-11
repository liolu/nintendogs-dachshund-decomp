/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02070300(M2C_UNK);
void func_0207d050(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021506e4;

void func_02071070(s32 arg0) {
    func_02070300(M2C_FIELD(arg0, s32 *, 0x40));
    func_0207d050((s32) &data_021506e4, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
