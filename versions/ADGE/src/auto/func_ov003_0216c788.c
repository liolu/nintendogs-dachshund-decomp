/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02026b9c(void *a, void *b);
void func_02025ad0(void *a);

void func_ov003_0216c788(void *arg0) {
    *(u16 *) ((u8 *) arg0 + 0x152) = 0x153;
    func_02026b9c(arg0, (u8 *) arg0 + 0x100);
    func_02025ad0(arg0);
}
