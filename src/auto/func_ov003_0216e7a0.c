/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02026b9c(void *);
void func_02025538(void *);

void func_ov003_0216e7a0(u8 *arg0) {
    *(s16 *) (arg0 + 0x152) = 0;
    func_02026b9c(arg0);
    func_02025538(arg0);
    *(s32 *) (arg0 + 0x948) |= 1;
}
