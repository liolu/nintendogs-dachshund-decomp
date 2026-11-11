/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02026c14(void *, void *, s32);
void func_02025538(void *);

void func_ov003_0216ddf8(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x152) = 0x17D;
    func_02026c14(arg0, (u8 *) arg0 + 0x100, 0x17D);
    func_02025538(arg0);
    *(s32 *) ((u8 *) arg0 + 0x948) |= 1;
}
