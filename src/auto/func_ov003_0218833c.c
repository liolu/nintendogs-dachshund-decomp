/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203e5ac(void *, s32, s32);
void func_ov003_0218846c(void *, s32, s32);

void func_ov003_0218833c(void *arg0) {
    func_ov003_0218846c(arg0, 6, 0x2F);
    if (*(u16 *) ((u8 *) arg0 + 0x11E) > 0x28) {
        func_0203e5ac(arg0, 0, 0x73);
        return;
    }
    if (*(s16 *) ((u8 *) arg0 + 0xEE) != 0x10D) {
        return;
    }
    func_0203e5ac(arg0, 0, 0x75);
}
