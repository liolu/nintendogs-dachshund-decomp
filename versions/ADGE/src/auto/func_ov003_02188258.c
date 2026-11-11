/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203e5ac(void *, s32, s32);
void func_ov003_0218846c(void *, s32, s32);

void func_ov003_02188258(void *arg0) {
    func_ov003_0218846c(arg0, 8, 0x7F);
    if (*(u16 *) ((u8 *) arg0 + 0x11E) > 0x1E) {
        func_0203e5ac(arg0, 0, 0x18E);
        return;
    }
    if (*(s16 *) ((u8 *) arg0 + 0xEE) != 0x10F) {
        return;
    }
    func_0203e5ac(arg0, 0, 0x190);
}
