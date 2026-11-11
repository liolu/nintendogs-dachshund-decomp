/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02026b9c(void *a, void *b);
void func_02025538(void *a);

void func_ov004_0216c1d8(void *arg0) {
    *(u16 *) ((u8 *) arg0 + 0x152) = 0x12D;
    func_02026b9c(arg0, (u8 *) arg0 + 0x100);
    func_02025538(arg0);
}
