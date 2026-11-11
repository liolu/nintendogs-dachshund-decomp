/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020350fc(void *);
s32 func_0202cde8(void *, s32, s32, s32);
void func_0202f9a0(void *);

void func_ov003_0217a7f0(void *arg0) {
    if (*(u16 *) ((u8 *) arg0 + 0xFC) <= 0x1E) {
        return;
    }
    if (func_0202cde8(arg0, 0, func_020350fc(arg0), 1) != 0) {
        return;
    }
    func_0202f9a0(arg0);
}
