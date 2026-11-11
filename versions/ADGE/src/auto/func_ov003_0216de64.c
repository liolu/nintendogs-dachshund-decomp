/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02025538(void *);
M2C_UNK func_02026c14(void *);

void func_ov003_0216de64(void *arg0) {
    s16 *p                             = (s16 *) ((u8 *) arg0 + 0x100);
    p[0x29]                            = 0x17B;
    ((s16 *) ((u8 *) arg0 + 0x156))[0] = 1;
    func_02026c14(arg0);
    func_02025538(arg0);
    *(u32 *) ((u8 *) arg0 + 0x948) |= 1;
}
