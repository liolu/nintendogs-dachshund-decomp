/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02026b9c(void *, void *, s32);
void func_02025538(void *);
void func_0202d804(void *, s32);

void func_ov003_0216aff8(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x152) = 0x21A;
    func_02026b9c(arg0, (u8 *) arg0 + 0x100, 0x21A);
    func_02025538(arg0);
    func_0202d804(arg0, 0);
}
