/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02068770(M2C_UNK);

void func_020fc54c(s32 arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x214);
    if (M2C_FIELD(temp_r4, s32 *, 0x2B8) == 0) {
        return;
    }
    func_02068770(0);
    *(u16 *) 0x0400100A = (*(u16 *) 0x0400100A & 0x43) | 0x504;
    *(u16 *) 0x0400100A = (*(u16 *) 0x0400100A & ~3) | 1;
    *(s32 *) 0x04001000 |= 0x1200;
    *(s32 *) 0x04001000 &= ~0xE000;
    *(s16 *) 0x04001050              = 0;
    M2C_FIELD(temp_r4, s32 *, 0x2B8) = 0;
}
