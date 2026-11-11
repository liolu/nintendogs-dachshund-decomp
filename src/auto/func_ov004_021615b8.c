/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02026bcc(void *);
extern void func_02025a2c(void *);

void func_ov004_021615b8(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x150) = 0x44;
    func_02026bcc(arg0);
    func_02025a2c(arg0);
}
