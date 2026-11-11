/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02026bcc(void *);
extern void func_02025a88(void *);

void func_ov002_0216a320(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x150) = 0x84;
    func_02026bcc(arg0);
    func_02025a88(arg0);
}
