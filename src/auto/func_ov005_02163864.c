/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02025594(void *);
extern void func_020264e4(void *);

void func_ov005_02163864(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x152) = 0x223;
    func_020264e4(arg0);
    func_02025594(arg0);
}
