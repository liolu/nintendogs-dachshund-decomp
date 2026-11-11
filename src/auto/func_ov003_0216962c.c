/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02026b30(void *);
extern void func_020254f0(void *);

void func_ov003_0216962c(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x150) = 0x30;
    func_02026b30(arg0);
    func_020254f0(arg0);
}
