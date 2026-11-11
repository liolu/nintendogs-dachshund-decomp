/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02026c14(void *);
void func_02025538(void *);

void func_ov003_0216de30(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x152) = 0x17c;
    func_02026c14(arg0);
    func_02025538(arg0);
    *(s32 *) ((u8 *) arg0 + 0x948) |= 1;
}
