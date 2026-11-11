/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025c4c(M2C_UNK);
void func_02025e24(M2C_UNK);

void func_02058f64(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x152) = 0x167;
    func_02025e24(arg0);
    func_02025c4c(arg0);
}
