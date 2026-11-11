/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02026704(void *);
extern void func_020255f8(void *);

void func_ov002_02169d70(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x150) = 0x0;
    func_02026704(arg0);
    func_020255f8(arg0);
}
