/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020264e4(void *);
extern void func_02025594(void *);

void func_ov005_021633cc(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x152) = 0x7;
    func_020264e4(arg0);
    func_02025594(arg0);
}
