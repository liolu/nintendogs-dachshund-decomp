/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02026784(void *);
extern void func_020254f0(void *);

void func_ov003_02169578(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x150) = 0x93;
    func_02026784(arg0);
    func_020254f0(arg0);
}
