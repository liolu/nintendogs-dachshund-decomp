/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02026bb4(void *);
extern void func_020254f0(void *);

void func_ov003_02169808(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x150) = 0x33;
    func_02026bb4(arg0);
    func_020254f0(arg0);
}
