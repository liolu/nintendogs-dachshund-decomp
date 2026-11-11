/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02026bcc(void *);
extern void func_020254f0(void *);

void func_ov005_02161878(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x150) = 0x208;
    func_02026bcc(arg0);
    func_020254f0(arg0);
}
