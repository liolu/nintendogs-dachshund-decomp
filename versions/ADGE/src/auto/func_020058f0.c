/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02068800(void);
void func_0207eb80(M2C_UNK, M2C_UNK);

void func_020058f0(void) {
    func_0207eb80(1, 1);
    func_02068800();
    *(s32 *) 0x04001000 |= 0x10000;
}
