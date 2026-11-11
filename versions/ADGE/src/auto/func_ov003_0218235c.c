/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203e5ac(void *, s32, s32);
void func_ov003_02182bf8(void *, s32, s32, s32, s32);

void func_ov003_0218235c(void *arg0) {
    s32 f;

    if (*(u16 *) ((u8 *) arg0 + 0xFC) == 0x50) {
        func_0203e5ac(arg0, 1, 0);
    }
    f = (*(u16 *) ((u8 *) arg0 + 0xFC) > 0x64) ? 1 : 0;
    func_ov003_02182bf8(arg0, 8, 0x7F, 0, f);
}
