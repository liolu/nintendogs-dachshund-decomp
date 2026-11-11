/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206bd9c();                            /* extern */
M2C_UNK func_02075e84();                            /* extern */

void func_020786bc(void) {
    func_0206bd9c();
    func_02075e84();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
