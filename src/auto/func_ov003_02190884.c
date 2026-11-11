/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203b458(void *);
void func_ov003_021908d0(void *, s32, s32);

void func_ov003_02190884(void *arg0) {
    if (*(u16 *) ((u8 *) arg0 + 0xFC) > 20) {
        *(s32 *) ((u8 *) arg0 + 0x244) = 0;
        func_0203b458(arg0);
    }
    func_ov003_021908d0(arg0, 1, 0x300);
}
