/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02025538(void *);
extern void func_02026bdc(void *);

void func_ov004_0216bbb4(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x152) = 0x101;
    func_02026bdc(arg0);
    func_02025538(arg0);
}
