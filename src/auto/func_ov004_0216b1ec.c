/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02026b9c(void *);
void func_02025538(void *);

void func_ov004_0216b1ec(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x152) = 8;
    *(s16 *) ((u8 *) arg0 + 0x154) = 8;
    func_02026b9c(arg0);
    func_02025538(arg0);
    *(s32 *) ((u8 *) arg0 + 0x484) = 0;
}
