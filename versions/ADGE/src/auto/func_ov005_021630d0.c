/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020264e4(void *a, void *b);
void func_02025594(void *a);

void func_ov005_021630d0(void *arg0) {
    *(u16 *) ((u8 *) arg0 + 0x152) = 0x1A1;
    func_020264e4(arg0, (u8 *) arg0 + 0x100);
    func_02025594(arg0);
}
