/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020042d8(M2C_UNK);

extern s32 *data_0215a058;

void func_02113b8c(void) {
    func_020042d8(*data_0215a058);
    *(u16 *) 0x04000060 = (*(u16 *) 0x04000060 & 0xFFFFCFFD) | 2;
}
