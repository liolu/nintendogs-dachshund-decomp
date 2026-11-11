/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206a9a4(void);
void func_02074a80(void);

void func_02077e44(void) {
    func_0206a9a4();
    func_02074a80();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
