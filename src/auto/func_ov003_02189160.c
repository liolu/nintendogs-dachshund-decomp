/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov003_0218927c(void *, s32, s32, s32, s32);

void func_ov003_02189160(void *arg0) {
    func_ov003_0218927c(arg0, 5, 5, 1, 0x57);
    *(u16 *) ((u8 *) arg0 + 0x12E) = (u16) 0xE000;
}
