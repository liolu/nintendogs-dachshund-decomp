/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02002228(M2C_UNK);
void func_02002240(M2C_UNK);
void func_020c5044(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020711c8(s32 arg0) {
    func_020c5044(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        return;
    }
    func_02002240(arg0 + 8);
    func_02002228(arg0 + 0x14);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) | 2);
}
